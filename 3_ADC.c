int valAdc;
char x[4];
void main(){
UART1_Init(9600);
ADC_Init();
while(1){
valAdc= ADC_Read(0);
IntToStr(valAdc,x);
UART1_Write_Text("Analog Value= ");
UART1_Write_Text(x);
UART1_Write(13);
strcpy(x," ");
delay_ms(1000);
}
}
