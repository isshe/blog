/*=========================================================================\
* Copyright(C)2016 Chudai.
*
* File name    : main.c
* Version      : v1.0.0
* Author       : 初代
* Date         : 2016/06/21
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
#include "avl.h"

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

void main(void)
{
    int         option = 0;
    int         value = 0;
    pBTnode_s   root = NULL;

    while(1)
    {
        printf("\n\r1.插入节点\n"
                "\r2.删除节点(删除没有什么特别的地方)\n"
                "\r3.层次遍历\n"
                "\r4.退出\n");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                printf("输入要插入的数值: ");
                scanf("%d", &value);
                insert_node(&root, value);
                break;
            case 2:
                break;
            case 3:
                traverse(root, 4);
                break;
            case 4:
                exit(0);
                break;
            default:
                break;
        }
    }
}
