#include "stm32f4xx.h"                  // Device header
#include "record.h"
#include "stm32f4_discovery.h"

int main(void){

	STM_EVAL_LEDInit(LED4);
	
	
	recordInit();
	while(1){
		
	}
	
}
