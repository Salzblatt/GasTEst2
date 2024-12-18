#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    // Einfache Nachricht mit printf
    printf("Hallo, ESP32 Welt!\n");

    // Endlosschleife mit weiteren Nachrichten
    while (1) {
        printf("ESP32 sagt: Hallo aus der Endlosschleife!\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Warte 1 Sekunde
    }
}
