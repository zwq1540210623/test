#include <stdio.h>
#include <unistd.h>
#include <string.h>

struct led_control
{
	int i;
	int j;
};


/* void led1on_2off_3off(void);
void led1off_2on_3off(void);
void led1off_2off_3on(void); */
void led_on_off(int led_num,int led_state);

/* void led1_on(void);
void led2_on(void);
void led3_on(void);  */
void led_on(int k);

int main(void)
{
	while(1)
	{
		led_on(1);
		sleep(1);
		
		led_on(2);
		sleep(1);
		
		led_on(3);
		sleep(1);
	}
	
	return 0;
}


void led_on_off(int led_num,int led_state)
{
	printf("led%d %s\t\n",led_num,((led_state == 0)?("off"):("on")));
}

void led_on(int k)
{
	struct led_control led;
	for(led.i=1;led.i<4;led.i++)
	{
		if(led.i == k)
			led.j = 1;
		else
			led.j = 0;
		
		led_on_off(led.i,led.j);
	}
}


#if 0
void led_on(int k)
{
	int i = 0, j = 0;
	for(i=1;i<4;i++)
	{
		if(i == k)
			j = 1;
		else
			j = 0;
		
		led_on_off(i,j);
	}
}
#endif

#if 0
void led1_on(void)
{
	int i = 0, j = 0;
	for(i=1;i<4;i++)
	{
		if(i == 1)
			j = 1;
		else
			j = 0;
		
		led_on_off(i,j);
	}
}

void led2_on(void)
{
	int i = 0, j = 0;
	for(i=1;i<4;i++)
	{
		if(i == 2)
			j = 1;
		else
			j = 0;
		
		led_on_off(i,j);
	}
}

void led3_on(void)
{
	int i = 0, j = 0;
	for(i=1;i<4;i++)
	{
		if(i == 3)
			j = 1;
		else
			j = 0;
		
		led_on_off(i,j);
	}
}

#endif


#if 0
void led1_on(void)
{
	led_on_off(1,1);
	led_on_off(2,0);
	led_on_off(3,0);
}

void led2_on(void)
{
	led_on_off(1,0);
	led_on_off(2,1);
	led_on_off(3,0);
}

void led3_on(void)
{
	led_on_off(1,0);
	led_on_off(2,0);
	led_on_off(3,1);
}
#endif


#if 0 
void led1on_2off_3off(void)
{
	led_on_off(1,1);
	led_on_off(2,0);
	led_on_off(3,0);
}

void led1off_2on_3off(void)
{
	led_on_off(1,0);
	led_on_off(2,1);
	led_on_off(3,0);
}

void led1off_2off_3on(void)
{
	led_on_off(1,0);
	led_on_off(2,0);
	led_on_off(3,1);
}
#endif




















