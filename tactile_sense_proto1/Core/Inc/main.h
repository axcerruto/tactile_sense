/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g0xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RX_IN_Pin GPIO_PIN_0
#define RX_IN_GPIO_Port GPIOA
#define TX_S0_Pin GPIO_PIN_1
#define TX_S0_GPIO_Port GPIOA
#define TX_S1_Pin GPIO_PIN_2
#define TX_S1_GPIO_Port GPIOA
#define TX_S2_Pin GPIO_PIN_3
#define TX_S2_GPIO_Port GPIOA
#define TX_S3_Pin GPIO_PIN_4
#define TX_S3_GPIO_Port GPIOA
#define RX_S0_Pin GPIO_PIN_5
#define RX_S0_GPIO_Port GPIOA
#define TX_Pin GPIO_PIN_6
#define TX_GPIO_Port GPIOA
#define RX_S1_Pin GPIO_PIN_7
#define RX_S1_GPIO_Port GPIOA
#define RX_S2_Pin GPIO_PIN_8
#define RX_S2_GPIO_Port GPIOA
#define RX_S3_Pin GPIO_PIN_11
#define RX_S3_GPIO_Port GPIOA
#define PK_CLR_Pin GPIO_PIN_12
#define PK_CLR_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
