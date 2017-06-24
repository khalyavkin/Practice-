#include "conio.h"
#include "locale.h"
#include "stdio.h"
#include "string.h"
#define N 3

typedef struct {
	char name[25];
	int zodiak[15];
	int bday[3];
} Znak;

void inputBaza(Znak baza[N]);
void printBaza(Znak baza[N]);

const char *number_zodiac[12] = { "����", "�����", "��������", "���", "���", "����", "����", "��������", "�������", "�������", "�������", "����" }; // ������� ���������� ������ �������

int main()
{
	setlocale(LC_CTYPE, "rus");
	Znak baza[N];
	inputBaza(baza);
	printBaza(baza);
	return 0;
}

void inputBaza(Znak baza[N]) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++) {
		printf("������� ���: ");
		gets_s(baza[i].name);
		printf("������� ���� �������: ");
		scanf_s("%d", &baza[i].zodiak);
		printf("����.�����.���: ");
		scanf_s("%d.%d.%d", &baza[i].bday[0], &baza[i].bday[1], &baza[i].bday[2]);
		printf("***\n");
	}
}

void printBaza(Znak baza[N]) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++)
		printf("��� %s\n ������: %d\n ���� ��������: %d.%d.%d\n", baza[i].name, baza[i].zodiak, baza[i].bday[0], baza[i].bday[1], baza[i].bday[2]);
}
