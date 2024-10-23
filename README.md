<h1 align="center">SenseCAP Watcher</h1>
<div align="center">
<a href="https://discord.gg/jGWQStEvEp"><img alt="Discord" src="https://img.shields.io/discord/862602258452578314?label=Join%20Community"></a>
<a href="https://x.com/seeedstudio" ><img src="https://img.shields.io/twitter/follow/seeedstudio.svg?style=social" /> </a>
<br>
<a href="https://www.reddit.com/r/Seeed_Studio/submit/?type=TEXT" target="_blank"><img alt="Share on Reddit" src="https://img.shields.io/twitter/url?url=https%3A%2F%2Fwww.reddit.com%2Fr%2FSeeed_Studio%2F&style=social&logo=Reddit&label=Reddit"></a>&nbsp;
<a href="https://www.linkedin.com/shareArticle?mini=true&url=https%3A//github.com/Seeed-Studio/OSHW-SenseCAP-Watcher" target="_blank"><img alt="Share on LinkedIn" src="https://img.shields.io/twitter/url?url=https%3A%2F%2Fwww.linkedin.com%2Fcompany%2F1475165%2Fadmin%2Fdashboard%2F&style=social&logo=LinkedIn&label=LinkedIn"></a>&nbsp;
<a href="https://www.facebook.com/sharer/sharer.php?u=https%3A//github.com/Seeed-Studio/OSHW-SenseCAP-Watcher" target="_blank"><img alt="Share on Facebook" src="https://img.shields.io/twitter/url?url=https%3A%2F%2Fwww.facebook.com%2Fseeedstudiosz%2F&style=social&logo=Facebook&label=Facebook"></a>&nbsp;
<a href="https://t.me/share/url?text=Awesome%20communication%20engine!&url=https%3A%2F%2Fgithub.com%2FSeeed-Studio%2FOSHW-SenseCAP-Watcher" target="_blank"><img alt="Share on Telegram" src="https://img.shields.io/twitter/url?url=https%3A%2F%2Fwww.facebook.com%2Fseeedstudiosz%2F&style=social&logo=Telegram&label=Telegram"></a>&nbsp;
<a href="https://wa.me/?text=Awesome%20communication%20engine!%5Cn%20https%3A%2F%2Fgithub.com%2FSeeed-Studio%2FOSHW-SenseCAP-Watcher" target="_blank"><img alt="Share on Whatsapp" src="https://img.shields.io/twitter/url?url=https%3A%2F%2Fwww.facebook.com%2Fseeedstudiosz%2F&style=social&logo=Whatsapp&label=Whatsapp"></a>&nbsp;
<a href="mailto:?subject=Awesome%20Physical%20AI%20Agent&body=Checkout%20this%20awesome%20physical%20ai%20agent%3A%0Ahttps%3A//github.com/Seeed-Studio/OSHW-SenseCAP-Watcher" target="_blank"><img alt="Share on Mail" src="https://img.shields.io/twitter/url?url=https%3A%2F%2Fwww.facebook.com%2Fseeedstudiosz%2F&style=social&logo=GMail&label=GMail"></a>
<br>
<a href="https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/stargazers"><img alt="GitHub Repo stars" src="https://img.shields.io/github/stars/Seeed-Studio/OSHW-SenseCAP-Watcher"></a>
<a href="https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/network/members"><img alt="GitHub forks" src="https://img.shields.io/github/forks/Seeed-Studio/OSHW-SenseCAP-Watcher"></a>
<a href="https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/pulls"><img alt="GitHub Pull Requests" src="https://img.shields.io/github/issues-pr/Seeed-Studio/OSHW-SenseCAP-Watcher?label=pull%20request"></a>
<a href="https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/issues"><img alt="GitHub Issues" src="https://img.shields.io/github/issues/Seeed-Studio/OSHW-SenseCAP-Watcher"></a>
<a href="https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/graphs/contributors"><img alt="GitHub contributors" src="https://img.shields.io/github/contributors/Seeed-Studio/OSHW-SenseCAP-Watcher"></a>
<a href="https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/blob/main/LICENSE"><img alt="GitHub License" src="https://img.shields.io/github/license/Seeed-Studio/OSHW-SenseCAP-Watcher"></a>

<img alt="SenseCAP Watcher Readme" src="assets/watcher_banner.png"> </img>

</div>

## Introduction

SenseCAP Watcher is built on ESP32S3, incorporating a Himax WiseEye2 HX6538 AI chip with Arm Cortex-M55 & Ethos-U55, excelling in image and vector data processing. Equipped with a camera, microphone, speaker, SenseCAP Watcher can see, hear, talk. Plus, with LLM-enabled SenseCraft suite, SenseCAP Watcher understands your commands, perceives its surroundings, and triggers actions accordingly.

