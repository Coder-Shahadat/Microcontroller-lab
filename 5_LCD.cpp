// LCD module connections
sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D4 at RB2_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D7 at RB5_bit;

sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB4_bit;
sbit LCD_D7_Direction at TRISB5_bit;
// End LCD module connections


unsigned int val;
float temp,volt;
char display[16]="";
void main(){
  Lcd_Init();
  ADC_Init();
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Cmd(_LCD_CURSOR_OFF);
  while(1)
  {
  val=ADC_Read(0);
  volt=val*4.88;
  temp=volt/10;
  Lcd_Out(1,1,"Temp= ");
  FloatToStr(temp,display);
  Lcd_Out_CP(display);
  Lcd_Chr(1,15,223);
  Lcd_Out_CP("C");
  }
}
