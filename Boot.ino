void Boot()
{
 
  
//  tft.fillScreen(RED);
//  tft.fillScreen(GREEN);
//  tft.fillScreen(BLUE);
  tft.fillScreen(BLACK);
  tft.drawRect(0,0,480,320,WHITE);
  delay(100);
  
  tft.setFont(&FreeSans24pt7b);
  tft.setCursor(65,100);
  tft.setTextColor(PINK);
  tft.setTextSize(1);
  tft.print("SMART METER");
  delay(50);
  tft.setFont(&FreeSans12pt7b);
  tft.setCursor(105,145);
  tft.setTextColor(MAGENTA);
  tft.print("1-Ph AC Energy Monitor");
  delay(300);
  
  tft.setFont(&FreeMono18pt7b);
  tft.setTextColor(GREEN);
  
  tft.setCursor(135,232);
  tft.print("Loading");
  delay(200);
  tft.setCursor(135,232);
  tft.print("Loading.");
  delay(100);
  tft.setCursor(135,232);
  tft.print("Loading..");
  delay(100);
  tft.setCursor(135,232);
  tft.print("Loading...");
  delay(100);
  tft.fillRect(100,200,280,55,BLACK);
  tft.setCursor(135,232);
  tft.print("Loading");
  delay(200);
  tft.setCursor(135,232);
  tft.print("Loading.");
  delay(100);
  tft.setCursor(135,232);
  tft.print("Loading..");
  delay(100);
  tft.setCursor(135,232);
  tft.print("Loading...");
  delay(100);
  tft.fillRect(100,200,280,55,BLACK);
  tft.setCursor(135,232);
  tft.print("Loading");
  delay(200);
  tft.setCursor(135,232);
  tft.print("Loading.");
  delay(100);
  tft.setCursor(135,232);
  tft.print("Loading..");
  delay(100);
  tft.setCursor(135,232);
  tft.print("Loading...");
  delay(200);
  
  tft.fillScreen(BLACK);
}

