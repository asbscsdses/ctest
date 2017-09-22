#include "stdio.h"
/*
测试结果：	1、float此刻占4个字节，double此刻占8个字节
			2、float作为参数传递时，当发生类型提升时，会被转换成double，这个可以从汇编指令中看出来
			3、float f = 10.0;  10.0会被编译到exe中，因为没法直接在指令中表示10.0的位模式
			4、函数的局部变量在栈中不是紧密相邻的，中间都会有一些间距
			5、可以用char[]去表示float的位模式，然后把这个地址强转为float*，照样能提取出正确的值
			6、10.0的float位模式与10.0的doule位模式是不一样的
			7、printf的%f本来就是用来显示double的，用来显示float也是可以的，因为float传入printf时会被转换为double
*/
floatTest()
{
	printf(" sizeof float = %d \n", sizeof (float));
	float f = 10.0;
	printf(" f = %f\n", f);

	char arr[] = { 0, 0, 0x20, 0x41 };//float 10.0的位模式
	float*pf = (float*)arr;
	printf(" *pf = %f\n", *pf);

	double d = 10.0;
	printf(" d = %f\n", d);

	char arr2[] = { 0, 0, 0, 0, 0, 0, 0x24, 0x40 };//double 10.0的位模式
	double *pd = (double*)arr2;
	printf(" *pd = %f\n", *pd);
}