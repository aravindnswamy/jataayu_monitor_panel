#include <Adafruit_GFX.h> 
#include <MCUFRIEND_kbv.h>  
#include <TouchScreen.h>
#include <math.h>
#include <stdint.h>
#include <Fonts/FreeMono18pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans24pt7b.h>
#include <Fonts/FreeMono9pt7b.h>

//LCD_ID - ILI9481

MCUFRIEND_kbv tft;


#define YP A3  
#define XM A2  
#define YM 9  
#define XP 8  

#define MINPRESSURE 20
#define MAXPRESSURE 1000

#define TS_MINX 115
#define TS_MINY 95
#define TS_MAXX 910
#define TS_MAXY 965

TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);
TSPoint p;

//--------Colours---------
   #define BLACK   0x0000
   #define BLUE    0x001F
   #define RED     0xF800
   #define GREEN   0x07E0
   #define CYAN    0x07FF
   #define MAGENTA 0xF915
   #define YELLOW  0xFFE0
   #define WHITE   0xFFFF
   #define DGREEN  0x1E44
   #define PINK    0xF86D 
   #define ORANGE  0xFB21
   #define LBLUE   0x2B3F
   #define VIOLET  0xB81D

#define SWAP(a, b) {int tmp = a; a = b; b = tmp;}

int x,y,z;
int a=10,b=10,c=10,d=10;

//---Password---
   #define A 1
   #define B 2
   #define C 3
   #define D 4
   
bool SECURITY_FLAG=0;

//  
//  int adc2=159;
//  unsigned int count = 0 , s = 0;
//  const int currentPin = A5;
//  const unsigned long sampleTime = 50000UL;                         
//  const unsigned long numSamples = 250UL;                           
//  const unsigned long sampleInterval = sampleTime/numSamples;        
//  const int adc_zero = 512;

void setup() 
{
  Serial.begin(115200);
  tft.reset();
  tft.begin(0x9481);
  tft.setRotation(1);
  tft.setTextWrap(0);
  tft.fillScreen(BLACK); 
 
 Boot(); 
 Auth(); 
 Homescreen();
}

void loop() 
{
 // tft.lcdOff();
//  Homescreen();
delay(600);
 // tft.lcdOn();
//Curve_Plot();
delay(600);
//dft(250,sampleInterval ,0,100,5,1,3);
   
}

 
//void dft(int arraysize,float interval,float f0,float fn,float stepsize,int detail,int window_status)
//{
//  tft.fillScreen(BLACK);
//  float sum,sumi,sumr,sumti,sumtr,sumt=0;
//  int j,k=0, b[200];
//  float a[251];
//   int t=0;
//
//  unsigned long prevMicros = micros() - sampleInterval ;
//
//
// while (count < numSamples)
// {
//   if (micros() - prevMicros >= sampleInterval)
//   {
//     int adc_raw = analogRead(currentPin); 
//     a[s] = map(adc_raw,0,1023,0,20);
//     
//     s++;
//     ++count;
//     prevMicros += sampleInterval;
//   }
// }
//
//  
//if(window_status==1)  //flat-top window
//{
//  for(int i=0;i<1+arraysize;i++)
//  {
//    float b=3.1415*i/(arraysize-1);
//   a[i] = a[i]*( 1 - (1.93*cos(2*b)) + (1.29*cos(4*b)) - (0.388*cos(6*b)) + (0.028*cos(8*b)));
//  // Serial.println(a[i]);
//  }
//}
//
//if(window_status==2) //hann window
//{ 
//  for(int i=0;i<1+arraysize;i++)
//  {
//   float b=2*3.1415*i/(arraysize-1);
//   a[i] = a[i]*0.5*(1-cos(b));
//  //Serial.println(a[i]);
//  }
//}
//
//if(window_status==3)//hamming window
//{ 
//  for(int i=0;i<1+arraysize;i++)
//  {
//   float b=2*3.1415*i/(arraysize-1);
//   a[i] = a[i]*(0.54-0.46*cos(b));
//  //Serial.println(a[i]);
//  }
//}
// 
//for(float f=f0; f<=fn; f=f+stepsize)
//   {
//    for(int i=0;i<1+(arraysize*detail);i++)
//      {
//        j=i-k;
//        if(j>=arraysize){k=k+arraysize;}
//        sumti=a[j]*(sin(6.28*f*i*interval*0.001));
//        sumtr=a[j]*(cos(6.28*f*i*interval*0.001));              
//        sumi=sumi+sumti;
//        sumr=sumr+sumtr; 
//      }
//      
//     sum=sqrt(sumi*sumi+sumr*sumr)/(arraysize*detail);
////     Serial.print(f);
////     Serial.print("\t");
// Serial.println(sum);
//     
//     b[t] =(int)(20-sum)*310/20;
//      Serial.println( b[t]);    
//     tft.fillRect(8*t,b[t],4,320-b[t],RED);
//     t++;
//     sumi=0; sumr=0;
//     j=0;   k=0; 
//   }
////   for(int i=0;i<t;t++)
////      {
////       tft.fillRect(8*t,b[t],4,320-b[t],RED);
////      }
//}   
//     
