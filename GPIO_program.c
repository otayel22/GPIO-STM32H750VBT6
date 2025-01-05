/*
 * GPIO_prog.c
 *
 *  Created on: Dec 27, 2024
 *      Author: omar
 */



/* Function Implementations */

/* Enable the clock for the given GPIO port */
#include <stdint.h>
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

void GPIO_EnableClock(uint32_t portBase) {
    if (portBase == GPIOA_BASE) RCC_AHB4ENR |= GPIOA_CLK_EN;
    else if (portBase == GPIOB_BASE) RCC_AHB4ENR |= GPIOB_CLK_EN;
    else if (portBase == GPIOC_BASE) RCC_AHB4ENR |= GPIOC_CLK_EN;
    else if (portBase == GPIOD_BASE) RCC_AHB4ENR |= GPIOD_CLK_EN;
    else if (portBase == GPIOE_BASE) RCC_AHB4ENR |= GPIOE_CLK_EN;
    else if (portBase == GPIOF_BASE) RCC_AHB4ENR |= GPIOF_CLK_EN;
    else if (portBase == GPIOG_BASE) RCC_AHB4ENR |= GPIOG_CLK_EN;
    else if (portBase == GPIOH_BASE) RCC_AHB4ENR |= GPIOH_CLK_EN;
    else if (portBase == GPIOI_BASE) RCC_AHB4ENR |= GPIOI_CLK_EN;
    else if (portBase == GPIOJ_BASE) RCC_AHB4ENR |= GPIOJ_CLK_EN;
}

/* Configure the mode of a GPIO pin */
void GPIO_ConfigPinMode(uint32_t portBase, uint8_t pin, uint8_t mode) {
    GPIO_MODER(portBase) &= ~(0x3U << (pin * 2)); // Clear mode bits
    GPIO_MODER(portBase) |= (mode << (pin * 2));  // Set mode bits
}

/* Configure the pull-up/pull-down resistor of a GPIO pin */
void GPIO_ConfigPinPull(uint32_t portBase, uint8_t pin, uint8_t pull) {
    GPIO_PUPDR(portBase) &= ~(0x3U << (pin * 2)); // Clear pull bits
    GPIO_PUPDR(portBase) |= (pull << (pin * 2));  // Set pull bits
}

/* Write a state to a GPIO pin */
void GPIO_WritePin(uint32_t portBase, uint8_t pin, uint8_t state) {
    if (state == GPIO_PIN_SET) {
        GPIO_BSRR(portBase) = (1U << pin); // Set pin
    } else {
        GPIO_BSRR(portBase) = (1U << (pin + 16)); // Reset pin
    }
}

/* Read the state of a GPIO pin */
uint8_t GPIO_ReadPin(uint32_t portBase, uint8_t pin) {
    return (GPIO_IDR(portBase) & (1U << pin)) ? GPIO_PIN_SET : GPIO_PIN_RESET;
}
