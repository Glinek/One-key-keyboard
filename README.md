# One-key-keyboard
![GitHub](https://img.shields.io/github/license/Glinek/One-key-keyboard) ![GitHub last commit](https://img.shields.io/github/last-commit/Glinek/One-key-keyboard) 
## Origin
This keyboard has one quite unique (but not orginal) feature, it can detect how hard key is pressed. At first i wanted to use coal trace (just like in potentiometer) but it's imposible to solder to coal and i didn't have time to order pcb. So new idea was born. Why not use fotoresistor and LED. Coal trace would work better for sure but i like this. Additionaly i added 0.96inch OLED display. EVERYTHING have to have screen nowadays. 
## Parts and stuff
* Raspberry pi pico
* 0.96 OLED
* Green LED
* Fotoresistor
* 1.5M ohm resistor
* 200 ohm resistor
* 3x M2 screewes
* 3x brass inserts
* 2x 4mm springs
.stl  and .step files are in __*parts*__ folder
## Schematic
![schemat](https://user-images.githubusercontent.com/102923486/221257588-25357822-f11c-486e-9d4c-bd071604f142.png)
Don't judge my painting skills. I was too lazy to make it in proper cad :)
## Process
![1](https://user-images.githubusercontent.com/102923486/221259004-22ddb946-e126-426b-be8a-acb90a2d9197.jpg)

First design, not so bad but without screen

![2](https://user-images.githubusercontent.com/102923486/221259020-c6f1a2ff-bd72-4ba0-a981-d47b9ab728e0.jpg)
![3](https://user-images.githubusercontent.com/102923486/221259046-99cba833-7e16-4d67-84dc-0e1f14d3eec8.jpg)
![20230224_160005](https://user-images.githubusercontent.com/102923486/221259143-b04add88-e8d4-4a1d-a3ae-11ce29a04e66.jpg)
![20230224_174230](https://user-images.githubusercontent.com/102923486/221259154-b6fd54a9-3d8e-4de8-874e-843f56bc9dc2.jpg)
![20230224_183914](https://user-images.githubusercontent.com/102923486/221270931-dedf6632-f927-4d6c-a8fd-8e864a3e2931.jpg)
![20230224_183917](https://user-images.githubusercontent.com/102923486/221259221-ac30d287-d59d-48c5-a3be-0ab0afd70e91.jpg)

After a little bit of soldering...

![20230224_185812](https://user-images.githubusercontent.com/102923486/221259183-49206f39-b3aa-4450-beaa-e85605015f66.jpg)

5 total versions. Not so bad

## Final result
![20230224_200628](https://user-images.githubusercontent.com/102923486/221269548-91aa75fb-f8aa-48b4-a263-8a5369e74c06.jpg)

### This keyboard can be used as few buttons in one, for me two works the best, or as fancy potentiometer.

[2 switch mode](https://user-images.githubusercontent.com/102923486/221269634-040bc86f-e84d-4a13-a24f-08de56a14121.mp4)

[PWM signal](https://user-images.githubusercontent.com/102923486/221269887-491a1d62-5a2d-4d71-b4e2-12a55dac9e6d.mp4)


