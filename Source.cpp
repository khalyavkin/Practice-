#include "conio.h"
#include "locale.h"
#include "stdio.h"
#include "string.h"

struct Znak
{
	char name[30]; 
	char zodiac[30]; 
	int bday[3];
};

const char *number_zodiac[12] = { "����", "�����", "��������", "���", "���", "����", "����", "��������", "�������", "�������", "�������", "����" }; // ������� ���������� ������ �������

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int size_array = 2; // ���������� �������
	puts("������� 3 �������: ");
	Znak book[size_array]; // ��������� ������ ��������
	int counter_rec = 0; // ������� �������

	while (counter_rec < size_array) // ���� �� ������
	{
		puts("������� ��� � ������� ����� ������: ");
		scanf("&s", book[counter_rec].name);

		puts("������� ���� �������: ");
		scanf("&s", book[counter_rec].zodiac);

		puts("������� ���� �������� � ������� (��.��.��) ");
		scanf("&s", book[counter_rec].bday[0]);
		scanf("&s", book[counter_rec].bday[1]); 
		scanf("&s", book[counter_rec].bday[2]); 
		counter_rec++; 
	}

	/*int month = 0;
	puts("������� ���������� ����� ������: ");
	scanf("&s", month);
	*/
	return 0;
}
