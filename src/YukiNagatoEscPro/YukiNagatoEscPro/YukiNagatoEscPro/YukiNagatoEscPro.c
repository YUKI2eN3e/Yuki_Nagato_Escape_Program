// YukiNagatoEscPro.c: Defines the entry point for the console application.
//

#include "stdafx.h"


void printChar(char *str)
{
	int i = 0;
	while (str[i] != '\0') 
	{
		putchar(str[i]);
		fflush(stdout);
		Sleep(75); //Sleep(100);
		i++;
	}
}

int main()
{
	printChar("YUKI.N> By the time you read this message, I will no longer be \n");
	printChar("myself. \n\n");
	Sleep(5000);

	printChar("YUKI.N> If this message is on the screen, you, me, Haruhi \n");
	printChar("Suzumiya, Mikuru Asahina, and Itsuki Koisumi must all be \n");
	printChar("standing there. \n\n");
	Sleep(5000);

	printChar("YUKI.N> Those are the keys. You have found the answer. \n\n");
	Sleep(5000);

	printChar("YUKI.N> This is an emergency escape program. If you wish to \n");
	printChar("execute, press Enter. Otherwise, presss any other key. ");
	//Sleep(500);
	printChar("Once \nthe program is executed, you will be given a chance to \n");
	printChar("correct space-time. However, success is not guaranteed. \n");
	printChar("Neither is your safe return. \n\n");
	Sleep(5000);

	printChar("YUKI.N> This program can only be executed a single time. \n");
	printChar("Once it starts, it will be deleted. If you have chosen not to run \n");
	printChar("the program, it will delete itself without executing. \nReady?");

	char ans;
	ans = _getch();
	if (ans == 13) //13 is ASCII for the Enter Key
	{
		//Change time Dec 17 23:59
		printf("\nTime changed to Dec 17 23:59 2010\n");
		system("time 23:59:00 & date 12/17/2010");
	}
	else
	{
		printf("\nNothing happened\n");
	}

	//system("PAUSE"); //For testing, remove later.

	system("start invisible.vbs \"DelSelf&EXE.bat\""); //ReEnable when finished
	
    return 0;
}

