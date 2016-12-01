// FileOperation.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <Windows.h>
#include "file_operation.h"

int main()
{
	char *path = "C:\\Users\\user\\Desktop";
	char cmd[500];

	sprintf(cmd, "dir /a:-d /b /s /d \"%s\" > list4.txt", path);

	printf("%s\n", cmd);

	//system("dir /a:-d /b /s /d");
	system(cmd);

	system("pause");
	return 0;
}

