#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	
	printf("정수 하나를 입력하시오  : ");
	
	scanf("%i", &number);
	
	if(number>=0)
	 printf("%i", number);
	else if(number<0)
	 printf("%i", number*(-1));
	
	  
	return 0;
}
