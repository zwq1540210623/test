#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define ON "on"
#define OFF "off"

void led1on_2off_3off(void);
void led1off_2on_3off(void);
void led1off_2off_3on(void);
void led_on_off(int led_num,char *led_state);


int main(void)
{
	while(1)
	{
		led1on_2off_3off();
		sleep(1);
		
		led1off_2on_3off();
		sleep(1);
		
		led1off_2off_3on();
		sleep(1);
	}
	
	return 0;
}


void led_on_off(int led_num,char *led_state)
{
	printf("led%d %s\t\n",led_num,((!strcmp(((const char*)led_state),"off"))?("off"):("on")));
}

void led1on_2off_3off(void)
{
	led_on_off(1,ON);
	led_on_off(2,OFF);
	led_on_off(3,OFF);
}

void led1off_2on_3off(void)
{
	led_on_off(1,OFF);
	led_on_off(2,ON);
	led_on_off(3,OFF);
}

void led1off_2off_3on(void)
{
	led_on_off(1,OFF);
	led_on_off(2,OFF);
	led_on_off(3,ON);
}




















