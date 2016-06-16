#include <stdio.h>

int stone(int n){
	if (n % 2 != 0)
		return 3 * n+1;
	else
		return n/2;
}

void stoneRain(int n){
	int c = 0;
	while(n > 1){
		printf("%6d", n);
		n = stone(n);
		c++;
		if (c == 6){
			printf("\n");
			c = 0;
		}
	}
	printf("%6d", 1);

}
int main(){
	int n;
	printf("Nhap so n : ");
	scanf("%d",&n);
	stoneRain(n);
	return 0;
}