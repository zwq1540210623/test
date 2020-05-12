#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef void (*pfunc_on_t)(void);
typedef void (*pfunc_off_t)(void);
typedef void (*pfunc_delay_t)(int i);


//第一步：定义对象属性和方法                     
typedef struct led
{
	//属性
	
	//方法
		//方法1：灯亮，函数指针变量
		pfunc_on_t von;	
		//方法2：灯灭，函数指针变量
		pfunc_off_t voff;
		//方法3：延时
		pfunc_delay_t vdelay; 
}LED;

void on(void)
{
	printf("led_on.\t\n");
}

void off(void)
{
	printf("led_off.\t\n");
}

void led_on_off(int led_num,int led_state);

void delay(int i)
{
	sleep(i);
}

int main(void)
{
	LED led1;
	LED led2;
	LED led3;
	
	led1.von = on;
	led1.voff = off;
	led1.vdelay = delay;
	led2.von = on;
	led2.voff = off;
	led2.vdelay = delay;
	led3.von = on;
	led3.voff = off;
	led3.vdelay = delay;
	

	while(1)
	{
		led1.von();
		led2.voff();
		led3.voff();
		led1.vdelay(1);
		//sleep(1);
		
		led1.voff();
		led2.von();
		led3.voff();
		led2.vdelay(1);
		//sleep(1);
		
		led1.voff();
		led2.voff();
		led3.von();
		led3.vdelay(1);
		//sleep(1);
	}
	
	return 0;
}