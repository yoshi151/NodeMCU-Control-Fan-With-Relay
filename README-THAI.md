
<h2>อุปกรณ์</h2><br>
   
NodeMCU 1 อัน<br>
Relay 1 อัน<br>

<h2>การเชื่อมต่อ</h2><br>

<h3>ขั้นตอนที่1</h3> เชื่อม nodemcu กับ relay ดัง<a href="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture_1.png">รูปที่ 1</a><br>
เชื่อม relay กับ พัดลมดัง<a href="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture_2.png">รูปที่ 2</a> //ขั้นตอนนี้อันตรายมาก คุณสามารถเชื่อมต่อ relay กับ led แทน ดัง<a href="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture_3.png">รูปที่ 3</a> เพื่อความปลอดภัย<br>
   
<h2>การตั้งค่าและดาวน์โหลด</h2><br>
   
<h3>ขั้นตอนที่2</h3> ดาวน์โหลด Arduino IDE จาก https://www.arduino.cc/en/main/software.<br>
<a href="https://www.arduino.cc/en/main/software">
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step2.png"><br>
</a>

<h3>ขั้นตอนที่3</h3> เปิด Arduino IDE กดไปที่ File > Preferences จากนั้น ก๊อปปี้ ลิ้งนี้ http://arduino.esp8266.com/stable/package_esp8266com_index.json
แล้ววางในช่อง Additional Boards Manager URLs เมื่อเสร็จกด ok<br>
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step3.png"><br>

<h3>ขั้นตอนที่4</h3> กด Tools > Board:"Arduino/Genuion Uno" > Boards Manager... จากนั้นพิพม์คำว่า nodemcu ลงไปในชองว่าง เลือก library อันแรก  จากนั้นกดดาวน์โหลด 
เมื่อเสร็จให้เปลี่ยน board จาก Arduino/Genuion Uno ให้เป็น NodeMCU 0.9 หรือ 0.10 จากนั้นก็ปิด Arduino IDE ไป
//ตอนนี้คุณได้ดาวน์โหลด board สำหรับ nodemcu แล้ว<br>
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step4.png"><br>

<h3>ขั้นตอนที่5</h3> ดาวโหลด BLYNK library จาก https://www.blynk.cc/getting-started/ เมื่อเข้าไปแล้วให้กดปุ่ม DOWNLOAD BLYNK LIBRARY และดาวโหลด
Blynk_Release_v0.5.4.zip(เวอร์ชั่น อะไรก็ได้)<br>
<a href="https://www.blynk.cc/getting-started/">
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step5.png"><br>
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step5.1.png"><br>
</a>

<h3>ขั้นตอนที่6</h3> เมื่อดาวโหลดเสร็จให้เปิด(เป็นไฟล์Zipก็ได้)จะเจอโฟลเดอร์สองอันคือ librarys กับ tools จากนั้นให้เปิดโฟลเดอร์ Arduino(ปกติจะอยู่ที่โฟลเดอร์ Home)
ถ้าเจอโฟลเดอร์ librarys ให้นำ Blynks libraryทั้งสองอัน(librarys กับ tools)ไปที่โฟลเดอร์ Arduino แล้วเดี๋ยว LIBRARY ของ BLYNK จะเข้าไปในโฟลเดอร์ LIBRARY ของ Arduino ส่วน tools จะอยู่ในโฟลเดอร์ Arduino<br>
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step6.png"><br>
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step6.1.png"><br>

<h2>เปลี่ยนโปรแกรมและดาวโหลดแอป BLYNK ลงในมือถือ</h2><br>

<h3>ขั้นตอนที่7</h3> เปิด Arduino IDE จากนั้นก๊อปปี้โค้ดจากด้านบนไปวางบน Arduino IDE เมื่อเสร็จให้ดูว่า board เป็น NodeMCU 0.9 หรือ 0.10 หรือยัง upload speed เป็น 115200(อยู่ใน tools ของ Arduino IDE)หรือยัง และมี Blynk library อยู่ใน Arduino IDE แล้วหรือยัง(เปิดไปที่ Sketch > include library ใน contributed library ถ้าเจอ library ที่ชื่อว่า Blynk, BlynkEsp8266_Lib, ESP8266wifi, ESP8266... และอีกมากมาย แปลว่ามีBlynk library แล้ว)ถ้ายัง ให้ย้อนกลับไปดูว่าทำตามทุกขั้นตอนที่ผ่านมาหรือยัง<br>
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step7.png"><br>

<h3>ขั้นตอนที่8</h3> ดาวโหลดแอป BLYNK ลงในมือถือ sign up สร้าง project ใหม่ และตั้งชื่อให้เรียบร้อย ตอนนี้ BLYNK จะส่ง token ไปที่ gmail ของคุณจากนั้นให้คุณกดที่หน้าจอจะมี widget box เด้งออกมา กดไปที่ปุ่มที่ชื่ิอว่า Button เมื่อมีปุ่มอยู่ที่ project คุณ ให้กดที่ปุ่มเพื่อที่จะตั้งค่ามัน ตั้งชื่อให้มัน ใน output เปลี่ยน pin ให้เป็น GP16 และเปลี่ยน mode เป็น switch<br>
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step8.png">
<img src="https://github.com/yoshi151/NodeMCU-Control-Fan-With-Relay/blob/master/picture/step8.1.png"><br>

<h3>ขั้นตอนที่9</h3> เปลี่ยนโค้ดตรง<br>
char auth[] = "Blynk token" <br>
char ssid[] = "ชื่อ wifi" <br>
char pass[] = "password ของ wifi" <br>

<h2>โหลดโปรแกรม</h2><br>

<h3>ขั้นตอนสุดท้าย(10)</h3>เสียบ nodemcu กับ คอม แล้วไปที่ Tools > port เปลี่ยน port เป็น port ที่คุณเสียบ nodemcu เข้าไป เมื่อเสร็จกดที่รูปลูกศร(มุมบนซ้าย)
เพื่อโหลดโปรแกรมเข้า nodemcu และรอจนกว่ามันจะเสร็จ
