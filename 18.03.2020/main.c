#include "function.h"
#include<stdio.h>
#include<windows.h>
int main() {
	printf("Scan number, number 1 = exc 1, number 2 = exc 2\n");
	int exc = 0;
	scanf_s("%d", &exc);
	if (exc == 1) {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((2)));
		char** ArrStr = MakeVoidArrStr();
		int j = 0;
		while (10) {

			PrintArrStr(ArrStr);
			system("cls");
			for (int i = 14; i > 0; i--) {
				ArrStr[i] = ArrStr[i - 1];
			}
			ArrStr[0] = MakeStr(j);
			j++;

		}
	}
	else
	{
		int size;
		scanf_s("%d", &size);
		Num* Arr = (Num*)malloc(size * sizeof(Num));
		for (int i = 0; i < size; i++) {
			scanf_s("%d", &Arr[i].N);
			Arr[i].i = i;
		}
		for (int i = 0; i < size-1; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (Arr[j].N > Arr[j + 1].N) {
					Num t;
					t = Arr[j];
					Arr[j] = Arr[j + 1];
					Arr[j + 1] = t;
				}
			}
		}
		int i1 = 1;
		int i2 = 0;
		int i3 = 0;
		while (10) {
			printf("%d %d\n", i2, i3);
			if (Prosto(i1) == 1) {
				if (i2 == Arr[i3].N) {
					Arr[i3].Prost = i1;
					i3++;
					printf("%d\n", i3);
					if (i3 >= size) break;
				}
				i2++;
			}
			i1++;
		}
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (Arr[j].i > Arr[j + 1].i) {
					Num t;
					t = Arr[j];
					Arr[j] = Arr[j + 1];
					Arr[j + 1] = t;
				}
			}
		}
		for (int i = 0; i < size; i++) {
			printf("%d ", Arr[i].Prost);
		}
	}
	return 0;
}