#ifndef HAL_STATUS_LED_H
#define HAL_STATUS_LED_H

int hal_led_on_off(volatile uint8_t running);

void hal_led_blink();

#endif
