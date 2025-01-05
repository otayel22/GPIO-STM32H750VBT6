/*
 * GPIO_interface.h
 *
 *  Created on: Dec 27, 2024
 *      Author: omar
 */

#ifndef GPIO_DRIVER_GPIO_INTERFACE_H_
#define GPIO_DRIVER_GPIO_INTERFACE_H_

#include <stdint.h>

#include "GPIO_private.h"
#include "GPIO_config.h"
void GPIO_EnableClock(uint32_t portBase);
void GPIO_ConfigPinMode(uint32_t portBase, uint8_t pin, uint8_t mode);
void GPIO_ConfigPinPull(uint32_t portBase, uint8_t pin, uint8_t pull);
void GPIO_WritePin(uint32_t portBase, uint8_t pin, uint8_t state);
uint8_t GPIO_ReadPin(uint32_t portBase, uint8_t pin);

/* Function Prototypes *
*/
/* Mode Definitions */
#define GPIO_MODE_INPUT     0x0
#define GPIO_MODE_OUTPUT    0x1
#define GPIO_MODE_ALT       0x2
#define GPIO_MODE_ANALOG    0x3

/* Pull-Up/Pull-Down Definitions */
#define GPIO_NOPULL         0x0
#define GPIO_PULLUP         0x1
#define GPIO_PULLDOWN       0x2

/* Pin State Definitions */
#define GPIO_PIN_RESET      0x0
#define GPIO_PIN_SET        0x1

/* GPIO Ports Clock Enable Macros */
#define GPIOA_CLK_EN    (1U << 0)
#define GPIOB_CLK_EN    (1U << 1)
#define GPIOC_CLK_EN    (1U << 2)
#define GPIOD_CLK_EN    (1U << 3)
#define GPIOE_CLK_EN    (1U << 4)
#define GPIOF_CLK_EN    (1U << 5)
#define GPIOG_CLK_EN    (1U << 6)
#define GPIOH_CLK_EN    (1U << 7)
#define GPIOI_CLK_EN    (1U << 8)
#define GPIOJ_CLK_EN    (1U << 9)




#endif /* GPIO_DRIVER_GPIO_INTERFACE_H_ */
