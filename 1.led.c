#include <stdio.h>
#include <unistd.h>

void led1on_2off_3off(void);
void led1off_2on_3off(void);
void led1off_2off_3on(void);



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


void led1on_2off_3off(void)
{
	printf("led1 on.\n");
	printf("led2 off.\n");
	printf("led3 off.\n");
}

void led1off_2on_3off(void)
{
	printf("led1 off.\n");
	printf("led2 on.\n");
	printf("led3 off.\n");
}

void led1off_2off_3on(void)
{
	printf("led1 off.\n");
	printf("led2 off.\n");
	printf("led3 on.\n");
}




















