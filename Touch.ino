void read_touch()
{
 TSPoint p = ts.getPoint();

 if(p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    pinMode(YP, OUTPUT);        //restore shared pins
    pinMode(XM, OUTPUT);
  //  digitalWrite(YP, HIGH);   //because TFT control pins
  //  digitalWrite(XM, HIGH);
     
     x = map(p.x, TS_MINX, TS_MAXX, 320,0);
     y = map(p.y, TS_MINY, TS_MAXY, 480,0);
     SWAP(x, y);
     z = p.z;   

    Serial.print("X = "); Serial.print(x);
    Serial.print("\t\tY = "); Serial.print(y);
    Serial.print("\t\tPressure = "); Serial.println(z);
 //  tft.fillCircle(x,y,3,RED );  
    delay(130);
   }
}

