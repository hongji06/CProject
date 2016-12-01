#pragma once
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
FILE* GetFile(char *path, char* type);

FILE* GetFile(char *path, char* type)
{
	if (!_access(path, 0))
	{
		printf("文件存在\n");
	}
	else
	{
		printf("文件不存在\n");
	}

	FILE *fp = fopen(path, type);
	if (fp == NULL)
	{
		printf("文件打開失敗\n");
	}
	else
	{
		printf("文件打開成功\n");
	}

	return fp;
}

