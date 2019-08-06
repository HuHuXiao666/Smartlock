/**
******************************************************************************
  * @file       time.c
  * @brief      简单计时函数源文件
  * @version    1.0
  * @date       Tue 06-08-2019
******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "time.h"

/** @addtogroup 
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

/**
  * @brief  简单延时函数
  * @note   72MHz
  * @param  延时时间
  * @return NULL
  */
void Delay(u32 t)
{
	u32 i,j;
	while(t--)
	{
		for(i = 0;i < 100;i++)
		{
			for(j = 0;j < 100;j++)
			{
			}
		}
	}
	
	return ;
}

/**
  * @}
  */
