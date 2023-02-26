int duty=0;
void main(){
trisb=0x00;
trisd=0xff;
portb.f0=1;
portb.f1=0;
PWM2_Init(1000);
PWM2_Start();
PWM2_Set_Duty(duty);
while(1){
   if(portd.f0&&duty<245){
     delay_ms(100);
     duty+=10;
     PWM2_Set_Duty(duty);
   }
   if(portd.f1&&duty>=10){
     delay_ms(100);
     duty-=10;
     PWM2_Set_Duty(duty);
   }
   delay_ms(10);
   }
}
