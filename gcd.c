#include <stdio.h>
int gcd(int a,int b)
{
	int k,m; //abcdefg
	if (a<b) 
	{
		m=a;
		a=b;
		b=m;
	}
	if (a%b==0)
	    k=b; 
	else
	    k=gcd(a%b,b);
    return k;
}
main()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	t=gcd(a,b);
	printf("%d\n",t);
	system("pause");
} 
