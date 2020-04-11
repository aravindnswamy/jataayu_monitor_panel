void About()
{
  tft.fillRect(0,0,480,320,BLACK);
  tft.drawRect(0,0,480,320,WHITE);
  
  tft.setTextSize(1);
  tft.setFont(&FreeMono18pt7b);
  tft.setTextColor(CYAN);
  tft.setCursor(105,35);
  tft.print("--- ABOUT ---");
  
  tft.setFont(&FreeSans12pt7b);
  tft.setTextColor(PINK);
  tft.setCursor(103,70);
  tft.print("SMART ENERGY METER");
  tft.setTextColor(YELLOW);
  tft.setFont(&FreeSans9pt7b);
  tft.setCursor(35,111);
  tft.print("Designed By -");
  
  tft.setFont(&FreeMono9pt7b);
  tft.setTextColor(GREEN);
  tft.setCursor(36,140);
  tft.print("Sumukha Bhagi");
  tft.setCursor(36,160);
  tft.print("Ravi Kiran");
  tft.setCursor(36,180);;
  tft.print("Prajwal S");
  tft.setCursor(36,200);
  tft.print("Aniruth V T");

   tft.drawCircle(241,271,31,BLUE);
   tft.setTextColor(BLUE);
   tft.setFont(); tft.setTextSize(4);
   tft.setCursor(228,257); 
   tft.print("<");

  while(1)
{
 x=0;y=0;
 read_touch();

  if(x > 203 && x < 277 && y > 226  && y < 300)
  {
    tft.setFont(); tft.setTextSize(4);
    tft.setTextColor(YELLOW);
     tft.setCursor(228,257); 
    tft.print("<");
    Menu();
    break;
  }
  else continue;
  
}
}
                                 

void Curve_Plot()
{
 unsigned int a[482];
 unsigned int count = 0 , s = 0;
 const int currentPin = A5;
 const unsigned long sampleTime = 80000UL;                         
 const unsigned long numSamples = 480UL;                           
 const unsigned long sampleInterval = sampleTime/numSamples;        
 const int adc_zero = 512;
 unsigned long prevMicros = micros() - sampleInterval ;
    
 while (count < numSamples)
 {
   if (micros() - prevMicros >= sampleInterval)
   {
     int adc_raw = analogRead(currentPin) - adc_zero; 
     a[count] = map(adc_raw,-512,511,269,5);
     
//     adc2=adc1;
//     s=s+2;
     ++count;
     prevMicros += sampleInterval;
   }
 }

 
  tft.fillRect(31,0,480,269,BLACK);
  tft.drawFastVLine(30,4,267,GREEN);
  
  tft.drawFastHLine(20,4,10,GREEN);
  tft.drawFastHLine(23,65,7,GREEN);
  tft.drawFastHLine(21,134,9,GREEN);
  tft.drawFastHLine(23,199,7,GREEN);
  tft.drawFastHLine(23,270,470,GREEN);

  tft.setFont(&FreeMono9pt7b);
  tft.setTextSize(1);
  tft.setTextColor(YELLOW);
  tft.setCursor(3,22);
  tft.print("+5");
  tft.setCursor(6,139);
  tft.print("0");
  tft.setCursor(3,264);
  tft.print("-5");
  
  tft.setFont(&FreeMono9pt7b);
  tft.setTextSize(1);
  tft.setTextColor(VIOLET);
  tft.setCursor(75,300);
  tft.print("Ipp =");


for (s = 0 ; s <= numSamples ; s++)
{
tft.drawLine(s+31,a[s],s+32,a[s+1],RED);

}

}


void Diagnostics()
{
  
}

void Status()
{

}


