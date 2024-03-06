#include <stdio.h>

int main()
{
    int n,s,i;
    printf("Enter number of days in month: \n");
    scanf("%d",&n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): \n");
    scanf("%d",&s);
    for (i=0;i<(s-1);i++)
		printf("   ");
    for (i=1;i<=n;i++)
    	if(i%7==(8-s)&&s!=1)
    		printf("%2d\n",i);
    	else if (s==1&&i%7==0)
    		printf("%2d\n",i);
    	else if (i==s)
    		printf("%2d",i);
    	else printf("%2d ",i);
    	
    		
    	
    
    return 0;
}
