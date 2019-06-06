#include<stdio.h>
int main() {
	//code
int t, n;
scanf("%d", &t);
while(t--)
{
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    printf("%d ", n*i);
    printf("\n");
}
	
	return 0;
}
