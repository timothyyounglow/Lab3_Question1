/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <assert.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"


// Function which extracts the last 2 digits of any number
int extractNum(int num){
	int num0 = 0;
	int num1 = 0;
	int num10 = 0;
	num1 = num%10;
	num0 = num/10;
	num10 = num0%10;
	num10 = num10*10;
	int finalNum = num10 + num1;
	assert(finalNum == 43);
	return finalNum;
}


void app_main()
{
	
	extractNum(816007443);
	printf("Program successfully executed\n");
	fflush(stdout);
	
}
