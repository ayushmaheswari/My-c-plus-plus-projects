#include <stdio.h>
struct bills{
	char name[7];
	int no;
	int prize;
};
main()
{
	int i,j,n,m,tax,total,sum=0;
	time_t t;
	time(&t);
	char name[20];
	FILE *fp;
	fp=fopen("bill.txt","a");
	system("color B");
	printf("enter the no of bill you want to print: ");
	scanf("%d",&m);
	for(j=0; j<m; j++)
	{
		printf("\n");
		printf("enter the  %d  bill",j+1);
	
		printf("\n\nenter the no of product: ");
		scanf("%d", &n);
		
		struct bills bill[n];
		for(i=0; i<n; i++)
		{
		scanf("%s %d %d",&bill[i].name,&bill[i].no,&bill[i].prize);	
	    }
	    printf("enter tax :");
	    scanf("%d",&tax);

		printf("\nENTER NAME OF COUSTMER :- ");
		scanf("%s",name);
		printf("\n");
		fprintf(fp,"\n                BILL %d \n\n",j+1); 
		fprintf(fp,"NAME :-  %s ",strupr(name));
	    fprintf(fp,"\n\n");
	    fprintf(fp,"%s",ctime(&t));
	    fprintf(fp,"\n");
		fprintf(fp,"   TAX on bill is %d(%%)\n",tax);
		fprintf(fp,"\n"); 
		printf("s.no    name   number   prize   total\n");
		fprintf(fp,"S.NO   NAME   NUMBER   PRIZE   TOTAL\n");
		for(i=0; i<n; i++)
		{ 
			total=bill[i].no*bill[i].prize;
			printf("%d\t%s\t %d \t %d \t %d\n",i+1,bill[i].name,bill[i].no,bill[i].prize,total);
			fprintf(fp,"%d\t%s\t %d \t %d \t %d\n\n",i+1,bill[i].name,bill[i].no,bill[i].prize,total);
		    sum=sum+total+total*tax/100;
		}
		printf("===========================\n");
		fprintf(fp,"======================================\n");
	    printf("     total bill  %d",sum);
	    fprintf(fp,"     TOTAL  BILL    %d",sum);
	    printf("\n===========================\n");
		fprintf(fp,"\n======================================\n");
		sum=0;	
		printf("\n---------------------------------------------------\n");
		fprintf(fp,"\n----------------------------------------------------------------\n");
	}
	fclose(fp);
}
