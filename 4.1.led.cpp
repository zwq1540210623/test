#include <iostream>
#include <unistd.h>

using namespace std;

typedef struct led
{
public:
	//属性
	int index;
	
	//方法：
	void on(void);
	void off(void);
}LED;


void led::on(void)
{
	cout << "led"<< this->index <<"_on" << endl;
}

void led::off(void)
{
	cout << "led"<< this->index <<"_off" << endl;
}


int main(void)
{
	LED led1,led2,led3;
	
	led1.index = 1;
	led2.index = 2;
	led3.index = 3;
	
	while(1)
	{
		led1.on();
		led2.off();
		led3.off();
		sleep(1);
		
		led1.off();
		led2.on();
		led3.off();
		sleep(1);
		
		led1.off();
		led2.off();
		led3.on();
		sleep(1);
	}
	
	
	return 0;
}

















