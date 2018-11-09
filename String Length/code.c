#include <stdio.h>
#include <stdlib.h>
int str_len(char *str);
int str_len(char *str){
	//请在这里完成你的函数
	int count = 0, i = 0;
	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	return count;
}