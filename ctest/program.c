#include "stdio.h"
/*	我是原型，但用的是旧风格的定义 */
int olddef(float d, char i);

/* 测试结论：	1、olddef的实现是按提升后的类型处理的，加上新式原型后，在调用时不会进行类型提升
				2、newdef的实现是按实际类型处理的，不加原型时，在调用时会进行类型提升

以上两种情况都会造成处理结果异常
*/
void TestPrototype()
{
	float d = 10.0;
	char j = 3;

	olddef(d, j);

	newdef(d, j);
}

int main()
{
	floatTest();

	getchar();

	return 3;
}
