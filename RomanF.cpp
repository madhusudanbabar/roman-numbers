#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int i=0,j,k,m=0,l=0,a[20];
	char ji[1];
	for(j;;j++)
	{
	system("cls");
	printf("Enter : ");
	i=0;
	scanf("%d",&i);
	
	if(i<=0)
	{
	printf("Invalid");
	}
	if(i>=100000)
	{
		l++;
		a[m]=67;m++;
		i=i-100000;
	}
	if(i>=90000)
	{
		l++;l++;
		a[m]=88;m++;a[m]=67;m++;
		i=i-90000;
	}
	if(i>=50000)
	{
		l++;
		a[m]=76;
		m++;
		i=i-50000;
	}
	if(i>=40000)
	{
		l++;
		a[m]=88;m++;a[m]=76;m++;
		i=i-40000;
	}
	if(i>=10000)
	{
	k=i/10000;
	for(j=1;j<=k;j++)
	{
		l++;
		a[m]=88;m++;
	}
		i=i-(10000*k);
	}
	if(i>=9000)
	{
		l++;l++;
		a[m]=73;m++;a[m]=88;m++;
		i=i-9000;
	}
	if(i>=5000)
	{
		l++;
		a[m]=85;m++;
		i=i-5000;
	}
	if(i>=4000)
	{
		l++;l++;
		a[m]=73;m++;a[m]=85;m++;
		i=i-4000;
	}
	if(i>=1000)
	{
		k=i/1000;
		for(j=1;j<=k;j++)
		{
		a[m]=77;m++;
	}
		i=i-k*1000;
	}
	if(i>=900)
	{
		a[m]=67;m++;a[m]=77;m++;
		i=i-900;
	}
	if(i>=500)
	{
		a[m]=68;m++;
		i=i-500;
	}if(i>=400)
	{
		a[m]=67;m++;a[m]=68;m++;
		i=i-400;
	}
     if(i>=100) 
	{
	k=i/100;
	for(j=1;j<=k;j++)
	{
    a[m]=67;m++;
    }
    i=i-k*100;
    }
	if (i>=90)
    {
  	a[m]=88;m++;a[m]=67;m++;
   	i=i-90;
	}
    if(i>=50) 
	{
	a[m]=76;m++;
	i-=50;
    }
    if(i>=40)
	{
	a[m]=88;m++;a[m]=76;m++;
	i=i-40;
		}
    while(i>=10) 
	{
    a[m]=88;m++;
    i-=10;
    }
    if(i>=5) 
	{
    if(i==9) 
	{
    a[m]=73;m++;a[m]=88;m++;
    i-=9;
    }
    else 
	{
	a[m]=86;m++;
    i-=5;
    }   
    }
	while(i>0) 
    {
    if(i==4) 
	{
    a[m]=73;m++;a[m]=86;m++;
    i-=4;
    }
    else 
	{
    a[m]=73;m++;
     i-=1;
    }
    }
    for(i=0;i<l;i++)
    printf("_");
    printf("\n");
    for(i=0;i<m;i++)
    printf("%c",a[i]);
    m=0;
    l=0;
	printf("\n1-continue\n2-exit");
		gets(ji);
		scanf("%s",&ji);
        j=ji[0];
		if(j==49)
		continue;
     	else 
	    break;
}
}
