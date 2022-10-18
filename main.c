#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static int all_files; //전역범수에 static을 붙이면 범위제한

extern void sub();

int main(void) 
{
	sub();
	printf("%d\n", all_files);
	return 0;
}



 
 
