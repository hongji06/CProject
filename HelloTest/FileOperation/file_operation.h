#pragma once
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
//用type的方式打開path路徑的文件
FILE* GetFile(char *path, char* type);

//查詢對應目錄下的文件/文件夾到執行的文件中
//source_path = "C:\\Users\\user\\Desktop";
//dest_path = "C:\\Users\\user\\Desktop\\list.txt"
int FindFile(char *source_path, char * dest_path);

//刪除文件
//path_name = "list4.txt";
int DeleteFile(char *path_name);

//讀取對應目錄下的文件到屏幕
//source_path = "C:\\Users\\user\\Desktop\\list.txt"
int ReadFile(char * source_path);

//從鍵盤輸入一些字符，然後保存到文件中，知道輸入一個#為止
void ReadkeyToFile();