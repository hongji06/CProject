#pragma once
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
FILE* GetFile(char *path, char* type);

FILE* GetFile(char *path, char* type)
{
	if (!_access(path, 0))
	{
		printf("���s�b\n");
	}
	else
	{
		printf("��󤣦s�b\n");
	}

	FILE *fp = fopen(path, type);
	if (fp == NULL)
	{
		printf("��󥴶}����\n");
	}
	else
	{
		printf("��󥴶}���\\n");
	}

	return fp;
}

