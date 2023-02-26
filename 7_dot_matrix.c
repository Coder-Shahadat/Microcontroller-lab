void main() {
     trisb=0x00;
     trisd=0x00;
     while(1){
      portd=0b01100000;
      portb=0b11111111;
      delay_ms(1);
      portd=0b00011000;
      portb=0b00011000;
      delay_ms(1);
      portd=0b00000110;
      portb=0b11111111;
      delay_ms(1);
     }
}
