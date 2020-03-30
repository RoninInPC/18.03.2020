#include<stdio.h>
#include<windows.h>
char* MakeStr(int Rand) {
	srand(Rand);
	char* Str = (char*)malloc(16 * sizeof(char));
	for (int i = 0; i < 15; i++) {
		int k = rand() % 169+32;
		if (k >= 128) {
			Str[i] = ' ';
		}
		else
			Str[i] = (char)(k + 48);
	}
	Str[15] = '\0';
	return Str;
}
void PrintArrStr(char** ArrStr) {
	for (int i = 0; i < 15; i++) {
		printf("%s\n", ArrStr[i]);
	}
}
char** MakeVoidArrStr() {
	char** ArrStr = (char**)malloc(15 * sizeof(char*));
	for (int i = 0; i < 15; i++) {
		ArrStr[i] = (char*)malloc(16 * sizeof(char*));
		for (int j = 0; j < 15; j++) {
			ArrStr[i][j] = ' ';
		}
		ArrStr[i][15] = '\0';
	}
	return ArrStr;
}
int Prosto(int Num) {
	int j = 0;
	for (int i = 1; i <= Num ; i++) {
		if (Num % i == 0) {
			j++;
		}
		if (j > 2) {
			return 0;
		}
	}
	return 1;
}