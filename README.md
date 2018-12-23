
YOU NEED: NODEMCU * 1 RELAY * 1 

FOR CODE:   

step 1: download Arduino IDE from https://www.arduino.cc/en/main/software.

step 2: open Arduino IDE click File > Preferences then copy this link.
http://arduino.esp8266.com/stable/package_esp8266com_index.json and paste it on the Additional Boards Manager URLs and click ok.

step 3: click on Tools > Board:"Arduino/Genuion Uno" > Boards Manager...
then type nodemcu on the empty block. select the frist one (esp8266 by ESP8266 Community) and click install.
when you finish change the board to NodeMCU 0.9 or 0.10 then close it.
//now you can code on nodemcu board.

step 4: now you need to dowload BLYNK library. all you need to do is go to https://www.blynk.cc/getting-started/ 
and then click on the button DOWNLOAD BLYNK LIBRARY. now download Blynk_Release_v0.5.4.zip(can use other version).

step 5: open it(.zip file) you will find two folder call librarys and tools .then open a new folder. go to your Arduino folder mine is in /Home .now when you open it.you will find a folder call Library.then move the Blynks library(both of them)to the Arduino folder.
//now you finish the installation

step 6: open Arduino IDE and copy the code from above and paste it on Arduino IDE make sure that your board is NodeMCU 0.9 or 0.10 ,the upload speed is 115200(in Tools) and there a Blynk library in your Arduino library by open Sketch > include library 
and in contributed library you will found library call Blynk, BlynkEsp8266_Lib, ESP8266wifi, ESP8266... and many more

step 7: plug nodemcu to your computer. then go to Tools > port and change to port of nodemcu.now upload the code to nodemcu by press the arrow button and wait for it to finish.
