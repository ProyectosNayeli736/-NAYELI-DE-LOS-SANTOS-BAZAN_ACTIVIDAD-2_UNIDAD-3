// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// se declaran las variables 
int hora = 21;
int minuto = 8;
int segundo = 0;
// agregamo  la alarma a nuestro reloj.
int hora2 = 21;
int minuto2 = 10;
int segundo2 = 0;
void setup() 
{
  //agregamos lo pin del reloj
  lcd.begin(16, 2);
}

void loop() {
   if((hora==hora2)and(minuto==minuto2)and(segundo==segundo2))
   {
    	lcd.setCursor(0, 0); 
   		lcd.print("     Fin Timer       ");
    	lcd.setCursor(0, 1);
   		lcd.print("                     ");
 	}
 	else
  	{
  
  		lcd.setCursor(0, 0);
  		lcd.print("      Reloj         ");
      
  		 lcd.setCursor(0, 1);
  		lcd.print("      ");
  
  		if(hora>=10)
  		{
    		lcd.print(hora);
  		}
  		else
  		{
    		lcd.print("0");
    		lcd.print(hora);
  		}
  
  		lcd.print(":");
  
  		if(minuto>=10)
  		{
    		lcd.print(minuto);
  		}
  		else
  		{
    		lcd.print("0");
    		lcd.print(minuto);
  		}
  
  		lcd.print(":");
  
  		if(segundo>=10)
  		{
    	lcd.print(segundo);
  		}
  		else
  		{
    		lcd.print("0");
    		lcd.print(segundo);
  		}

  		lcd.print("     ");
  
  
  
  		segundo++;
  		delay(1000);
  		if(segundo==60)
  		{
    		segundo=0;
    		minuto++;
    		if(minuto==60)
    		{
      		minuto=0;
      		hora++;
      		if(hora==24)
      		{
        		hora=0;
      		}
       	} 
  	}
  	} 
}
