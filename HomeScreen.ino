void Homescreen()
{
    tft.fillRect(0,0,480,320,BLACK);
    tft.setFont(&FreeMono18pt7b);
    tft.drawRect(0,0,480,320,WHITE);
    tft.setCursor(50,26);
    tft.setTextColor(PINK);
    tft.setTextSize(1);
    tft.print("SMART ENERGY METER");
    tft.drawLine(0,36,480,36,WHITE);
        
    tft.setFont(&FreeMono9pt7b);
    tft.setTextColor(ORANGE);
    tft.setTextSize(1);
    tft.setCursor(18,60);
    tft.print("Vrms  =");
    tft.setCursor(18,82);
    tft.print("Irms  =");
    tft.setCursor(18,108);
    tft.print("Freq. =");
    tft.setCursor(18,154);
    tft.print("Power =");
    tft.setCursor(18,131);
    tft.print("PF    =");
    tft.setCursor(259,60);
    tft.print("Energy =");
    tft.setCursor(259,83);
    tft.print("kWh    =");
    
//    tft.setCursor(80,240);
//    tft.setTextColor(BLUE);
//    tft.setTextSize(2);
//    tft.print("Bluetooth");
//    tft.setCursor(205,240);
//    tft.setTextColor(WHITE);
//    tft.setTextSize(2);
//    tft.print("-");
//    tft.setCursor(230,270);
//    tft.setTextColor(RED,BLACK);
//    tft.setTextSize(2);
//    tft.print("\"Disconnected\"");    
//    delay(1000);
//    tft.setCursor(230,270);
//    tft.setTextColor(GREEN,BLACK);
//    tft.setTextSize(2);
//    tft.print("\"Connected\"   ");
//    delay(1000);


 tft.setFont(&FreeSans12pt7b);
 tft.setTextColor(WHITE);
 tft.setTextSize(1);
 tft.fillRoundRect(20,250,120,50,8,LBLUE);
 tft.setCursor(32,281);
 tft.print("< Lock");
 tft.fillRoundRect(340,250,120,50,8,LBLUE);
 tft.setCursor(360,281);
 tft.print("Menu >");


while(1)
{
 x=0;y=0;
 read_touch();
  
  if (x > 20 && x < 140 && y > 250  && y < 300)
  {
    tft.drawRoundRect(19,249,121,51,8,YELLOW);
    tft.fillRect(0,0,480,320,BLACK);
    SECURITY_FLAG=0;
    Auth();
    break;
  }
  else if(x > 340 && x < 460 && y > 250  && y < 300)
  {
    tft.drawRoundRect(339,249,121,51,8,YELLOW);
    tft.fillRect(0,0,480,320,BLACK);
    Menu();
    break;
  }
  else continue;
  }
}

void Menu()
{
  while(1)
  {
    tft.fillRect(0,0,480,320,BLACK);
    tft.setFont(&FreeMono18pt7b);
    tft.drawRect(0,0,480,320,WHITE);
    tft.setCursor(114,35);
    tft.setTextColor(CYAN);
    tft.setTextSize(1);
    tft.print("--- MENU ---");
 //   tft.drawLine(0,36,480,36,WHITE);

//----------------Menu----------------
    
    tft.setFont(&FreeSans12pt7b);
    tft.setTextColor(WHITE);
    tft.setTextSize(1);
    tft.drawRect(20,55,210,63,RED);
    tft.drawRect(21,56,208,61,RED);
    tft.setCursor(62,92);
    tft.print("Waveforms");
    
    tft.drawRect(250,55,210,63,RED);  
    tft.drawRect(251,56,208,61,RED);
    tft.setCursor(299,92);
    tft.print("Diagnostics");
    
    tft.drawRect(20,133,210,75,RED);
    tft.drawRect(21,134,208,73,RED);
    tft.setCursor(64,162);
    tft.print("Frequency");
    tft.setCursor(67,187);
    tft.print("Spectrum");
    
    tft.drawRect(250,133,210,75,RED);
    tft.drawRect(251,134,208,73,RED);
    tft.setCursor(301,162);
    tft.print("Harmonics");
    tft.setCursor(311,187);
    tft.print("Analyzer");
     
    tft.drawRect(130,223,220,75,RED);
    tft.drawRect(131,224,218,73,RED);
    tft.setCursor(169,266);
    tft.print("-- STATUS --");
    
    tft.drawCircle(55,263,37,BLUE);
    tft.drawCircle(425,263,37,BLUE);
    tft.setFont(); tft.setTextSize(4);
    tft.setCursor(42,249);
    tft.print("<");
    tft.setCursor(416,249);
    tft.print(">");

while(1)
{
 tft.setTextColor(YELLOW);
 tft.setFont(&FreeSans12pt7b);
 tft.setTextSize(1);
 x=0;y=0;
 read_touch();
  
  if (x > 20 && x < 230 && y > 55  && y < 118)
  {
    tft.setCursor(62,92);
    tft.print("Waveforms");
    break;
  }
  else if(x > 250 && x < 460 && y > 55  && y < 118)
  {
    tft.setCursor(299,92);
    tft.print("Diagnostics");
    break;
  }
  else if(x > 20 && x < 230 && y > 133  && y < 208)
  {
    tft.setCursor(64,162);
    tft.print("Frequency");
    tft.setCursor(67,187);
    tft.print("Spectrum");
    break;
  }
  else if(x > 250 && x < 460 && y > 133  && y < 208)
  {
    tft.setCursor(301,162);
    tft.print("Harmonics");
    tft.setCursor(311,187);
    tft.print("Analyzer");
    break;
  }
  else if(x > 130 && x < 350 && y > 223  && y < 298)
  {
    tft.setCursor(169,266);
    tft.print("-- STATUS --");
    break;
  }
  else if(x > 18 && x < 92 && y > 226  && y < 300)
  {
    tft.setFont(); tft.setTextSize(4);
    tft.setCursor(42,249); 
    tft.print("<");
    Homescreen();
    break;
  }
  else if(x > 388 && x < 462 && y > 226  && y < 300)
  {
    tft.setFont(); tft.setTextSize(4);
    tft.setCursor(416,249); 
    tft.print(">");
    About();
    break;
  }
  else continue;
  }
}
}
