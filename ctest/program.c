#include "stdio.h"
/*	����ԭ�ͣ����õ��Ǿɷ��Ķ��� */
int olddef(float d, char i);

/* ���Խ��ۣ�	1��olddef��ʵ���ǰ�����������ʹ���ģ�������ʽԭ�ͺ��ڵ���ʱ���������������
				2��newdef��ʵ���ǰ�ʵ�����ʹ���ģ�����ԭ��ʱ���ڵ���ʱ�������������

�����������������ɴ������쳣
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
