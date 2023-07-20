#include<stdio.h>
int sockMerchant(int n, int *ar) {
    int i=0,j=0,count=0,k=-1,l=-1;
    for(i=0;i<n;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if((k==ar[i])||(l==ar[j]))
        continue;
            if(ar[i]==ar[j])
            {
                count++;
                ar[i]='*';
                ar[j]='*';
                k=ar[i];
                l=ar[j];
                continue;
            }
        }
    }
    return count;

}
void main()
{
	int n,i;
	printf("enter the n value\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int ret=sockMerchant(n,arr);
	printf("result is %d\n",ret);
}
