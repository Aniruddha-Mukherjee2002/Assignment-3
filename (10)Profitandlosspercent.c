#include<stdio.h>
int main()
{
	float sp,cp,profit,loss,profitper,lossper;
	printf("Enter selling price : ");
	scanf("%d",&sp);
	printf("\nEnter cost price : ");
	scanf("%d",&cp);
	if(sp>cp)
	{
		profit=sp-cp;
		profitper=profit*100/cp;
		printf("\nProfit on this product is %f%%",profitper);
		printf("\nLoss on this product is %f%%",profitper-profitper);
	}
	else
	{
	    loss=cp-sp;
	    lossper=loss*100/sp;
	    printf("\nLoss on this product is %f%%",lossper);
	
	}
	 return 0;	

}
