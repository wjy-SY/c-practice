#include <stdio.h>

int main()
{
	printf("请输入起始时间和流逝时间,如输入640 110表示起始时间和流逝时间:");
	
	int a;
	int b;
	scanf("%d %d",&a,&b);
	int a1 = a/100;
	int a2 = a%100;
	int a3 = a1*60 + a2 +b;
	int a4 = a3/60;
	int a5 = a3%60;
	int c = a4*100 + a5; 
	
	
	 printf("%d",c);
	 return 0;
}
