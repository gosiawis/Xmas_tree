﻿#include "stdafx.h"
#include "stdio.h"
int main()
{
	int rzedy, gwiazdka, spacja;
	printf("Autor programu: Malgorzata Wisniewska.\n\n");
	printf("Masz przed soba program, dzieki ktoremu latwo, szybko i przyjemnie narysujesz choinke.\nDo dziela!\n");
	printf("Ile rzedow ma miec Twoja choinka? ");
	scanf_s("%d", &rzedy);
	while (rzedy>80)
	{
		printf("Chyba Twoja choinka nie zmiesci sie w domu :( moze sprobujesz narysowac mniejsza?");
		while (getchar() != '\n');
		printf("\nIle rzedow ma miec Twoja choinka? ");
		scanf_s("%d", &rzedy);
	}
	for (int i = 1; i <= rzedy; i++)
	{
		gwiazdka = i * 2 - 1;
		spacja = i + rzedy - gwiazdka;
		for (int j = 0; j<spacja; j++)
		{
			printf("%c", ' ');
		}
		for (int k = 0; k<gwiazdka; k++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
	for (int l = 0; l<3; l++)
	{
		for (int m = 0; m<(rzedy * 2 + 1) / 2; m++)
		{
			printf("%c", ' ');
		}
		printf("|-|\n");
	}
	printf("\n\nWESOLYCH SWIAT! JOYEUX NOEL! MERRY CHRISTMAS!\n\n");
	return 0;
}
