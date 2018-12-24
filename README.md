
YOU NEED:
    
<br>NODEMCU * 1 <br>RELAY * 1 <br>
     
CONNECTION<br>
step 1: Connect nodemcu to relay as shown in Picture 1.<br> And connect relay to fan as shown in Picture 2. //This step is very dangerous.You can connect relay to led as shown in Picture 3. It will be safer.
SETUP AND INSTALLATION<br>

step 2: Download Arduino IDE from https://www.arduino.cc/en/main/software.

step 3: Open Arduino IDE click File > Preferences then copy this link.
http://arduino.esp8266.com/stable/package_esp8266com_index.json and paste it on the Additional Boards Manager URLs and click ok.

step 4: Click on Tools > Board:"Arduino/Genuion Uno" > Boards Manager...
then type nodemcu on the empty block. Select the frist one (esp8266 by ESP8266 Community) and click install.
When you finish change the board to NodeMCU 0.9 or 0.10 then close Arduino IDE.
//Now you can code on nodemcu board.

step 5: Now you need to dowload BLYNK library. All you need to do is go to https://www.blynk.cc/getting-started/ 
and then click on the button DOWNLOAD BLYNK LIBRARY. And download Blynk_Release_v0.5.4.zip(other version is fine).

step 6: Open it(.zip file) you will find two folder call librarys and tools .Then open a new folder. Go to your Arduino folder mine is in /Home .Now when you open it.You will find a folder call Librarys.Then move the Blynks library(both of them)to the Arduino folder.

CHANGE THE CODE/DOWNLOAD BLYNK TO YOUR PHONE<br>
    
step 7: Open Arduino IDE and copy the code from above and paste it on Arduino IDE make sure that your board is NodeMCU 0.9 or 0.10 ,the upload speed is 115200(in Tools) and there a Blynk library in your Arduino library by open Sketch > include library 
. In contributed library you will found library call Blynk, BlynkEsp8266_Lib, ESP8266wifi, ESP8266... and many more.

step 8: Download Blynk on your phone then sign up. Create new project and name it .Now you will get a token from your gmail. Click on the screen. The widget box will pop out so you can add button controllers.When button is in your project.Click on it again. It will go to button setting.Rename it whatever you like.In output change the pin to GP16 and set mode to switch.

step 9: Now you have to change the code. 
change <br>
char auth[] = "your Blynk token" <br>
char ssid[] = "your wifi name" <br>
char pass[] = "your wifi password" <br>

RUN THE CODE<br>
step 10: Plug nodemcu to your computer. Then go to Tools > port and change to port of nodemcu.Now upload the code to nodemcu by press the arrow button and wait for it to finish.
