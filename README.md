# Bow-training-device
คือ อุปกรณ์ที่ติดอยู่บนคันธนูผู้ใช้เพื่อช่วยฝึกนักยิงธนูมือใหม่ให้ถือคันธนูและเล็งยิงในท่าที่ถูกต้อง 
เมื่อผู้ใช้เปิดเครื่องและถือคันธนูอยู่ในท่าทาง(ตำแหน่งในแกนx,y,z)ที่ถูกต้องจะส่งเสียงเพื่อบอกผู้ใช้

## ที่มาและความสำคัญ
ในปัจจุบันการยินธนูถือเป็นกีฬาและงานอดิเรกอย่างหนึ่ง แต่ว่าการยิงธนูนั้นหากจะยิงให้ถูกเป้าหมายที่ต้องการจะต้องประกอบไปด้วยปัจจัยต่างๆ เช่น อุปกรณ์ที่ใช้,ท่าทางการจับคันธนู จึงได้เกิดโปรเจคนี้ขึ้นมาเพื่อสร้างอุปกรณ์ที่ใช้ฝึกฝนผู้ที่ต้องการการจับคันธนูให้อยู่ในองศาที่ถูกต้อง

## กลุ่มเป้าหมาย
+ บุคคลทั่วไปที่ต้องการฝึกท่าการยิงธนู

## รายละเอียดโปรเจค

### Perception Module
- WiFi Ethernet Module ESP-01 / ESP8266
- 3-Axis Gyroscope & 3-Axis Accelerometer

### Behavior (Blynk App)
1. แสดงกราฟองศาต่อเวลา(วินาที)

### Behavior
1. อ่านค่าแกนx,y,zและองศาแกนx,y,z
2. ถ้าค่าองศาอยู่ระหว่าง0-45องศา Red dot laserจะเปล่งแสง
3. แสดงค่าองศาผ่าน 7 Segment
4. ถ้าผู้ใช้เล็งองศาไปที่ 0 Active Buzzerจะส่งเสียง

### Manipulation Module
- Red dot Laser
- Active Buzzer 
- I2C 4 Digit 7-Segment Display

### โครงสร้างพื้นฐาน
![diagram picture][diagram]

[diagram]: https://https://github.com/jojoeza10/Bow-training-device/blob/master/image/diagram.jpg "Diagram"

### ระบบการทำงาน 
![flowchart picture][flowchart]

[flowchart]: https://https://github.com/jojoeza10/Bow-training-device/blob/master/image/Flowchart.jpg "flowchart"

