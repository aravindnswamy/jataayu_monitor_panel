void Auth()
{   
    tft.fillRect(0,0,480,320,BLACK);
    tft.setFont(&FreeMono18pt7b);
    tft.drawRect(0,0,480,320,WHITE);
    tft.setCursor(50,26);
    tft.setTextColor(PINK);
    tft.setTextSize(1);
    tft.print("SMART ENERGY METER");
    tft.drawLine(0,36,480,36,WHITE);
    delay(50);

    tft.setFont(&FreeSans12pt7b);
    tft.setCursor(125,77);
    tft.setTextColor(CYAN);
    tft.setTextSize(1);
    tft.print("--- Enter Password ---");
 
while(1)
{  
    tft.fillRect(10,85,460,234,BLACK); 
    tft.setFont(&FreeSans12pt7b); 
    
    tft.drawRect(164,93,30,30,WHITE);
    tft.drawRect(204,93,30,30,WHITE);
    tft.drawRect(245,93,30,30,WHITE);
    tft.drawRect(285,93,30,30,WHITE);
    
    tft.fillRoundRect(43 ,163,55,55,8,LBLUE);
    tft.fillRoundRect(128,163,55,55,8,LBLUE);
    tft.fillRoundRect(213,163,55,55,8,LBLUE);
    tft.fillRoundRect(298,163,55,55,8,LBLUE);
    tft.fillRoundRect(383,163,55,55,8,LBLUE);
    tft.fillRoundRect(43 ,240,55,55,8,LBLUE);
    tft.fillRoundRect(128,240,55,55,8,LBLUE);
    tft.fillRoundRect(213,240,55,55,8,LBLUE);
    tft.fillRoundRect(298,240,55,55,8,LBLUE);
    tft.fillRoundRect(383,240,55,55,8,LBLUE);

    tft.setTextColor(WHITE);
    tft.setTextSize(1);
    tft.setCursor(64,196);
    tft.print("1");
    tft.setCursor(149,196);
    tft.print("2");
    tft.setCursor(234,196);
    tft.print("3");
    tft.setCursor(319,196);
    tft.print("4");
    tft.setCursor(404,196);
    tft.print("5");
    tft.setCursor(64,273);
    tft.print("6");
    tft.setCursor(149,273);
    tft.print("7");
    tft.setCursor(234,273);
    tft.print("8");
    tft.setCursor(319,273);
    tft.print("9");
    tft.setCursor(404,273);
    tft.print("0");

   tft.setTextColor(RED);
   tft.setTextSize(2);
   tft.setFont();
   
      while(1)
      { 
       x=0;y=0;
      read_touch();
      
         if (x > 43 && x < 98 && y > 163  && y < 218)
          {
            tft.drawRoundRect(42 ,162,57,57,9,YELLOW);
            a=1;
            tft.setCursor(174,100);
            tft.print("*");
          }
         else if (x > 128 && x < 183 && y > 163  && y < 218)
          {
            tft.drawRoundRect(127 ,162,57,57,9,YELLOW);
            a=2;
            tft.setCursor(174,100);
            tft.print("*");
          }
         else if (x > 213 && x < 268 && y > 163  && y < 218)
          {
            tft.drawRoundRect(212 ,162,57,57,9,YELLOW);
            a=3;
            tft.setCursor(174,100);
            tft.print("*");
          }
         else if (x > 298 && x < 353 && y > 163  && y < 218)
          {
            tft.drawRoundRect(297 ,162,57,57,9,YELLOW);
            a=4;
            tft.setCursor(174,100);
            tft.print("*");
          }
         else if (x > 383 && x < 438 && y > 163  && y < 218)
          {
            tft.drawRoundRect(382 ,162,57,57,9,YELLOW);
            a=5;
            tft.setCursor(174,100);
            tft.print("*");
          }
         else if (x > 43 && x < 98 && y > 240  && y < 295)
          {
            tft.drawRoundRect(42 ,239,57,57,9,YELLOW);
            a=6;
            tft.setCursor(174,100);
            tft.print("*");
          }
         else if (x > 128 && x < 183 && y > 240  && y < 295)
          {
            tft.drawRoundRect(127 ,239,57,57,9,YELLOW);
            a=7;
            tft.setCursor(174,100);
            tft.print("*");
          }
          else if (x > 213 && x < 268  && y > 240  && y < 295)
          {
            tft.drawRoundRect(212 ,239,57,57,9,YELLOW);
            a=8;
            tft.setCursor(174,100);
            tft.print("*");
          }
          else if (x > 298 && x < 353 && y > 240  && y < 295)
          {
            tft.drawRoundRect(297 ,239,57,57,9,YELLOW);
            a=9;
            tft.setCursor(174,100);
            tft.print("*");
          }
          else if (x > 383 && x < 438 && y > 240  && y < 295)
          {
            tft.drawRoundRect(382 ,239,57,57,9,YELLOW);
            a=0;
            tft.setCursor(174,100);
            tft.print("*");
          }
          else a=10;
          
        if (a==10 ) continue;
        else break;
      }  
               
     while(1)
       { 
        x=0;y=0; 
        read_touch();
      
         if (x > 43 && x < 98 && y > 163  && y < 218)
          {
            tft.drawRoundRect(42 ,162,57,57,9,YELLOW);
            b=1;
           tft.setCursor(214,100);
           tft.print("*");
          }
         else if (x > 128 && x < 183 && y > 163  && y < 218)
          {
            tft.drawRoundRect(127 ,162,57,57,9,YELLOW);
            b=2;
            tft.setCursor(214,100);
            tft.print("*");
          }
         else if (x > 213 && x < 268 && y > 163  && y < 218)
          {
            tft.drawRoundRect(212 ,162,57,57,9,YELLOW);
            b=3;
            tft.setCursor(214,100);
            tft.print("*");
          }
         else if (x > 298 && x < 353 && y > 163  && y < 218)
          {
            tft.drawRoundRect(297 ,162,57,57,9,YELLOW);
            b=4;
            tft.setCursor(214,100);
            tft.print("*");
          }
         else if (x > 383 && x < 438 && y > 163  && y < 218)
          {
            tft.drawRoundRect(382 ,162,57,57,9,YELLOW);
            b=5;
            tft.setCursor(214,100);
            tft.print("*");
          }
         else if (x > 43 && x < 98 && y > 240  && y < 295)
          {
            tft.drawRoundRect(42 ,239,57,57,9,YELLOW);
            b=6;
            tft.setCursor(214,100);
            tft.print("*");
          }
         else if (x > 128 && x < 183 && y > 240  && y < 295)
          {
            tft.drawRoundRect(127 ,239,57,57,9,YELLOW);
            b=7;
            tft.setCursor(214,100);
            tft.print("*");
          }
          else if (x > 213 && x < 268  && y > 240  && y < 295)
          {
            tft.drawRoundRect(212 ,239,57,57,9,YELLOW);
            b=8;
            tft.setCursor(214,100);
            tft.print("*");
          }
          else if (x > 298 && x < 353 && y > 240  && y < 295)
          {
            tft.drawRoundRect(297 ,239,57,57,9,YELLOW);
            b=9;
            tft.setCursor(214,100);
            tft.print("*");
          }
          else if (x > 383 && x < 438 && y > 240  && y < 295)
          {
            tft.drawRoundRect(382 ,239,57,57,9,YELLOW);
            b=0;
            tft.setCursor(214,100);
            tft.print("*");
          }
          else b=10;
    
        if (b==10 ) continue;
        else break;
      }
      
      while(1)
        { 
         x=0;y=0;
         read_touch();
      
         if (x > 43 && x < 98 && y > 163  && y < 218)
          {
            tft.drawRoundRect(42 ,162,57,57,9,YELLOW);
            c=1;
            tft.setCursor(255,100);
            tft.print("*");
          }
         else if (x > 128 && x < 183 && y > 163  && y < 218)
          {
            tft.drawRoundRect(127 ,162,57,57,9,YELLOW);
            c=2;
            tft.setCursor(255,100);
            tft.print("*");
          }
         else if (x > 213 && x < 268 && y > 163  && y < 218)
          {
            tft.drawRoundRect(212 ,162,57,57,9,YELLOW);
            c=3;
            tft.setCursor(255,100);
            tft.print("*");
          }
         else if (x > 298 && x < 353 && y > 163  && y < 218)
          {
            tft.drawRoundRect(297 ,162,57,57,9,YELLOW);
            c=4;
            tft.setCursor(255,100);
            tft.print("*");
          }
         else if (x > 383 && x < 438 && y > 163  && y < 218)
          {
            tft.drawRoundRect(382 ,162,57,57,9,YELLOW);
            c=5;
            tft.setCursor(255,100);
            tft.print("*");
          }
         else if (x > 43 && x < 98 && y > 240  && y < 295)
          {
            tft.drawRoundRect(42 ,239,57,57,9,YELLOW);
            c=6;
            tft.setCursor(255,100);
            tft.print("*");
          }
         else if (x > 128 && x < 183 && y > 240  && y < 295)
          {
            tft.drawRoundRect(127 ,239,57,57,9,YELLOW);
            c=7;
            tft.setCursor(255,100);
            tft.print("*");
          }
          else if (x > 213 && x < 268  && y > 240  && y < 295)
          {
            tft.drawRoundRect(212 ,239,57,57,9,YELLOW);
            c=8;
            tft.setCursor(255,100);
            tft.print("*");
          }
          else if (x > 298 && x < 353 && y > 240  && y < 295)
          {
            tft.drawRoundRect(297 ,239,57,57,9,YELLOW);
            c=9;
            tft.setCursor(255,100);
            tft.print("*");
          }
          else if (x > 383 && x < 438 && y > 240  && y < 295)
          {
            tft.drawRoundRect(382 ,239,57,57,9,YELLOW);
            c=0;
            tft.setCursor(255,100);
            tft.print("*");
          }
          else c=10;
    
        if (c==10 ) continue;
        else break;
     }  
    
      while(1)
       { 
        x=0;y=0;
        read_touch();
      
         if (x > 43 && x < 98 && y > 163  && y < 218)
          {
            tft.drawRoundRect(42 ,162,57,57,9,YELLOW);
            d=1;
            tft.setCursor(295,100);
            tft.print("*");
          }
         else if (x > 128 && x < 183 && y > 163  && y < 218)
          {
            tft.drawRoundRect(127 ,162,57,57,9,YELLOW);
            d=2;
            tft.setCursor(295,100);
            tft.print("*");
          }
         else if (x > 213 && x < 268 && y > 163  && y < 218)
          {
            tft.drawRoundRect(212 ,162,57,57,9,YELLOW);
            d=3;
            tft.setCursor(295,100);
            tft.print("*");
          }
         else if (x > 298 && x < 353 && y > 163  && y < 218)
          {
            tft.drawRoundRect(297 ,162,57,57,9,YELLOW);
            d=4;
            tft.setCursor(295,100);
            tft.print("*");
          }
         else if (x > 383 && x < 438 && y > 163  && y < 218)
          {
            tft.drawRoundRect(382 ,162,57,57,9,YELLOW);
            d=5;
            tft.setCursor(295,100);
            tft.print("*");
          }
         else if (x > 43 && x < 98 && y > 240  && y < 295)
          {
            tft.drawRoundRect(42 ,239,57,57,9,YELLOW);
            d=6;
            tft.setCursor(295,100);
            tft.print("*");
          }
         else if (x > 128 && x < 183 && y > 240  && y < 295)
          {
            tft.drawRoundRect(127 ,239,57,57,9,YELLOW);
            d=7;
            tft.setCursor(295,100);
            tft.print("*");
          }
          else if (x > 213 && x < 268  && y > 240  && y < 295)
          {
            tft.drawRoundRect(212 ,239,57,57,9,YELLOW);
            d=8;
            tft.setCursor(295,100);
            tft.print("*");
          }
          else if (x > 298 && x < 353 && y > 240  && y < 295)
          {
            tft.drawRoundRect(297 ,239,57,57,9,YELLOW);
            d=9;
            tft.setCursor(295,100);
            tft.print("*");
          }
          else if (x > 383 && x < 438 && y > 240  && y < 295)
          {
            tft.drawRoundRect(382 ,239,57,57,9,YELLOW);
            d=0;
            tft.setCursor(295,100);
            tft.print("*");
          }
          else d=10;
    
        if (d==10 ) continue;
        else break;
      }   

  tft.setTextSize(1);
  tft.setFont(&FreeMono18pt7b);

//----------AUTHENTICATION----------//

  if (a==A && b==B && c==C && d==D )
  {
   tft.fillRect(10,140,460,180,BLACK); 
   tft.setCursor(140,200);
   tft.setTextColor(GREEN);
   tft.print("CORRECT..!");
   SECURITY_FLAG=1;
   delay(300);
   tft.fillRect(0,0,480,320,BLACK);
   Homescreen(); 
   break;
  }
  else 
  {
   tft.fillRect(10,140,460,160,BLACK); 
   tft.setCursor(138,200);
   tft.setTextColor(RED);
   tft.print("WRONG..!?!");
   SECURITY_FLAG=0;
   delay(300);
   continue;
  } 
}
}

