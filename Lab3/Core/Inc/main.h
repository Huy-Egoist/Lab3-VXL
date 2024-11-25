/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Test_Pin GPIO_PIN_13
#define LED_Test_GPIO_Port GPIOC
#define LED_1_0_Pin GPIO_PIN_0
#define LED_1_0_GPIO_Port GPIOA
#define LED_1_1_Pin GPIO_PIN_1
#define LED_1_1_GPIO_Port GPIOA
#define LED_1_2_Pin GPIO_PIN_2
#define LED_1_2_GPIO_Port GPIOA
#define LED_1_3_Pin GPIO_PIN_3
#define LED_1_3_GPIO_Port GPIOA
#define LED_2_0_Pin GPIO_PIN_4
#define LED_2_0_GPIO_Port GPIOA
#define LED_2_1_Pin GPIO_PIN_5
#define LED_2_1_GPIO_Port GPIOA
#define LED_2_2_Pin GPIO_PIN_6
#define LED_2_2_GPIO_Port GPIOA
#define LED_2_3_Pin GPIO_PIN_7
#define LED_2_3_GPIO_Port GPIOA
#define LED_Timer_Pin GPIO_PIN_0
#define LED_Timer_GPIO_Port GPIOB
#define Button1_Pin GPIO_PIN_1
#define Button1_GPIO_Port GPIOB
#define Button2_Pin GPIO_PIN_2
#define Button2_GPIO_Port GPIOB
#define LED_YELLOW1_Pin GPIO_PIN_10
#define LED_YELLOW1_GPIO_Port GPIOB
#define LED_RED2_Pin GPIO_PIN_11
#define LED_RED2_GPIO_Port GPIOB
#define LED_GREEN2_Pin GPIO_PIN_12
#define LED_GREEN2_GPIO_Port GPIOB
#define LED_YELLOW2_Pin GPIO_PIN_13
#define LED_YELLOW2_GPIO_Port GPIOB
#define LED_MOD_Pin GPIO_PIN_14
#define LED_MOD_GPIO_Port GPIOB
#define Button_Test_Pin GPIO_PIN_15
#define Button_Test_GPIO_Port GPIOB
#define LED_3_0_Pin GPIO_PIN_8
#define LED_3_0_GPIO_Port GPIOA
#define LED_3_1_Pin GPIO_PIN_9
#define LED_3_1_GPIO_Port GPIOA
#define LED_3_2_Pin GPIO_PIN_10
#define LED_3_2_GPIO_Port GPIOA
#define LED_3_3_Pin GPIO_PIN_11
#define LED_3_3_GPIO_Port GPIOA
#define LED_4_0_Pin GPIO_PIN_12
#define LED_4_0_GPIO_Port GPIOA
#define LED_4_1_Pin GPIO_PIN_13
#define LED_4_1_GPIO_Port GPIOA
#define LED_4_2_Pin GPIO_PIN_14
#define LED_4_2_GPIO_Port GPIOA
#define LED_4_3_Pin GPIO_PIN_15
#define LED_4_3_GPIO_Port GPIOA
#define Button3_Pin GPIO_PIN_3
#define Button3_GPIO_Port GPIOB
#define LED_5_0_Pin GPIO_PIN_4
#define LED_5_0_GPIO_Port GPIOB
#define LED_5_1_Pin GPIO_PIN_5
#define LED_5_1_GPIO_Port GPIOB
#define LED_5_2_Pin GPIO_PIN_6
#define LED_5_2_GPIO_Port GPIOB
#define LED_5_3_Pin GPIO_PIN_7
#define LED_5_3_GPIO_Port GPIOB
#define LED_RED1_Pin GPIO_PIN_8
#define LED_RED1_GPIO_Port GPIOB
#define LED_GREEN1_Pin GPIO_PIN_9
#define LED_GREEN1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
