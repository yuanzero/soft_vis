using System.Collections.Generic;
using UnityEngine;

public class CurvePointsAndNormals : MonoBehaviour
{
    public int numPoints = 10; // �Ⱦ�������
    public GameObject pointPrefab; // ���ڱ�ʾ�Ⱦ���Ԥ����
    public GameObject normalPrefab; // ���ڱ�ʾ��������Ԥ����
    public float normalLength = 0.5f; // �������ĳ���
    public GameObject line; // ����

    private LineRenderer lineRenderer; // ���ڻ������ߵ�LineRenderer���
    private List<GameObject> points; // �洢�Ⱦ����б�
    private List<GameObject> normals; // �洢���������б�

    void Start()
    {
        lineRenderer = line.GetComponent<LineRenderer>();
        points = new List<GameObject>();
        normals = new List<GameObject>();

        // �������߳���
        float length = 0f;
        Vector3 prevPoint = lineRenderer.GetPosition(0);
        for (int i = 1; i < lineRenderer.positionCount; i++)
        {
            Vector3 currPoint = lineRenderer.GetPosition(i);
            length += Vector3.Distance(prevPoint, currPoint);
            prevPoint = currPoint;
        }

        // ����Ⱦ��ļ������
        float interval = length / (numPoints - 1);

        // ����Ⱦ�������ͷ�����
        for (int i = 0; i < numPoints; i++)
        {
            // ���㵱ǰ���λ�ú���������
            float distance = i * interval;
            Vector3 point = GetPointAtDistance(distance);
            Vector3 tangent = GetTangentAtDistance(distance);

            // ���㷨����
            Vector3 normal = Vector3.Cross(tangent, Vector3.up).normalized;

            // �����Ⱦ��ͷ�������GameObject
            GameObject pointObj = Instantiate(pointPrefab, point, Quaternion.identity);
            GameObject normalObj = Instantiate(normalPrefab, point + normal * normalLength, Quaternion.identity);

            // ���Ⱦ��ͷ����������б�
            points.Add(pointObj);
            normals.Add(normalObj);
        }
    }

    void Update()
    {
        // ���µȾ��ͷ�������λ�úͷ���
        for (int i = 0; i < numPoints; i++)
        {
            float distance = i * (lineRenderer.positionCount - 1) / (numPoints - 1);
            Vector3 point = GetPointAtDistance(distance);
            Vector3 tangent = GetTangentAtDistance(distance);
            Vector3 normal = Vector3.Cross(tangent, Vector3.up).normalized;

            points[i].transform.position = point;
            normals[i].transform.position = point + normal * normalLength;
            normals[i].transform.rotation = Quaternion.LookRotation(normal, tangent);
        }
    }

    // ���ݾ����ȡ�����ϵĵ�����
    Vector3 GetPointAtDistance(float distance)
    {
        float length = 0f;
        Vector3 prevPoint = lineRenderer.GetPosition(0);
        for (int i = 1; i < lineRenderer.positionCount; i++)
        {
            Vector3 currPoint = lineRenderer.GetPosition(i);
            float segmentLength = Vector3.Distance(prevPoint, currPoint);
            if (length + segmentLength >= distance)
            {
                float t = (distance - length) / segmentLength;
                return Vector3.Lerp(prevPoint, currPoint, t);
            }
            length += segmentLength;
            prevPoint = currPoint;
        }
        return prevPoint;
    }

    // ���ݾ����ȡ�����ϵ���������
    Vector3 GetTangentAtDistance(float distance)
    {
        float length = 0f;
        Vector3 prevPoint = lineRenderer.GetPosition(0);
        for (int i = 1; i < lineRenderer.positionCount; i++)
        {
            Vector3 currPoint = lineRenderer.GetPosition(i);
            float segmentLength = Vector3.Distance(prevPoint, currPoint);
            if (length + segmentLength >= distance)
            {
                float t = (distance - length) / segmentLength;
                return Vector3.Lerp(prevPoint, currPoint, t) - prevPoint;
            }
            length += segmentLength;
            prevPoint = currPoint;
        }
        return prevPoint - lineRenderer.GetPosition(lineRenderer.positionCount - 2);
    }
}