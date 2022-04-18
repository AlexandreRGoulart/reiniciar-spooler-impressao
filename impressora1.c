#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Script para problema da impressão\n");
	printf("Parando Spooler de impressão \n");
	system("net stop spooler");
	Sleep(3000);
	printf("\nIniciando Spooler de impressão\n");
	system("net start spooler");
	
	return 0;
}
