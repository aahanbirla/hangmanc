
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<String.h>
#include<stdio.h>
const int NO=4;
char movies[NO][80]={"BIRDMAN","FAST AND FURIOUS","JUMANJI","BLOOD DIAMOND",};
char oldStr[100];
char newStr[100];
int space=0;



int q;
void initStr(char str[])
{

    for(int i=0;i<strlen(str);i++)
    {   oldStr[i]=str[i];

	if(str[i]==' ')
	{       oldStr[i]='/';
		newStr[i]='/';
	}
	else if(str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')


	newStr[i]=str[i];

	else if(str[i]>='0'&& str[i]<='9')

	newStr[i]=str[i];


	else
	{
		newStr[i]='_';
		space++;
	}
    }
    puts(newStr);
}

void validate(char temp)
{
	int doda=5;
	for(int i=0;i<strlen(oldStr);i++)
	{
		if(oldStr[i]==temp) //CORRECT GUESS
		{
		  newStr[i]=temp;
		  doda=6;
		  //break;// alt method( won't work with double letters)
		}
	}

	if(doda==5)

	q++;
}
		//TODO:  convert all tyhe space to gotoxy
void draw(int i)
{

	i=i-1;
	if(i>=1)
	{
	   gotoxy(50,1);
	   cout<<"|";
	   gotoxy(50,2);
	   cout<<"|";
	   gotoxy(50,3);
	   cout<<"|";
	   gotoxy(50,4);
	   cout<<"|";
	   gotoxy(50,5);
	   cout<<"|";
	   gotoxy(50,6);
	   cout<<"|";

	}
	if(i>=2)
	{
		gotoxy(51,1);
		cout<<"----------------"<<endl;	gotoxy(50,2);
	}
	 if(i>=3)
     {
		cout<<"|"<<endl;	gotoxy(65,3);
		cout<<"|"<<endl;	gotoxy(65,4);
		cout<<"|"<<endl;	gotoxy(65,5);
		cout<<"|"<<endl;	gotoxy(65,6);
	}
	 if(i>=4)
	{

		      gotoxy(65,7);cout<<"*"<<endl;
		      gotoxy(62,8);cout<<"*      *"<<endl;
		      gotoxy(60,9);cout<<"*          *"<<endl;
		      gotoxy(60,10);cout<<"*          * "<<endl;
		      gotoxy(62,11);cout<<"*      * "<<endl;
		      gotoxy(65,12);cout<<"*"<<endl;



	}

	 if(i>=5)
	{       gotoxy(65,13);
		cout<<"|"<<endl; 	gotoxy(65,14);
		cout<<"|"<<endl; 	gotoxy(65,15);
		cout<<"|"<<endl; 	gotoxy(65,16);
		cout<<"|"<<endl; 	gotoxy(65,17);
	}

	 if(i>=6)
	{       gotoxy(63,14);
		cout<<"/"<<endl; 	gotoxy(62,15);
		cout<<"/"<<endl; 	gotoxy(61,16);
		cout<<"/"<<endl;
	}

	 if(i>=7)
	{
	gotoxy(67,14);
		cout<<"\\"<<endl; 	gotoxy(68,15);
		cout<<"\\"<<endl; 	gotoxy(69,16);
		cout<<"\\"<<endl;
	}


	 if(i>=8)
	{       gotoxy(63,18);
		cout<<"/"<<endl; 	gotoxy(62,19);
		cout<<"/"<<endl; 	gotoxy(61,20);
		cout<<"/"<<endl;

	}
	 if(i>=9)
	{       gotoxy(67,18);
		cout<<"\\"<<endl; 	gotoxy(68,19);
		cout<<"\\"<<endl; 	gotoxy(69,20);
		cout<< "\\"<<endl;

		gotoxy(64,9);
		cout<<"x";
		gotoxy(67,9);
		cout<<"x";
		gotoxy(1,2);
		cout<<oldStr;
		gotoxy(1,3);
		cout<<"SORRY YOU LOST!!! TRY AGAIN!";



	}



}


void main()
{   clrscr();

	       randomize();
	       initStr(movies[random(NO)]);
	       char temp;
	       for( q=0;q<9 && strcmp(oldStr,newStr)!=0;)
	       {
		   cin>>temp;
		   if(temp>='a'&& temp<='z')
		   {
			temp=temp-32;
		   }

		validate(temp);
		clrscr();
	       //	gotoxy(50,0);


	    //	cout<<endl<<"Turns left: "<<9-q<<endl;
		draw(q+1);
		gotoxy(1,1);
		puts(newStr);

	       }
	       if(strcmp(oldStr,newStr)==0)
	       {
		cout<<"CONGRATULATION!!!!!!!!!!!"<<endl<<"YOU HAVE COMPLETED THE GAME";
	       }

    getch();
}




