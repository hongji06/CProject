#pragma once
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
//��type���覡���}path���|�����
FILE* GetFile(char *path, char* type);

//�d�߹����ؿ��U�����/��󧨨���檺���
//source_path = "C:\\Users\\user\\Desktop";
//dest_path = "C:\\Users\\user\\Desktop\\list.txt"
int FindFile(char *source_path, char * dest_path);

//�R�����
//path_name = "list4.txt";
int DeleteFile(char *path_name);

//Ū�������ؿ��U������̹�
//source_path = "C:\\Users\\user\\Desktop\\list.txt"
int ReadFile(char * source_path);

//�q��L��J�@�Ǧr�šA�M��O�s���󤤡A���D��J�@��#����
void ReadkeyToFile();