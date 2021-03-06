/*=========================================================================\
* Copyright(C)2016 Chudai.
*
* File name    : main.c
* Version      : v1.0.0
* Author       : 初代
* Date         : 2016/06/16
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
#include <stdlib.h>
#include "linked_lists.h"

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

int main(void)
{
     linked_lists   *head = NULL;       //这里也可以不用指针。不过是另一方法。
     int            num = 0;
     int            value = 0;
     int            i = 0;
     int            select = 0;
     int            position = 0;

     printf("输入链表元素个数：");
     scanf("%d", &num);

     printf("输入链表元素：");
     for (i = 0; i < num; i++)
     {
          scanf("%d", &value);
 /*         if (!isdigit(value))
          {
              printf("输入有误，不是数字!\n");
              printf("请重新输入!\n");
              i = -1;
              continue;
          }
*/
          if (insert_node(&head, value) != 0)
          {
              i--;
              printf("插入节点出错，请重新输入此元素");
              continue;
          }
//          output_list(head);
     }
     output_list(head);

     while (1)
     {
          printf("\n\r1.插入节点\n"
                  "\r2.删除节点\n"
                  "\r3.获取节点位置\n"
                  "\r4.打印表长\n"
                  "\r5.清空链表\n"
                  "\r6.输出链表\n"
                  "\r7.退出\n"
                  "\r请选择:\n");
          scanf("%d", &select);
          switch(select)
          {
              case 1:
                  printf("输入节点的值: ");
                  scanf("%d", &value);
                  if (insert_node(&head, value) != 0)
                  {
                       printf("插入节点出错，请重新操作!\n");
                  }
                  break;
              case 2:
                  printf("请输入要删除的节点的值:");
                  scanf("%d", &value);
                  delete_node(&head, value);
                  output_list(head);
                  break;
              case 3:
                  printf("请输入节点的值: ");
                  scanf("%d", &value);
                  if ((position = get_node(head, value)) > 0)
                  {
                      printf("节点位置为：%d\n", position);
                  }
                  else if (position == -1)
                  {
                       printf("没有此节点!\n");
                  }
                  else if (position == 0)
                  {
                      printf("空表，没有节点!\n");
                  }
                  break;
              case 4:
                  printf("链表长度为：%d\n", list_size(head));
                  break;
              case 5:
                  delete_all_node(&head);
                  break;
              case 6:
                  output_list(head);
                  break;
              case 7:
                  printf("\n退出!\n");
                  exit(0);
              default:
                  printf("无此选项!\n");
                  break;
          }
     }

     return 0;
}
