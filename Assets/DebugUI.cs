using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DebugUI : MonoBehaviour
{
    public TextMeshProUGUI debugText; // ������ʾ������Ϣ���ı���

    private bool isDebugVisible = true; // ���Խ����Ƿ�ɼ�

    private void Start()
    {
        debugText.gameObject.SetActive(true); // ��ʼʱ���ص����ı���
    }

    private void Update()
    {
        // ����û����������������������ʾ/���ص��Խ���
        if (Input.GetKeyDown(KeyCode.D))
        {
            isDebugVisible = !isDebugVisible; // �л����Խ���Ŀɼ���

            debugText.gameObject.SetActive(isDebugVisible);
        }
    }

    private void OnEnable()
    {
        Application.logMessageReceived += HandleLog;
    }

    private void OnDisable()
    {
        Application.logMessageReceived -= HandleLog;
    }

    private void HandleLog(string logString, string stackTrace, LogType type)
    {
        // �����ﴦ��Debug.Log����������ӡ������̨��д����־�ļ�

        debugText.text += logString + "\n";
    }
}
