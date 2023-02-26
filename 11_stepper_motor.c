void main() {
    trisb=0x00;
    portb=0x00;
    while(1){
       portb=0b00000001;
       delay_ms(500);
       portb=0b00000010;
       delay_ms(500);
       portb=0b00000100;
       delay_ms(500);
       portb=0b00001000;
       delay_ms(500);
    }
}
