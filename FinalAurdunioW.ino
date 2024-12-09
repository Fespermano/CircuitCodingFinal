//Otto Fesperman
#include <Adafruit_CircuitPlayground.h>

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  // initialize the serial communication:
  
  // initialize the ledPin as an output:
}
int click;
//int clock;
void loop() {
  // check if data has been sent from the computer:
  if (Serial.available() > 0) {
    // read the most recent byte (which will be from 0 to 255):
    click = Serial.read();
    //clock = Serial.read();
    // set the color the LED:
    if(click == 1){
      //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080); 
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
    delay(800);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); 
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(400);
    //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(800);
    //P4 SET A White
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(2, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(5, 0xFFFFFF);    
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(8, 0xFFFFFF);  
    CircuitPlayground.setPixelColor(9, 0xFFFFFF);
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
   
    delay(800); //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080);
    
    delay(400); //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(800);
    //P4 SET A White
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(2, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(5, 0xFFFFFF);    
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(8, 0xFFFFFF);  
    CircuitPlayground.setPixelColor(9, 0xFFFFFF);
     delay(400);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); 
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(800); 
     //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080);
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
    delay(800);
   //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(400);
//SET 2
    //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080); 
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
    delay(800);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); 
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(400);
    //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(800);
    //P4 SET A White
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(2, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(5, 0xFFFFFF);    
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(8, 0xFFFFFF);  
    CircuitPlayground.setPixelColor(9, 0xFFFFFF);
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
   
    delay(800); //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080);
    
    delay(400); //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(800);
    //P4 SET A White
    CircuitPlayground.setPixelColor(0, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(1, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(2, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(3, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(4, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(5, 0xFFFFFF);    
    CircuitPlayground.setPixelColor(6, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(7, 0xFFFFFF); 
    CircuitPlayground.setPixelColor(8, 0xFFFFFF);  
    CircuitPlayground.setPixelColor(9, 0xFFFFFF);
     delay(400);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); 
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(800); 
     //P1 SET A  purple
    CircuitPlayground.setPixelColor(0, 0x800080); 
    CircuitPlayground.setPixelColor(1, 0x800080); 
    CircuitPlayground.setPixelColor(2, 0x800080); 
    CircuitPlayground.setPixelColor(3, 0x800080); 
    CircuitPlayground.setPixelColor(4, 0x800080); 
    CircuitPlayground.setPixelColor(5, 0x800080);  
    CircuitPlayground.setPixelColor(6, 0x800080); 
    CircuitPlayground.setPixelColor(7, 0x800080); 
    CircuitPlayground.setPixelColor(8, 0x800080);  
    CircuitPlayground.setPixelColor(9, 0x800080);
    delay(400);
    //P2 SET C green
     CircuitPlayground.setPixelColor(0, 0x06f127); 
    CircuitPlayground.setPixelColor(1, 0x06f127); 
    CircuitPlayground.setPixelColor(2, 0x06f127); 
    CircuitPlayground.setPixelColor(3, 0x06f127); 
    CircuitPlayground.setPixelColor(4, 0x06f127); 
    CircuitPlayground.setPixelColor(5, 0x06f127);    
    CircuitPlayground.setPixelColor(6, 0x06f127); 
    CircuitPlayground.setPixelColor(7, 0x06f127); 
    CircuitPlayground.setPixelColor(8, 0x06f127);  
    CircuitPlayground.setPixelColor(9, 0x06f127); 
    delay(800);
   //SET D blue
    CircuitPlayground.setPixelColor(0, 0x149cff); 
    CircuitPlayground.setPixelColor(1, 0x149cff); 
    CircuitPlayground.setPixelColor(2, 0x149cff); 
    CircuitPlayground.setPixelColor(3, 0x149cff); 
    CircuitPlayground.setPixelColor(4, 0x149cff); 
    CircuitPlayground.setPixelColor(5, 0x149cff);    
    CircuitPlayground.setPixelColor(6, 0x149cff); 
    CircuitPlayground.setPixelColor(7, 0x149cff); 
    CircuitPlayground.setPixelColor(8, 0x149cff);  
    CircuitPlayground.setPixelColor(9, 0x149cff);
    delay(400);
        

    }
     else if(click == 0){
      CircuitPlayground.clearPixels();
     }
     if(click == 2){
     //Light show 2 
    CircuitPlayground.setPixelColor(0, 0xfffdfa); //half white
    CircuitPlayground.setPixelColor(1, 0xfffdfa); 
    CircuitPlayground.setPixelColor(2, 0xfffdfa); 
    CircuitPlayground.setPixelColor(3, 0xfffdfa); 
    CircuitPlayground.setPixelColor(4, 0xfffdfa); 
    CircuitPlayground.setPixelColor(5, 0xC70039);  
    CircuitPlayground.setPixelColor(6, 0xC70039); 
    CircuitPlayground.setPixelColor(7, 0xC70039); 
    CircuitPlayground.setPixelColor(8, 0xC70039);  
    CircuitPlayground.setPixelColor(9, 0xC70039); //red 
    delay(400);

    CircuitPlayground.setPixelColor(0, 0xC70039); //red
    CircuitPlayground.setPixelColor(1, 0xC70039); 
    CircuitPlayground.setPixelColor(2, 0xC70039); 
    CircuitPlayground.setPixelColor(3, 0xC70039); 
    CircuitPlayground.setPixelColor(4, 0xC70039); 
    CircuitPlayground.setPixelColor(5, 0xfffdfa);  
    CircuitPlayground.setPixelColor(6, 0xfffdfa); 
    CircuitPlayground.setPixelColor(7, 0xfffdfa); 
    CircuitPlayground.setPixelColor(8, 0xfffdfa);  
    CircuitPlayground.setPixelColor(9, 0xfffdfa);  //half white
    delay(400);
    //P2 SET C green
    
    CircuitPlayground.setPixelColor(0,0xfbf504); //y
    CircuitPlayground.setPixelColor(1, 0xfbf504); 
    CircuitPlayground.setPixelColor(2, 0xfbf504); 
    CircuitPlayground.setPixelColor(3, 0xfbf504); 
    CircuitPlayground.setPixelColor(4, 0xfbf504); 
    CircuitPlayground.setPixelColor(5, 0xfbf504);    
    CircuitPlayground.setPixelColor(6, 0xfbf504); 
    CircuitPlayground.setPixelColor(7, 0xfbf504); 
    CircuitPlayground.setPixelColor(8, 0xfbf504);  
    CircuitPlayground.setPixelColor(9, 0xfbf504); 
    delay(800);
    // P3 SET B yellow
    CircuitPlayground.setPixelColor(0, 0xff8f0c); //w
    CircuitPlayground.setPixelColor(1, 0xff8f0c); 
    CircuitPlayground.setPixelColor(2, 0xff8f0c); 
    CircuitPlayground.setPixelColor(3, 0xff8f0c); 
    CircuitPlayground.setPixelColor(4, 0xff8f0c); 
    CircuitPlayground.setPixelColor(5, 0xff8f0c);    
    CircuitPlayground.setPixelColor(6, 0xff8f0c); 
    CircuitPlayground.setPixelColor(7, 0xff8f0c); 
    CircuitPlayground.setPixelColor(8, 0xff8f0c);  
    CircuitPlayground.setPixelColor(9, 0xff8f0c);
    delay(400);
    //SET D blue
    CircuitPlayground.setPixelColor(0, 0xa704fb); //p
    CircuitPlayground.setPixelColor(1, 0xa704fb); 
    CircuitPlayground.setPixelColor(2, 0xa704fb); 
    CircuitPlayground.setPixelColor(3, 0xa704fb); 
    CircuitPlayground.setPixelColor(4, 0xa704fb); 
    CircuitPlayground.setPixelColor(5, 0xa704fb);    
    CircuitPlayground.setPixelColor(6, 0xa704fb); 
    CircuitPlayground.setPixelColor(7, 0xa704fb); 
    CircuitPlayground.setPixelColor(8, 0xa704fb);  
    CircuitPlayground.setPixelColor(9, 0xa704fb);

    CircuitPlayground.setPixelColor(0, 0xfb6b04); //o
    CircuitPlayground.setPixelColor(1, 0xfb6b04); 
    CircuitPlayground.setPixelColor(2, 0xfb6b04); 
    CircuitPlayground.setPixelColor(3, 0xfb6b04); 
    CircuitPlayground.setPixelColor(4, 0xfb6b04); 
    CircuitPlayground.setPixelColor(5, 0xfb6b04);    
    CircuitPlayground.setPixelColor(6, 0xfb6b04); 
    CircuitPlayground.setPixelColor(7, 0xfb6b04); 
    CircuitPlayground.setPixelColor(8, 0xfb6b04);  
    CircuitPlayground.setPixelColor(9, 0xfb6b04);

    CircuitPlayground.setPixelColor(0,0xfbf504); //y
    CircuitPlayground.setPixelColor(1, 0xfbf504); 
    CircuitPlayground.setPixelColor(2, 0xfbf504); 
    CircuitPlayground.setPixelColor(3, 0xfbf504); 
    CircuitPlayground.setPixelColor(4, 0xfbf504); 
    CircuitPlayground.setPixelColor(5, 0xfbf504);    
    CircuitPlayground.setPixelColor(6, 0xfbf504); 
    CircuitPlayground.setPixelColor(7, 0xfbf504); 
    CircuitPlayground.setPixelColor(8, 0xfbf504);  
    CircuitPlayground.setPixelColor(9, 0xfbf504); 
    
    
    
     }
     else if(click == 3){
      CircuitPlayground.clearPixels();
     }
  } 
}
