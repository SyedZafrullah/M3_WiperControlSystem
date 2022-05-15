#define GPIOD_BASE_ADDRESS 0x40020C00
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDRESS + GPIOD_ODR_OFFSET)



#define RCC_BASE_ADDRESS 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDRESS + RCC_AHB1ENR_OFFSET)



#define GPIOA_BASE_ADDRESS 0x40020000
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDRESS + GPIOA_IDR_OFFSET)



#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDRESS + GPIOD_MODE_OFFSET)



#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDRESS + GPIOA_MODE_OFFSET)

int main()
{
int incr=0,delay;  //Declaring and Initilizing Variables
RCC_AHB1ENR |= (1<<3)|(1<<0); //Enabling the LED and the switch
GPIOD_MODE = 0; // Clear LED
GPIOA_MODE = 0; // Clear Switch
GPIOA_IDR |= 1<<3;
GPIOD_MODE |= (0<<25)|(1<<24);  //to assign LED 12 as output pin
GPIOD_MODE |= (0<<27)|(1<<26);  //to assign LED 13 as output pin
GPIOD_MODE |= (0<<29)|(1<<28);  //to assign LED 14 as output pin
GPIOD_MODE |= (0<<31)|(1<<30);  //to assign LED 15 as output pin
GPIOA_MODE |= (0<<1)|(0<<0);    //to assign Switch as input pin
GPIOD_ODR = 0X00;
while(1)
{
while((GPIOA_IDR & 0x01) == 1) // Switch Status On
{
incr++; //Increment for Switch
}
if(incr>30000)
   {
incr=0;//RED Led should be in ON state
GPIOD_ODR |= 1<<14;
while(1)
{
GPIOD_ODR |= 1<<15;						//BLUE LED ON
for(delay=0;delay<20000000;delay++){};  //delay
GPIOD_ODR &= ~(1<<15);					//BLUE LED OFF
GPIOD_ODR |= 1<<12;						//GREEN LED ON
for(delay=0;delay<20000000;delay++){};	//delay
GPIOD_ODR &= ~(1<<12);					//GREEN LED OFF
GPIOD_ODR |= 1<<13;						//ORANGE LED ON
for(delay=0;delay<20000000;delay++){};	//delay
GPIOD_ODR &= ~(1<<13);					//ORANGE LED OFF
GPIOD_ODR |= 1<<12;						//GREEN LED ON
for(delay=0;delay<20000000;delay++){};	//delay
GPIOD_ODR &= ~(1<<12);					//GREEN LED OFF
GPIOD_ODR |= 1<<15;						//BLUE LED ON
for(delay=0;delay<20000000;delay++){};	//delay
GPIOD_ODR &= ~(1<<15);					//BLUE LED OFF
	}
   }

}
return 0;
}
