#include <stdlib.h>
#include <stdio.h>

/*特殊输入：非数字字符，正负号，MAX正整数，min负整数，溢出（）
 *判空（）
 *错误处理（）
*/
int  StrToInt(char* str)
{
	int number = 0;

	while(*str != 0)
	{
		number = 10 * number + *str - '0';
		str++;
	}
	return number;
}

int main()
{
	char array[30] = {0};
	scanf("%s",array);
	printf("%d\n",StrToInt(array));
	return 0;
}
