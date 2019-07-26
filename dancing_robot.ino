#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left servo signal
Servo servoRight;                            // Declare right servo signal

int PIEZOPIN = 5;                            // Declare pin that the piezo is connected to.
// DECLARE LED PINS HERE

int unit = 300;

// One octave of notes between A4 and A5, for Piezo Greeting
int note_A4 = 440;
int note_As4 = 466; int note_Bb4 = note_As4;
int note_B4 = 494;
int note_C5 = 523;
int note_Cs5 = 554; int note_Db5 = note_Cs5;
int note_D5 = 587;
int note_Ds5 = 622; int note_Eb5 = note_Ds5;
int note_E5 = 659;
int note_F5 = 698;
int note_Fs5 = 740; int note_Gb5 = note_Fs5;
int note_G5 = 784;
int note_Gs5 = 830; int note_Ab5 = note_Gs5;



void setup()
{
  pinMode(PIEZOPIN, OUTPUT);                 // Attach piezo to pin 5. 
  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
  servoLeft.writeMicroseconds(1500);        // Calibrate left servo
  servoRight.writeMicroseconds(1500);       // Calibrate right servo
  // Attach LED pins here.

//   //Full speed forward
//   servoLeft.writeMicroseconds(1700);        
//  servoRight.writeMicroseconds(1300);
//  delay(500)
//}
//
//  
//  //Full speed backward
//  servoLeft.writeMicroseconds(1300);
//  servoRight.writeMicroseconds(1700);
//  delay(500);
// 
// // Turn left in place
// servoLeft.writeMicroseconds(1300);   // Left wheel clockwise
// servoRight.writeMicroseconds(1300);  // Right wheel clockwise
//delay(6000);
//
// // Turn right in place
// servoLeft.writeMicroseconds(1700);   // Left wheel counterclockwise
// servoRight.writeMicroseconds(1700); // Right wheel counterclockwise
// delay(6000);
//
//   //Full speed forward
//   servoLeft.writeMicroseconds(1700);        
//  servoRight.writeMicroseconds(1300);
//  delay(500); 
//
//
// //Full speed forward
//   servoLeft.writeMicroseconds(1700);        
//  servoRight.writeMicroseconds(1300);
//  delay(500);
//  
//  //Full speed backward
//  servoLeft.writeMicroseconds(1300);
//  servoRight.writeMicroseconds(1700);
//  delay(500);
// 
//
// // Turn left in place
// servoLeft.writeMicroseconds(1300);   // Left wheel clockwise
// servoRight.writeMicroseconds(1300);  // Right wheel clockwise
//delay(6000);
//
// // Turn right in place
// servoLeft.writeMicroseconds(1700);   // Left wheel counterclockwise
// servoRight.writeMicroseconds(1700); // Right wheel counterclockwise
// delay(6000);
//
//   //Full speed forward
//   servoLeft.writeMicroseconds(1700);        
//  servoRight.writeMicroseconds(1300);
//  delay(200); 
//
////Full speed backward
//  servoLeft.writeMicroseconds(1300);
//  servoRight.writeMicroseconds(1700);
//  delay(500);
//
//  // Turn right in place
// servoLeft.writeMicroseconds(1700);   // Left wheel counterclockwise
// servoRight.writeMicroseconds(1700); // Right wheel counterclockwise
// delay(600);
//
//  // Turn left in place
// servoLeft.writeMicroseconds(1300);   // Left wheel clockwise
// servoRight.writeMicroseconds(1300);  // Right wheel clockwise
//delay(600);
//
//
////Full speed backward
//  servoLeft.writeMicroseconds(1300);
//  servoRight.writeMicroseconds(1700);
//  delay(500);
//
//  // Turn right in place
// servoLeft.writeMicroseconds(1700);   // Left wheel counterclockwise
// servoRight.writeMicroseconds(1700); // Right wheel counterclockwise
// delay(600);
//
//  // Turn left in place
// servoLeft.writeMicroseconds(1300);   // Left wheel clockwise
// servoRight.writeMicroseconds(1300);  // Right wheel clockwise
//delay(600);
//
////Full speed backward
//  servoLeft.writeMicroseconds(1300);
//  servoRight.writeMicroseconds(1700);
//  delay(500);
//  
//}  

  

    

  
  

  
  
 

 

  //Heart 
  //left side
  //Full speed forward
  servoLeft.writeMicroseconds(1520);        
  servoRight.writeMicroseconds(1000);
   delay(3550);

   //Full speed forward 2
  servoLeft.writeMicroseconds(1550);        
  servoRight.writeMicroseconds(1050);
   delay(100);

   //Full speed forward 3
  servoLeft.writeMicroseconds(1580);        
  servoRight.writeMicroseconds(1100);
   delay(100);

   //Full speed forward 4
  servoLeft.writeMicroseconds(1610);        
  servoRight.writeMicroseconds(1150);
   delay(100);

   //Full speed forward 5
  servoLeft.writeMicroseconds(1640);        
  servoRight.writeMicroseconds(1200);
   delay(100);

   //Full speed forward 6
  servoLeft.writeMicroseconds(1670);        
  servoRight.writeMicroseconds(1250);
   delay(100);

   //Full speed forward 7
  servoLeft.writeMicroseconds(1700);        
  servoRight.writeMicroseconds(1300);
   delay(100);

    //Full speed forward
   servoLeft.writeMicroseconds(1700);        
  servoRight.writeMicroseconds(1300);
  delay(1000); 

  //stop
  servoLeft.writeMicroseconds(1500);        
  servoRight.writeMicroseconds(1500);
   delay(250);









// BACKTRACE

  //Full speed backward
   servoLeft.writeMicroseconds(1300);        
  servoRight.writeMicroseconds(1700);
  delay(1000); 

     //Full speed backward 7
   servoLeft.writeMicroseconds(1300);        
  servoRight.writeMicroseconds(1700);
   delay(100);

    //Full speed backward 6
  servoLeft.writeMicroseconds(1330);        
  servoRight.writeMicroseconds(1750);
   delay(100);
   
  //Full speed  backward 5
  servoLeft.writeMicroseconds(1360);        
  servoRight.writeMicroseconds(1800);
   delay(100);

   //Full speed backward 4
  servoLeft.writeMicroseconds(1390);        
  servoRight.writeMicroseconds(1850);
   delay(100);


   //Full speed backward 3
  servoLeft.writeMicroseconds(1420);        
  servoRight.writeMicroseconds(1900);
   delay(100);

  
 //Full speed backward 2
  servoLeft.writeMicroseconds(1450);        
  servoRight.writeMicroseconds(1950);
   delay(100);
   


  //Full speed backward
  servoLeft.writeMicroseconds(1480);        
  servoRight.writeMicroseconds(2000);
   delay(3550);

   //stop
  servoLeft.writeMicroseconds(1500);        
  servoRight.writeMicroseconds(1500);
  delay(500);




  //right side
  //Full speed forward
  servoLeft.writeMicroseconds(2000);        
  servoRight.writeMicroseconds(1480);
   delay(3550);

   //Full speed forward 2
  servoLeft.writeMicroseconds(1950);        
  servoRight.writeMicroseconds(1450);
   delay(100);

   //Full speed forward 3
  servoLeft.writeMicroseconds(1900);        
  servoRight.writeMicroseconds(1420);
   delay(100);

   //Full speed forward 4
  servoLeft.writeMicroseconds(1850);        
  servoRight.writeMicroseconds(1390);
   delay(100);

   //Full speed forward 5
  servoLeft.writeMicroseconds(1800);        
  servoRight.writeMicroseconds(1360);
   delay(100);

   //Full speed forward 6
  servoLeft.writeMicroseconds(1750);        
  servoRight.writeMicroseconds(1330);
   delay(100);

   //Full speed forward 7
  servoLeft.writeMicroseconds(1700);        
  servoRight.writeMicroseconds(1300);
   delay(100);

    //Full speed forward
   servoLeft.writeMicroseconds(1700);        
  servoRight.writeMicroseconds(1300);
  delay(1000); 

  //stop
  servoLeft.writeMicroseconds(1500);        
  servoRight.writeMicroseconds(1500);
   delay(7000);


   


    
  

  }
void loop(){
}



 
