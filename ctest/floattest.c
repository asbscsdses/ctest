#include "stdio.h"
/*
���Խ����	1��float�˿�ռ4���ֽڣ�double�˿�ռ8���ֽ�
			2��float��Ϊ��������ʱ����������������ʱ���ᱻת����double��������Դӻ��ָ���п�����
			3��float f = 10.0;  10.0�ᱻ���뵽exe�У���Ϊû��ֱ����ָ���б�ʾ10.0��λģʽ
			4�������ľֲ�������ջ�в��ǽ������ڵģ��м䶼����һЩ���
			5��������char[]ȥ��ʾfloat��λģʽ��Ȼ��������ַǿתΪfloat*����������ȡ����ȷ��ֵ
			6��10.0��floatλģʽ��10.0��douleλģʽ�ǲ�һ����
			7��printf��%f��������������ʾdouble�ģ�������ʾfloatҲ�ǿ��Եģ���Ϊfloat����printfʱ�ᱻת��Ϊdouble
*/
floatTest()
{
	printf(" sizeof float = %d \n", sizeof (float));
	float f = 10.0;
	printf(" f = %f\n", f);

	char arr[] = { 0, 0, 0x20, 0x41 };//float 10.0��λģʽ
	float*pf = (float*)arr;
	printf(" *pf = %f\n", *pf);

	double d = 10.0;
	printf(" d = %f\n", d);

	char arr2[] = { 0, 0, 0, 0, 0, 0, 0x24, 0x40 };//double 10.0��λģʽ
	double *pd = (double*)arr2;
	printf(" *pd = %f\n", *pd);
}