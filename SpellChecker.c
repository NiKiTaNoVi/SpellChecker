#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#define LEN 128
int main() {
	setlocale(LC_ALL, "Rus");
	char name[256];
	char ch;
	int len, i;
	printf("Введите название файла который хотите открыть и его расширение.\n");
	printf("Подсказка:\nWord -> .doc\nText -> .txt\n");
	scanf("%s", name);
	FILE *Dicti, *Inp_Win;
	Dicti = fopen("Dictionary.txt", "r"); //Словарь
	Inp_Win = fopen(name, "r");//Файл который нужно проверить
	if (Inp_Win != NULL)
	{
		ch = getc(Inp_Win);  //Чтение одного символа
		while (ch != '@') { //Пока не символ @ 
			putchar(ch); //Выводим в консоль
			ch = getc(Inp_Win);
		}
		fclose(Inp_Win);
		fclose(Dicti);
	}
	_getch();
	return 0;
}
