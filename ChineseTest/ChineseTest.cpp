// ChineseTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

�� ���߼�
{
������:
	���� �����ĸ��� = 0;
	
	//��Ϊ���캯��
	���߼�()
	{

	}

	������ ����()
	{
		���� ����ǰ�ĸ��� = �����ĸ���;
		�����ĸ���++;
		��� (�����ĸ��� = ����ǰ�ĸ��� + 1)
		{
			���� ��;
		}
		����
		{
			�����ĸ��� = ����ǰ�ĸ���;
			���� ��;
		}
	}
	������ ����(���� �˴���������)
	{
		���� ����ǰ�ĸ��� = �����ĸ���;
		�����ĸ��� += �˴���������;
		���(�����ĸ��� = ����ǰ�ĸ��� + �˴���������)
		{
			���� ��;
		}
		����
		{
			�����ĸ��� = ����ǰ�ĸ���;
			���� ��;
		}
	}
/*
	�ַ��� * ͳ��()
	{
		char buf[100];
		sprintf(buf, "%d%s%d%s\n", ����, "������߼�����", �����ĸ���, "����");
		���� buf;
	}
*/
˽�е�: 
	���� ���� = 21;
};

���� ������()
{
	���߼� *һ�����߼� = ���� ���߼�();
	

	���� ��ʱ����=0;
	����
	{
		��׼���("����˴������ĸ�����С��0���˳���\n");
		scanf("%d",&��ʱ����);
		���(��ʱ���� >= 0)
		{
			һ�����߼�->����(��ʱ����);
		}

		��׼���("���߼�����%d����\n", һ�����߼�->�����ĸ���);

	}
	��(��ʱ����>=0);

	���� 0;
}
