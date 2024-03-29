/*****************************************************************************

SDU Portfolio 2 [Final Assignment] Embedded Programming

Morten Efferbach Toft [motof15@student.sdu.dk]
Thobias Moldrup Sahi Aggerholm [thagg18@student.sdu.dk]
Ulrich Farhadi [ulfar18@student.sdu.dk]

*****************************************************************************/
#ifndef FILES_TASKHANDLERS_H_
#define FILES_TASKHANDLERS_H_

#include "FreeRTOS.h"
#include "task.h"

TaskHandle_t myTaskTestHandle;  // Task handle for myTaskTest
TaskHandle_t lcdTaskHandle;     // Task handle for lcdTaskHandle
TaskHandle_t keyTaskHandle;     // Task handle for keyTaskHandle
TaskHandle_t clockTaskHandle;   // Task handle for cockTaskHandle
TaskHandle_t lcdMenuDisplayTaskHandle; // Task handle for displayMenuTaskHandle
TaskHandle_t lcdMenuTaskHandle; // Task handle for lcdMenuTask
TaskHandle_t paymentTaskHandle;
TaskHandle_t drejimpulsTaskHandle; // Task handle for drejimpulsTask
TaskHandle_t fuelingTaskHandle;    
TaskHandle_t uartrxTaskHandle; // Task handle for receive uart
TaskHandle_t uarttxTaskHandle; // Task handle for transmit uart
TaskHandle_t uiTaskHandle; // Task handle for ui

#endif /* FILES_TASKHANDLERS_H_ */
