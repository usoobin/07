#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i = 10;
	printf("함수 호출전 i=%d\n",i);
	inc(i);
	printf("함수 호출후 i=%d\n",i);

	return 0;
}

int inc(int counter)  //void는 compile 오류가  뜬 다  
{
	counter++;
	return counter;
 } 
 
 
 
