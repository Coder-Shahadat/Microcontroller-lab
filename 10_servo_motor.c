int i=0;
void main() {
     trisb=0x00;
     portb=0xff;
     while(1){
//     0 degree
       portb.f0= 1;
       delay_us(999);
       portb.f0=0;
       delay_ms(1000);

//      90 deg
      portb.f0=1;
      delay_us(1500);
      portb.f0=0;
      delay_ms(1000);

//       180
      portb.f0=1;
      delay_us(2000);
      portb.f0=0;
      delay_ms(1000);
     }
}
