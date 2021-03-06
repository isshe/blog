/*=========================================================================\
* Copyright(C)2016 Chudai.
*
* File name    : operation.c
* Version      : v1.0.0
* Author       : 初代
* Date         : 2016/06/24
* Description  :
* Function list: 1.
*                2.
*                3.
* History      :
\*=========================================================================*/

/*-----------------------------------------------------------*
 * 头文件                                                    *
 *-----------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "operation.h"

/*-----------------------------------------------------------*
 * 外部变量说明                                              *
 *-----------------------------------------------------------*/

/*-----------------------------------------------------------*
 * 外部函数原型说明                                          *
 *-----------------------------------------------------------*/

/*-----------------------------------------------------------*
 * 内部函数原型说明                                          *
 *-----------------------------------------------------------*/

/*-----------------------------------------------------------*
 * 全局变量                                                  *
 *-----------------------------------------------------------*/

/*-----------------------------------------------------------*
 * 模块级变量                                                *
 *-----------------------------------------------------------*/

/*-----------------------------------------------------------*
 * 常量定义                                                  *
 *-----------------------------------------------------------*/

/*-----------------------------------------------------------*
 * 宏定义                                                    *
 *-----------------------------------------------------------*/

/*-----------------------------------------------------------*
 * 函数实现                                                  *
 *-----------------------------------------------------------*/
/*======================================================================\
* Author     (作者): i.sshe
* Date       (日期): 2016/06/24
* Others     (其他):
\*=======================================================================*/
poperation create_array()
{
    poperation  data = NULL;
//    int     *array = NULL;
    int     num = 0;
    int     i = 0;

    data = (poperation)malloc(sizeof(operation));
    if (data == NULL)
    {
        printf("malloc data error!\n");
        return NULL;
    }
    printf("输入数据个数:\n");
    scanf("#%d\n", &num);

    data->num = num;
    data->array = (int*)malloc(sizeof(int) * num);
    if (data->array == NULL)
    {
        printf("malloc array error!\n");
        exit(-1);
    }
    printf("输入数据:\n");

    for (i = 0; i < num; i++)
    {
         scanf("%d", &data->array[i]);
    }

    output_array(data->array, data->num);
    return data;
}

/*======================================================================\
* Author     (作者): i.sshe
* Date       (日期): 2016/06/24
* Others     (其他): 输出数组数据
\*=======================================================================*/
void output_array(int *array, int num)
{
     int i =0;

     for (i = 0; i < num; i++)
     {
         printf("%d ", array[i]);
     }
     printf("\n");
}
