#include<stdio.h>
#include<conio.h>
int a[50][50],m,n;
int i,j;
void Nhapmang2c();
void Xuatmang2c();
void Maxmin();
void Nguyento();
void Timx();
void Diemyenngua();
void Sapxep();
void Tong();
void Chan();
int main()
{
	printf("\n Nhap so dong: ");
	scanf("%d",&m);
	printf("\n Nhap so cot: ");
	scanf("%d",&n);
	Nhapmang2c();
	Xuatmang2c();
	//Maxmin();
	//Nguyento();
	//Timx();
	//Diemyenngua();
	//Sapxep();
	Tong();
	Chan();
  getch;
}
void Nhapmang2c()
{
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   {
	   	 printf("\n Nhap vao phan tu a[%d][%d]:",i,j);
	   	 scanf("%d",&a[i][j]);
	   }
  getch;
}
void Xuatmang2c()
{
	printf("\n Mang vua nhap la:");
	for(i=0;i<m;i++)
	  {
	    printf("\n\t");
	   for(j=0;j<n;j++)
	      printf("%d\t",a[i][j]);
	  }
}
void Maxmin()
{
	int max=a[0][0],min=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		   if(max<a[i][j])
		      max=a[i][j];
		   if(min>a[i][j])
		      min=a[i][j];
		  }
	}
	printf("\n Gia tri lon nhat la:%d",max);
	printf("\n Gia tri nho nhat la:%d",min);
}
void Nguyento()
{
	int dem=0,tong=0,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==2)
			    dem++;
			for(k=2;k<a[i][j]-1;k++)
			   {
			     if(a[i][j]%k!=0)
			        dem++;
			   }
			tong=tong+a[i][j];
		}
	}
	printf("\n Co tat ca %d so nguyen to trong mang.",dem);
	printf("\n Tong cac phan tu la:%d",tong);
}
void Timx()
{
	int x,dem=0;
	printf("\n Nhap vao gia tri x: ");
	scanf("%d",&x);
	for(i=0;i<m;i++)
	   {
	   	for(j=0;j<n;j++)
	   	    {
	   	    	if(x==a[i][j])
	   	    	     dem++;
            }
       }
    if(dem!=0)
    {
       printf("\n Phan tu co gia tri bang x la: ");
       printf("\t a[%d][%d]",i,j);
    }
    else
      printf("\n Khong co phan tu nao co gia tri bang x.");
}
void Diemyenngua()
{
	int max,min;
	int col,dem=0;
	for(i=0;i<m;i++)
	{
        min= a[0][0];
        col=0;
        for(j=1;j<n;j++)
        {
            if(min>a[i][j])
            {
                min=a[i][j];
                col=j;
            }
        }
        max= a[0][col];
        for(int i=1; i<m;i++)
        {
            if (max<a[i][j])
            {
                max=a[i][j];
            }
        }
        if (max==min)
        {
        	printf("\n Phan tu yen ngua la:");
        	printf("\t a[%d][%d]", i,j);
        }
        else
            printf("\n Khong co diem yen ngua trong mang.");
    }
}
/*void Sapxep()
{
   int tam; 
   int k=m*n
   for(i=0;i<k-1:i++)
      for(j=i-1;j<k;j++)
         if(a[i/m][i%m]>a[j/m][j%m])
            {
            	tam=a[i/m][i%m];
            	a[i/m][i%m]=a[j/m][j%m];
                a[j/m][j%m]=tam;
            }
}*/
void Tong()
{
	int tong=0;
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	      {
	      	if(i==j)
	      	   tong=tong+a[i][j];
	      }
	printf("\n Tong cac phan tu tren duong cheo chinh la: %d",tong);
}

*void Chan()
{
	int dem=0;
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	    {
	     	if(a[i+1][j+1]%2==0)
	   	      dem++;
		}
    printf("\n So phan tu chan tren duong cheo chinh la: %d", dem);
}

	   	  	
	   	  	
	   	  	
	   	  	
	   	  	
	   	  	
	   	  	








