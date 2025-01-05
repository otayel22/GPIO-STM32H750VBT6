/*
 * GPIO_private.h
 *
 *  Created on: Dec 27, 2024
 *      Author: omar
 */

#ifndef GPIO_DRIVER_GPIO_PRIVATE_H_
#define GPIO_DRIVER_GPIO_PRIVATE_H_


#include <stdint.h>

/* RCC Register Base Address and Offsets */
#define RCC_BASE        0x58024400U
#define RCC_AHB4ENR     (*(volatile uint32_t *)(RCC_BASE + 0x0E0))

/* GPIO Base Addresses */
#define GPIOA_BASE      0x58020000U
#define GPIOB_BASE      0x58020400U
#define GPIOC_BASE      0x58020800U
#define GPIOD_BASE      0x58020C00U
#define GPIOE_BASE      0x58021000U
#define GPIOF_BASE      0x58021400U
#define GPIOG_BASE      0x58021800U
#define GPIOH_BASE      0x58021C00U
#define GPIOI_BASE      0x58022000U
#define GPIOJ_BASE      0x58022400U

/* GPIO Register Offsets */
#define GPIO_MODER_OFFSET   0x00
#define GPIO_OTYPER_OFFSET  0x04
#define GPIO_OSPEEDR_OFFSET 0x08
#define GPIO_PUPDR_OFFSET   0x0C
#define GPIO_IDR_OFFSET     0x10
#define GPIO_ODR_OFFSET     0x14
#define GPIO_BSRR_OFFSET    0x18

/* GPIO Register Macros */
#define GPIO_MODER(x)   (*(volatile uint32_t *)((x) + GPIO_MODER_OFFSET))
#define GPIO_OTYPER(x)  (*(volatile uint32_t *)((x) + GPIO_OTYPER_OFFSET))
#define GPIO_OSPEEDR(x) (*(volatile uint32_t *)((x) + GPIO_OSPEEDR_OFFSET))
#define GPIO_PUPDR(x)   (*(volatile uint32_t *)((x) + GPIO_PUPDR_OFFSET))
#define GPIO_IDR(x)     (*(volatile uint32_t *)((x) + GPIO_IDR_OFFSET))
#define GPIO_ODR(x)     (*(volatile uint32_t *)((x) + GPIO_ODR_OFFSET))
#define GPIO_BSRR(x)    (*(volatile uint32_t *)((x) + GPIO_BSRR_OFFSET))


#endif /* GPIO_DRIVER_GPIO_PRIVATE_H_ */
