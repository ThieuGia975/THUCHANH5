#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void chon1(char s[50]);
int xoa(char s[90], int vitrixoa);
int xoakt(char s[50]);
int chuanhoa(char s[50]);
int demtu(char s[50]);
int demkitu(char s[50]);
void ghep(char s[50],char s2[50]);
int main()
{
	char s[50],s2[50],key;
	while(true)
	{
		system("cls");
		 printf("\n**************************************************\n");
		 printf("\n**		   THAO TAC TREN CHUOI          **\n");
		 printf("\n**		1.Nhap va chuan hoa chuoi       **\n");
		 printf("\n**		2.Dem so tu trong chuoi         **\n");
		 printf("\n**		3.Ghep chuoi                    **\n");
		 printf("\n**		4.Kiem tra doi xung             **\n");
		 printf("\n**		5.Diem ky tu                    **\n");
		 printf("\n**		0.Thoat                         **\n");
		 printf("\n**************************************************\n");
		fflush(stdin);
		   printf("\n \t\t AN PHIM CHON: ");
		   scanf("%d",&key);
		   switch(key)
		   {
		   	case 1:
			   	fflush(stdin);
			   	chon1(s);
			   	printf("\n Bam phim bat ky de tiep tuc");
			   	getch();
		   	break;
		   	case 2:
			   	fflush(stdin);
			   	demtu(s);
			   	printf("\n Bam phim bat ky de tiep tuc");
			   	getch();
		   	break;
		   	case 3:
			   	fflush(stdin);
			   	ghep(s,s2);
			   	printf("\n Bam phim bat ky de tiep tuc");
			   	getch();
		   	break;
		   	case 4:
			   	fflush(stdin);
			   	
			   	printf("\n Bam phim bat ky de tiep tuc");
			   	getch();
		   	break;
		   	case 5:
			   	fflush(stdin);
			   	demkitu(s);
			   	printf("\n Bam phim bat ky de tiep tuc");
			   	getch();
		   	break;
		   	case 0:
		   		exit(1);
		   	default:
			   	printf("\n Khong co chuc nang nay!");
			   	printf("\n Bam phim bat ky de tiep tuc");
			   	getch();
		   	break;
		   }
	}
}

void chon1(char s[50])
{
	printf("\n Nhap chuoi: ");
	gets(s);
	chuanhoa(s);
	printf("\n Chuoi chuan hoa: ");
	puts(s);
}
int xoa(char s[90], int vitrixoa)
{
	int n=strlen(s);
	for(int i=vitrixoa;i<n;i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}
int xoakt(char s[50])
{
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' '&&s[i+1]==' ')
	{
		xoa(s,i);
		i--;
	}
	if(s[0]==' ')
	    xoa(s,0);
	if(s[strlen(s)-1==' '])
	    xoa(s,strlen(s)-1);
}

int chuanhoa(char s[50])
{
	int i=0;
	strlwr(s);
	xoakt(s);
    s[0]=s[0-32];
    for(int i=0;i<strlen(s);i++)
    {
      if(s[i]==' '&&s[i+1]!=' ')
    	s[i+1]=s[i+1]-32;
    }
}
int ch(char s2[50])
{
	int j=0;
	strlwr(s2);
	xoakt(s2);
    s2[0]=s2[0-32];
    for(int j=0;j<strlen(s2);j++)
    {
      if(s2[j]==' '&&s2[j+1]!=' ')
    	s2[j+1]=s2[j+1]-32;
    }
}
int demtu(char s[50])
{
	int demtu=1;
	strlwr(s);
	for(int i=1;i<strlen(s);i++)
	{
		if(s[i]==' ')
		demtu++;
	}
	printf("\n So tu la:%d",demtu);
}
int demkitu(char s[50])
{
	int demkt=0;
	char c,c1;
	printf("\n Nhap vao mot ky tu: ");
	scanf("%c",&c);
	fflush(stdin);
	strupr(s);
	for(int i=0;i<strlen(s);i++)
		{
			if(s[i]==toupper(c))
			demkt++;
	    }
	printf("\n So ky tu la: %d",demkt);
}
void ghep(char s[50],char s2[50])
{
	int i,j, size,size1,size2;
	fflush(stdin);
	printf("\n Nhap chuoi s2: ");
	gets(s2);
	ch(s2);
	size1=strlen(s);
	size2=strlen(s2);
	size=strlen(s)+strlen(s2);
	j=0;
	for(i=size1;i<size1;size++)
	{
		s[i]=s2[j];
		j++;
	}
	s[i]='\0';
	printf("\n Ket qua sau khi noi chuoi la: %s",s);
}























































	
