#include <stdio.h>
int main()
{
	int num,final,temp,cnt,s,c,p;
	scanf("%d",&num);
	int arr[100]={0};
	while(num!=0)
	{
		scanf("%d",&final);
		cnt=0;
		for(int j=0;j<10;j++)
		{
			s=j*j;
			c=j*j*j;
//			printf("%d %d\n",s,c);
			arr[cnt]=s;
			arr[cnt+1]=c;
			cnt+=2;
			int len=sizeof(arr);
			for(int k=0;k<len;k++)
			{
				printf("%d ",arr[k]);
			}
			printf("\n");
			printf("%d\n",cnt);
		}
		num--;
	}
	return 0;
}
