// FileOperation.cpp : �w�q�D���x���ε{�����i�J�I�C
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

//�q��L��J�@�Ǧr�šA�M��O�s���󤤡A�����J�@��#����
void ReadkeyToFile()
{
	FILE* file = GetFile("C:\\Users\\user\\Desktop\\temp.txt", "w");//���}���
	char ch = NULL;
	printf("�q��L��J�@�Ǧr�šA�����J�@��#����\n");
	scanf("%c", &ch);
	while(ch != '#')
	 {
		fputc(ch, file);
		scanf("%c", &ch);		
	} 
	
	fclose(file);//�������	
}

//Ū�������ؿ��U������̹�
//source_path = "C:\\Users\\user\\Desktop";
//dest_path = "C:\\Users\\user\\Desktop\\list.txt"
int ReadFile(char * source_path)
{
	FILE* file = GetFile(source_path, "r");//���}���
	char cmd[500];
	//fread(cmd, 1, 40, file);//Ū���G�i�����n
	fscanf(file, "%s", cmd);
	fclose(file);//�������
	printf("%s\n", cmd);

	return 0;
}


//�d�߹����ؿ��U�����/��󧨨���檺���
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

//�R�����
//path_name = "list4.txt";
int DeleteFile(char *path_name)
{
	int status = remove(path_name);
	printf("Delete status:%d\n", status);
	return status;
}

//��type���覡���}path���|�����
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

