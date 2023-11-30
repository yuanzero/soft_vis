using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Uduino;

public class arduino : MonoBehaviour
{
    UduinoManager maneger;
    public Transform[] controlPoints;
    // const int FLEX_PIN = A0; // 电压采集接口
                             // Measure the voltage at 5V and the actual resistance of your// 100k resistor, and enter them below:
    const float VCC = 5.0f; // 模块供电电压，ADC参考电压为V
    const float R_DIV = 20000.0f; // 分压电阻为20KΩ
                                 // Upload the code, then try to adjust these values to more// accurately calculate bend degree.
    // const float STRAIGHT_RESISTANCE = 11507f; // 平直时的电阻值，弯曲传感器  
    const float BEND_RESISTANCE = 24000.0f; // 180度弯曲时的电阻值

    const float STRAIGHT_RESISTANCE = 983f; // 平直时的电阻值，应变片

    private Vector3[] end_position = new Vector3[4] { Vector3.zero, Vector3.zero, Vector3.zero, Vector3.zero };
    private Vector3[] start_position = new Vector3[4] { Vector3.zero, Vector3.zero, Vector3.zero, Vector3.zero };

    // Start is called before the first frame update
    void Start()
    {
        maneger = UduinoManager.Instance;

        maneger.pinMode(AnalogPin.A0, PinMode.Input);

        // 初始化控制点的位置
        Debug.Log("Start method called");
        // 90°的位置
        end_position[0] = controlPoints[0].localPosition;
        end_position[1] = controlPoints[1].localPosition;
        end_position[2] = new Vector3(0, -3, -9);
        end_position[3] = new Vector3(0, -5, -13);

        // 

        // initial position
        start_position[0] = controlPoints[0].localPosition;
        start_position[1] = controlPoints[1].localPosition;
        start_position[2] = controlPoints[2].localPosition;
        start_position[3] = controlPoints[3].localPosition;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //int value = maneger.analogRead(AnalogPin.A0);

        // Read the ADC, and calculate voltage and resistance from it
        int flexADC = maneger.analogRead(AnalogPin.A0); 
        float flexV = flexADC * VCC / 1024.0f;
        float flexR = R_DIV * (VCC / flexV - 1.0f);
        //maneger.Serial.println("Voltage: " + String(flexV) + " V");
        //maneger.Serial.println("Resistance: " + String(flexR) + " ohms");
        // Use the calculated resistance to estimate the sensor's// bend angle:
        float angle = Map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE, 0, 180.0f);
        //maneger.Serial.println("Bend: " + String(angle) + " degrees");
        //maneger.Serial.println();

        // 遍历控制点数组，更新每个控制点的本地位置
        for (int i = 0; i < controlPoints.Length; i++)
        {
            if (controlPoints[i] == null)
            {
                Debug.LogError("controlPoints[" + i + "] is null");
            }

            // linear interpolation based on the start point and end points of 90 degree
            controlPoints[i].localPosition = start_position[i] + angle / 90f * (end_position[i] - start_position[i]); 
        }


        Debug.Log("Bend: " + angle + " degrees");
        //maneger.delay(500);
    }

    public static float Map(float value, float fromLow, float fromHigh, float toLow, float toHigh)
    {
        return (value - fromLow) * (toHigh - toLow) / (fromHigh - fromLow) + toLow;
    }
}
