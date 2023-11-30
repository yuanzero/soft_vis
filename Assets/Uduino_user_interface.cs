using Uduino;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class Uduino_user_interface : MonoBehaviour
{
    public TMP_InputField pinInputField;  // 用于用户输入引脚号码的输入框
    public TMP_InputField Sensor_reader;  // 用于传感器输入
    public Button pinModeButton_LOW;      // 用于切换引脚模式的按钮
    public Button pinModeButton_HIGH;      // 用于切换引脚模式的按钮
    public Toggle[] optionToggles;     // 用于切换引脚模式的按钮
    public Slider analogOutputSlider; // 用于控制引脚模拟输出值的滑块

    private int pinNumber = 13;            // 存储引脚号码
    private bool isOutputMode = true;        // 存储引脚模式（输入或输出）
    private int analogOutputValue;    // 存储引脚模拟输出值
    //private string pinInputField_text;


    void Start()
    {
        UduinoManager.Instance.InitAllArduinos();
        pinModeButton_LOW.onClick.AddListener(OnPinModeButtonClick_low);
        pinModeButton_HIGH.onClick.AddListener(OnPinModeButtonClick_high);
        analogOutputSlider.onValueChanged.AddListener(OnAnalogOutputSliderValueChanged);

        //pinInputField_text = GetComponent<InputField>();
        pinInputField.onValueChanged.AddListener(OnPinNumberChanged);

        // 添加选项Toggle的状态变化监听器
        foreach (Toggle toggle in optionToggles)
        {
            toggle.onValueChanged.AddListener(OnToggleValueChanged);
        }

        // 激活pin
        UduinoManager.Instance.pinMode(pinNumber, PinMode.Output);

}

    void Update()
    {
        if (isOutputMode)
        {
            UduinoManager.Instance.analogWrite(pinNumber, analogOutputValue);
        }
        else
        {
            int read_data = UduinoManager.Instance.analogRead(pinNumber);
            Sensor_reader.text = read_data.ToString();

        }
    }

    void OnPinNumberChanged(string pin)
    {
        pinNumber = int.Parse(pinInputField.text);
        // Initialize
        UduinoManager.Instance.pinMode(pinNumber, PinMode.Output);
        analogOutputValue = 0;
    }
    

    void OnPinModeButtonClick_high()
    {
        pinNumber = int.Parse(pinInputField.text);

        if (isOutputMode)
        {
            analogOutputValue = 255 ;
        }

        Debug.Log("OnPinModeButtonClick_high " );
    }

    void OnPinModeButtonClick_low()
    {
        pinNumber = int.Parse(pinInputField.text);

        if (isOutputMode)
        {
            analogOutputValue = 0;
        }
        
    }

    void OnAnalogOutputSliderValueChanged(float value)
    {
        pinNumber = int.Parse(pinInputField.text);
        analogOutputValue = Mathf.RoundToInt(value * 255);
    }

    private void OnToggleValueChanged(bool value)
    {
        // 遍历所有选项Toggle
        for (int i = 0; i < optionToggles.Length; i++)
        {
            // 检查选中的Toggle
            if (optionToggles[i].isOn)
            {
                // 执行相应的操作
                switch (i)
                {
                    case 0:
                        // 第一个选项被选中，执行操作1
                        isOutputMode = true;
                        UduinoManager.Instance.pinMode(pinNumber, PinMode.Output);
                        Debug.Log("Option 1 is selected.");
                        break;
                    case 1:
                        // 第二个选项被选中，执行操作2
                        isOutputMode = false;
                        UduinoManager.Instance.pinMode(pinNumber, PinMode.Input);
                        Debug.Log("Option 2 is selected.");
                        break;
                        // 可以继续添加其他选项的操作
                }
            }
        }
    }
}
