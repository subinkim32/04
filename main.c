#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int time, min, sec;
	
	printf("input the second : ");
	scanf("%d", &time);
	
	min = time / 60;
	sec = time % 60;
	
	printf("the time is %d : %d", min, sec);
	
	return 0;
}
