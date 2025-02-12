#ifndef LED_BLINK_H
#define LED_BLINK_H

#include <stdint.h>

/* Reset and Clock Control base address */
#define RCC_BASE 0x40023800

/* Clock enable register */
#define RCC_AHB1ENR (*(volatile uint32_t *)(RCC_BASE + 0x30))

/* GPIO Port C base address */
#define GPIOC_BASE 0x40020800

/* Mode register */
#define GPIOC_MODER (*(volatile uint32_t *)(GPIOC_BASE + 0x00))

/* Bit set/reset register */
#define GPIOC_BSRR (*(volatile uint32_t *)(GPIOC_BASE + 0x18))

void led_blink();

#endif
