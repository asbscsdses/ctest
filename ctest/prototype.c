#include "stdio.h"
/* 旧风格的函数定义， 但它却具有原型 */
olddef(d, i)
float d;
char i;
{
	printf("olddef: float = %f, char = %x \n", d, i);
}


/* 新风格的定义，但它却没有原型 */
newdef(float d, char i)
{
	printf("newdef: float = %f, char = %x \n", d, i);
}