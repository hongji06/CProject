// FileOperation.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <Windows.h>
#include "file_operation.h"

int main()
{
	//FindFile("C:\\Users\\user\\Desktop", "C:\\Users\\user\\Desktop\\list.txt");
	//ReadFile("C:\\Users\\user\\Desktop\\list.txt");
	ReadkeyToFile();
	system("pause");
	return 0;
}

//從鍵盤輸入一些字符，然後保存到文件中，直到輸入一個#為止
void ReadkeyToFile()
{
	FILE* file = GetFile("C:\\Users\\user\\Desktop\\temp.txt", "w");//打開文件
	char ch = NULL;
	printf("從鍵盤輸入一些字符，直到輸入一個#為止\n");
	scanf("%c", &ch);
	while(ch != '#')
	 {
		fputc(ch, file);
		scanf("%c", &ch);		
	} 
	
	fclose(file);//關閉文件	
}

//讀取對應目錄下的文件到屏幕
//source_path = "C:\\Users\\user\\Desktop";
//dest_path = "C:\\Users\\user\\Desktop\\list.txt"
int ReadFile(char * source_path)
{
	FILE* file = GetFile(source_path, "r");//打開文件
	char cmd[500];
	//fread(cmd, 1, 40, file);//讀取二進制比較好
	fscanf(file, "%s", cmd);
	fclose(file);//關閉文件
	printf("%s\n", cmd);

	return 0;
}


//查詢對應目錄下的文件/文件夾到執行的文件中
//source_path = "C:\\Users\\user\\Desktop";
//dest_path = "C:\\Users\\user\\Desktop\\list.txt"
int FindFile(char *source_path, char * dest_path)
{
	char cmd[500];
	sprintf(cmd, "dir /a:-d /b /s /d \"%s\" > \"%s\"", source_path, dest_path);
	//printf("%s\n", cmd);
	system(cmd);
	return 0;
}

//刪除文件
//path_name = "list4.txt";
int DeleteFile(char *path_name)
{
	int status = remove(path_name);
	printf("Delete status:%d\n", status);
	return status;
}

//用type的方式打開path路徑的文件
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