[![Watcher Introduction](https://img.youtube.com/vi/ny22Z0cAIqE/0.jpg)](https://www.youtube.com/watch?v=ny22Z0cAIqE)

## Table of Open Source Material

- [📁 Firmwave](./Firmware/): Watcher's factory firmware, project code.

- [📁 Hardware](./Hardware/): Open source hardware documentation available for Watcher.
    -[📎 SenseCAP Watcher v1.0 Schematic](./Hardware/SenseCAP_Watcher_v1.0_SCH.pdf)

- [📁 Documentation](./Documentation/): All Wiki documents about Watcher.

## SenseCAP Watcher Quick Start Guide

### Must-Do

Before using Watcher as a space assistant, we must ensure that the following three steps are performed successfully, which is the basis for all subsequent steps.

#### Step 1. Installation Packaging

The Watcher comes with a unique packaging that doubles as a stylish, calendar-like stand. By placing the Watcher inside this stand, you can create an attractive decoration for your home. Follow the step-by-step instructions below and refer to the accompanying video for a visual guide on how to install your Watcher in its stand.

https://files.seeedstudio.com/wiki/watcher_getting_started/watcher-packaging.mp4

### Step 2. Power On

To power on your Watcher device, press and hold the wheel button located on the upper right corner for approximately 3 seconds until the Seeed Studio logo appears on the screen.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/power_on.gif" style={{width:650, height:'auto'}}/></div>

<br />

Once the logo is displayed, release the button and allow the device to complete its initialization process. After a few moments, the Watcher will display its main menu, indicating that it is ready for use.

:::tip
If the device won't turn on with a long press, the device may be low on power and you may need to connect a cable to power it up before you can wake up the Watcher.
:::

### Step 3. Device Binding

:::caution
[SenseCraft Pro](https://wiki.seeedstudio.com/watcher_price/) will automatically activate the trial service when your device is tethered to the SenseCraft APP.
:::

After powering on your Watcher, if it has not been previously bound to a device, it will prompt you to connect to the SenseCraft app. Alternatively, you can find the "Connect to APP" option in the Settings menu. The Watcher will then display a QR code to download the SenseCraft app.

You can either scan the QR code or use the provided link to download the app.

<div class="get_one_now_container" style={{textAlign: 'center'}}>
    <a class="get_one_now_item" href="https://sensecraft-app-download.seeed.cc">
            <strong><span><font color={'FFFFFF'} size={"4"}> Download APP 🖱️</font></span></strong>
    </a>
</div>

<br />

To proceed with binding your Watcher to the SenseCraft app, follow these steps:

**1.** On your Watcher, rotate the wheel button clockwise to enter the QR code interface for binding the device.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/1.svg" style={{width:550, height:'auto'}}/></div>

**2.** Open the SenseCraft app on your mobile device and tap the plus sign (+) in the top right corner to add your Watcher by scanning the QR code.

:::tip
Ensure that your mobile device's Bluetooth permissions are enabled, as the binding process requires a Bluetooth connection.
:::

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/2.svg" style={{width:550, height:'auto'}}/></div>

**3.** After successfully scanning the QR code, the app will navigate to the network configuration page. Select a 2.4GHz Wi-Fi network to connect your Watcher to the internet.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/3.svg" style={{width:550, height:'auto'}}/></div>

Tap the "Next" button to proceed.

**4.** Choose a name for your Watcher and select an appropriate group for it.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/4.svg" style={{width:550, height:'auto'}}/></div>

Tap the "Finish" button to complete the setup process.

**5.** The SenseCraft app will display a tutorial page, providing guidance on how to use your Watcher. Take a moment to familiarize yourself with the instructions.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/5.svg" style={{width:550, height:'auto'}}/></div>

Once the setup is complete, the app will open a chat window to communicate with your Watcher, while the Watcher will return to its main menu.

With the binding process finished, your Watcher is now connected to the SenseCraft app, and you can start exploring its features and capabilities. The app serves as a convenient way to interact with your Watcher, adjust settings, and receive notifications remotely.


## Schedule a task for Watcher

Next, select the method you want to use to schedule an executable task for Watcher.

import Tabs from '@theme/Tabs';
import TabItem from '@theme/TabItem';

<Tabs>
<TabItem value="Built-in task templates" label="Built-in task templates">

To run a task from the Task Templates on your Watcher, follow these steps:

**1.** From the main menu, use the wheel button to navigate to the **Task Templates** option.

**2.** Press the wheel button to enter the Task Templates submenu.

**3.** Scroll through the available task templates using the wheel button until you find the desired model task.

**4.** Press the wheel button to select and start running the chosen task.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/run_template.gif" style={{width:650, height:'auto'}}/></div>

<br />

Once the task begins, the Watcher will display an animated emoji face on the screen. This emoji indicates that the device is actively monitoring for the target object specified by the selected task template.

When the Watcher detects the target object, the display will switch from the emoji animation to a real-time view of the detected object. This allows you to see what the Watcher has identified.

If the target object moves out of the Watcher's view or is no longer detected, the display will automatically return to the animated emoji face, signifying that the device is still monitoring for the target.

Task Templates:

- Human Detection:
   - This task template is designed to detect the presence of human beings.
   - When the Watcher identifies a **person**, it will trigger an alarm notification.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/task-temp-people-detected.png" style={{width:210, height:'auto'}}/></div><br />

- Pet Detection:
   - The Pet Detection task template focuses on recognizing cats or dogs.
   - If the Watcher detects a **cat**, it will trigger an alarm notification.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/task-temp-pet.png" style={{width:210, height:'auto'}}/></div><br />

- Gesture Detection:
   - This task template is configured to identify the "paper" hand gesture.
   - When the Watcher recognizes the **paper gesture**, it will trigger an alarm notification.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/task-temp-gesture.png" style={{width:210, height:'auto'}}/></div><br />

Each of these task templates has specific alarm triggering conditions based on the detection of their respective targets: humans, cats, or the paper gesture. By using these templates, you can quickly set up the Watcher to monitor for the desired object without the need for extensive configuration.

</TabItem>

<TabItem value="Through the APP" label="Through the APP">

:::danger
Fees may apply for using some of SenseCraft AI's services, please refer to the documentation below for details:

**[SenseCraft AI for Watcher Plans and Benefits](https://wiki.seeedstudio.com/watcher_price/)**
:::

The SenseCraft APP allows you to send Tasks to your Watcher device. In this example, we will demonstrate the process of sending a task using one of the sample tasks provided by Watcher. Let's use the command *If you see a candles, please notify me*.

**1.** Open the SenseCraft APP and navigate to the chat window for your connected Watcher device.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/6.svg" style={{width:550, height:'auto'}}/></div><br />

**2.** In the chat window, either select the desired task from the available options or manually type in the command *If you see a candles, please notify me*. Send the command to your Watcher by tapping the send button or pressing enter.

**3.** Upon receiving the command, Watcher will interpret it and break it down into a task flow consisting of **When**, **Do**, and **Capture Frequency** components.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/7.svg" style={{width:550, height:'auto'}}/></div>

<br />

Review the parsed task flow to ensure that Watcher has correctly understood your command. The app will display the interpreted task details for your verification. If any part of the task flow does not align with your intended command, you can modify the task details by accessing the **Detail Config** section within the app.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/8.svg" style={{width:550, height:'auto'}}/></div>

<br />

**4.** Once you have confirmed or adjusted the task details, click the **Run** button to send the finalized task to your Watcher.

Watcher will download the task instructions, and once the download is complete, it will transform into a vigilant monitoring system, ready to detect any instances of candles.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/9.svg" style={{width:700, height:'auto'}}/></div>

<br />

**5.** If Watcher identifies a candles, it will send an alert based on the predefined settings, which may include flashing lights, audible alarms, and notifications through the SenseCraft APP.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/10.svg" style={{width:550, height:'auto'}}/></div>

:::note
Please note that due to the time constraints of the task flow, **there will be a minimum interval between consecutive alerts to avoid excessive notifications**.
:::

By following these steps, you can effectively send commands to your Watcher using the SenseCraft APP, enabling it to perform specific monitoring tasks and notify you when the specified conditions are met.

Remember to regularly review and adjust your Watcher's settings and task flows to ensure optimal performance and alignment with your monitoring requirements. For a more detailed description and explanation of the APP's tasks and options, as well as a detailed description of the intervals, please read **[Watcher Task Assignment Guideline](https://wiki.seeedstudio.com/getting_started_with_watcher_task/)** to learn more.

</TabItem>

<TabItem value="By Voice" label="By Voice">

:::danger
Fees may apply for using some of SenseCraft AI's services, please refer to the documentation below for details:

**[SenseCraft AI for Watcher Plans and Benefits](https://wiki.seeedstudio.com/watcher_price/)**
:::

The Watcher offers a convenient and intuitive way to send tasks or engage in conversation using voice commands, thanks to its "Push to Talk" feature. This functionality is accessible from any screen or interface on the device, making it easy to interact with the Watcher without navigating through menus. Here's a step-by-step guide on how to use this feature:

1. Activate Push to Talk:

   - Locate the Wheel Button on the top-right corner of the Watcher.
   - Press and hold the Wheel Button to enter the voice input interface.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/push_to_talk.gif" style={{width:650, height:'auto'}}/></div><br />

2. Speak Your Command or Message:

   - While holding the Wheel Button, clearly speak your task or message to the Watcher.
   - You can assign tasks, such as "Tell me if the baby is crying" or "If the dog is stealing food, say stop Copper". (Copper is the name of my dog.)

3. Release the Wheel Button:

   - Once you have finished speaking, release the Wheel Button.
   - The Watcher will process your voice input and determine whether it is a task assignment.

4. Task Assignment:

   - If the Watcher recognizes your voice input as a task assignment, it will automatically break down your task into relevant components.
   - The Watcher will display cards on its screen, showing the **Object** (what to monitor), **Behavior** (what action to look for), **Notification** (how to alert you), **Time Range** (when to monitor), and **Frequency** (how often to monitor).
   - Review the displayed information to ensure it accurately represents your intended task.
   - If the details are correct, confirm the task, and the Watcher will begin executing it according to the specified parameters.
   - If Watcher misunderstands your task, long press the scroll wheel button and you can continue through the dialogue to try to correct Watcher's understanding of the task. If you still can't understand it correctly after several attempts, we recommend that you use the SenseCraft APP to place the task.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/80.jpg" style={{width:650, height:'auto'}}/></div>

Tips for Optimal Usage:

- Speak clearly and at a moderate pace to ensure accurate voice recognition.
- When speaking, please get as close to Watcher as possible, about **3 ~ 10cm** distance speaking recognition accuracy is best.
- Minimize background noise to improve the Watcher's ability to understand your voice commands.
- Be specific and concise when assigning tasks to help the Watcher accurately interpret your intentions.

By leveraging the Push to Talk feature, you can effortlessly send tasks and engage in conversations with the Watcher, making your interaction with the device more natural and efficient.

:::note
If you encounter an error of **0x7002**, it means that the current Watcher's network status is not good and the audio service call failed, please change the network or location and retry again.
:::

</TabItem>

</Tabs>


## To end a running task

1. Tap the screen once or press the wheel button.

2. A confirmation popup will appear with two options: **Main Menu** and **End Task**. To terminate the task, either tap **End Task** on the screen or use the scroll wheel to navigate to "End Task" and press the scroll wheel button to confirm.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/end_task.png" style={{width:210, height:'auto'}}/></div><br />

3. Alternatively, you can end the task via the SenseCraft APP on your mobile device by pressing the **End** button on the task card.

<div style={{textAlign:'center'}}><img src="https://files.seeedstudio.com/wiki/watcher_getting_started/end-task-phone.png" style={{width:250, height:'auto'}}/></div>



## Flash Firmware





## Quick Build Firmware




## Table of Wiki Documentation




## License

This project is licensed under the Apache License, Version 2.0 (the "License");

You may not use this file except in compliance with the License.

You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

See the License for the specific language governing permissions and limitations under the License.

Please see the [LICENSE](./LICENSE) file for more details.

---

## Thank you all!![![](https://raw.githubusercontent.com/aregtech/areg-sdk/master/docs/img/pin.svg)](#thank-you)

Special thanks to all contributors and supporters that starred this repository.

**Our amazing contributors**:

<a href="https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=angular/angular-ja" />
</a><br><br><br>

Do you like this project? Please join us or [give](https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher) a ⭐. This will help to attract more contributors.

Do you have an idea or found a bug? Please open an [issue](https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/issues/new/choose) or start a [discussion](https://github.com/Seeed-Studio/OSHW-SenseCAP-Watcher/discussions).


**Follow us** at<br />

<a href="https://discord.gg/jGWQStEvEp"><img alt="Discord" src="https://img.shields.io/discord/862602258452578314?label=Join%20Community"></a>
<a href="https://x.com/seeedstudio" ><img src="https://img.shields.io/twitter/follow/seeedstudio.svg?style=social" /> </a>
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-seeedstudio-blue?style=flat&logo=linkedin&logoColor=b0c0c0&labelColor=363D44)](https://www.linkedin.com/company/seeedstudio/)


<div align="right">[ <a href="#table-of-contents">↑ Back to top ↑</a> ]</div>

---
