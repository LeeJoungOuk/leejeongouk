#include<stdio.h>
#define Chestsize	95 //chestsize 95�� ����

int main(void)
{
	int nChest = Chestsize;  // �����ѷ��� ũ�⸦ ������ ����
	char chSize;     // ���� ����� �����ؼ� ������ ����
	if (nChest <=  90)  //�����ѷ��� 90���� �۰ų� ������ size�� S ����
	{
		chSize = 'S';
	}
	else if (90 < nChest <=  100)
	{
		chSize = 'M';   // �����ѷ��� 90���� ũ�� 100���� �۰ų� ������ size�� M ����
	}
	else
	{
		chSize = 'L';
	}
	
	printf("size is % c.\n", chSize);   //if, else if, else ������ ������ size �� ���
	
	return 0;
}