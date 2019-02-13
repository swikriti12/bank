#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<fstream.h>
#include<ctype.h>
int qwe=0,wq=0,rty=0;
char m[3][3],p1[30],p2[30],s1,s2,s3;
void defaul()//to allocate default values to the matrix
{
for(int i2=0;i2<3;i2++)
{
for(int j=0;j<3;j++)
{
m[i2][j]='d';
}
}
}
void border()
{
clrscr();
gotoxy(32,2);
cout<<"  TIC TAC TOE ";
for(int i2=2,j2=79;i2<80;i2++,j2--)
{
gotoxy(i2,1);
cout<<"Í";
delay(2);
gotoxy(j2,24);
cout<<"Í";
delay(2);

}
for(int i=2,j=23;i<24;i++,j--)
{
gotoxy(1,i);
cout<<"º";
delay(3);
gotoxy(80,j);
cout<<"º";
delay(3);
}
gotoxy(1,1);
cout<<"É";
gotoxy(80,1);
cout<<"»";
gotoxy(1,24);
cout<<"È";
gotoxy(80,24);
cout<<"¼";
void matrix();
matrix();
}

void info()
{
clrscr();
gotoxy(32,2);
cout<<"  TIC TAC TOE ";
for(int i2=2,j2=79;i2<80;i2++,j2--)
{
gotoxy(i2,1);
cout<<"Í";
delay(2);
gotoxy(j2,24);
cout<<"Í";
delay(2);

}
for(int i=2,j=23;i<24;i++,j--)
{
gotoxy(1,i);
cout<<"º";
delay(3);
gotoxy(80,j);
cout<<"º";
delay(3);
}
gotoxy(1,1);
cout<<"É";
gotoxy(80,1);
cout<<"»";
gotoxy(1,24);
cout<<"È";
gotoxy(80,24);
cout<<"¼";
gotoxy(2,4);
char ch;
cout<<"                           ::::YOUR CHOICES::::           ";
gotoxy(2,6);
cout<<"                 Press L/l to load the latest saved file.";
gotoxy(2,8);
cout<<"                        Press P/p to play the game.        ";
gotoxy(40,10);
cin>>ch;
if(ch=='L'||ch=='l')
{
char k[10];
fstream ab;
ab.open("save1.txt",ios::in);
ab>>qwe;
ab>>p1;
ab>>s2;
ab>>p2;
ab>>s3;
ab>>k;
if(qwe==0)
{
clrscr();
cout<<"No saved file exist ";
delay(2000);
exit(0);
}
int c=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
m[i][j]=k[c];
c++;
}
}
if(qwe==3)
wq=1;
else if(qwe==6)
rty=1;
ab.close();
}
else if(ch=='P'||ch=='p')
{
qwe=0;
defaul();
gotoxy(2,8);
cout<<"                                                             ";
gotoxy(2,6);
cout<<"                                                             ";
gotoxy(40,10);
cout<<" ";
gotoxy(2,4);
cout<<"                                                             ";
gotoxy(2,4);
cout<<"Enter the player 1 name ";
gets(p1);
int a2=0;
while(p1[a2]!='\0')
{
p1[a2]=toupper(p1[a2]);
a2++;
}
gotoxy(2,6);
cout<<"Enter the symbol ( X,x / O,o ) ";
cin>>s2;
for(int rt=0;;rt++)
{
if(s2=='X')
{
s3='O';
break;
}
else if(s2=='x')
{
s3='o';
break;
}
else if(s2=='o')
{
s3='x';
break;
}
else if(s2=='O')
{
s3='X';
break;
}
else
{
gotoxy(2,6);
cout<<"                                            ";
gotoxy(2,6);
cout<<"Re-enter the symbol ( X,x / o,O ) ";
cin>>s2;
}
}
gotoxy(2,8);
cout<<"Enter the player 2 name ";
gets(p2);
int a1=0;
while(p2[a1]!='\0')
{
p2[a1]=toupper(p2[a1]);
a1++;
}
}
else
{
clrscr();
gotoxy(35,18);
cout<<"Wrong choice ";
delay(2000);
exit(0);
}
}
void infoprog()
{
clrscr();
gotoxy(32,2);
cout<<"  TIC TAC TOE ";
for(int i2=2,j2=79;i2<80;i2++,j2--)
{
gotoxy(i2,1);
cout<<"Í";
delay(2);
gotoxy(j2,24);
cout<<"Í";
delay(2);

}
for(int i=2,j=23;i<24;i++,j--)
{
gotoxy(1,i);
cout<<"º";
delay(3);
gotoxy(80,j);
cout<<"º";
delay(3);
}
gotoxy(1,1);
cout<<"É";
gotoxy(80,1);
cout<<"»";
gotoxy(1,24);
cout<<"È";
gotoxy(80,24);
cout<<"¼";
gotoxy(55,7);
cout<<"     ³     ³     "<<endl;
gotoxy(55,8);
cout<<" 1,1 ³ 1,2 ³ 1,3 "<<endl;
gotoxy(55,9);
cout<<"     ³     ³     "<<endl;
gotoxy(55,10);
cout<<"ÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄ"<<endl;
gotoxy(55,11);
cout<<"     ³     ³     "<<endl;
gotoxy(55,12);
cout<<" 2,1 ³ 2,2 ³ 2,3  "<<endl;
gotoxy(55,13);
cout<<"     ³     ³     "<<endl;
gotoxy(55,14);
cout<<"ÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄ"<<endl;
gotoxy(55,15);
cout<<"     ³     ³     "<<endl;
gotoxy(55,16);
cout<<" 3,1 ³ 3,2 ³ 3,3 "<<endl;
gotoxy(55,17);
cout<<"     ³     ³     "<<endl;
gotoxy(2,4);
cout<<"                        ::::NOTE BEFORE PLAYING::::         ";
gotoxy(2,5);
cout<<"                        ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ   ";
gotoxy(2,7);
cout<<"      ## Conditions for the program ##";
gotoxy(2,9);
cout<<"* The respective places of the symbols are to be"<<endl;
gotoxy(2,10);
cout<<"  placed using the coordinates (between 1 - 4) ."<<endl;
gotoxy(2,12);
cout<<" LIKE for placing x in the following place "<<endl;
gotoxy(2,13);
cout<<" coordinates 1,3 have been used ";
gotoxy(17,15);
cout<<"    ³    ³   "<<endl;
gotoxy(17,16);
cout<<"    ³    ³  x "<<endl;
gotoxy(17,17);
cout<<"ÄÄÄÄÅÄÄÄÄÅÄÄÄÄ"<<endl;
gotoxy(17,18);
cout<<"    ³    ³    "<<endl;
gotoxy(17,19);
cout<<"    ³    ³    "<<endl;
gotoxy(17,20);
cout<<"ÄÄÄÄÅÄÄÄÄÅÄÄÄÄ"<<endl;
gotoxy(17,21);
cout<<"    ³    ³    "<<endl;
gotoxy(17,22);
cout<<"    ³    ³   "<<endl;
gotoxy(48,20);
cout<<"STRUCTURE  WITH ALL COORDINATES";
gotoxy(48,22);
char ch;
cout<<"Press c to continue :";
cin>>ch;
if(ch=='c')
{
info();
}
else
{
clrscr();
gotoxy(35,18);
cout<<"Wrong choice ";
delay(2000);
exit(0);
}
}

void save()
{
char ch;
if(qwe==3)
{
wq=1;
}
else
{
rty=1;
}
gotoxy(2,18);
cout<<"                                               ";
gotoxy(2,20);
cout<<"                                                ";
gotoxy(2,20);
cout<<"Press 'y' to save 'e' to exit ";
cin>>ch;
if(ch=='y'||ch=='Y')
{
fstream ab;
ab.open("save1.txt",ios::out);
ab<<qwe<<endl;
ab<<p1<<endl;
ab<<s2<<endl;
ab<<p2<<endl;
ab<<s3<<endl;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
ab<<m[i][j];
}
}
ab.close();
}
else if(ch=='e')
{
clrscr();
cout<<"COME BACK SOOOON......";
delay(2000);
exit(0);
}


}

void matrix()
{

gotoxy(55,7);
cout<<"     ³     ³     "<<endl;
gotoxy(55,8);
cout<<"     ³     ³     "<<endl;
gotoxy(55,9);
cout<<"     ³     ³     "<<endl;
gotoxy(55,10);
cout<<"ÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄ"<<endl;
gotoxy(55,11);
cout<<"     ³     ³     "<<endl;
gotoxy(55,12);
cout<<"     ³     ³     "<<endl;
gotoxy(55,13);
cout<<"     ³     ³     "<<endl;
gotoxy(55,14);
cout<<"ÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄ"<<endl;
gotoxy(55,15);
cout<<"     ³     ³     "<<endl;
gotoxy(55,16);
cout<<"     ³     ³     "<<endl;
gotoxy(55,17);
cout<<"     ³     ³     "<<endl;
gotoxy(1,1);
void play();
play();
}
void winner()
{

char ch;
gotoxy(2,4);
cout<<"                                              ";
gotoxy(2,20);
cout<<"                                              ";
gotoxy(2,7);
cout<<"                                              ";
gotoxy(2,8);
cout<<"                                               ";
gotoxy(2,6);
cout<<"                                               ";
gotoxy(2,6);
if(s2==s1)
{
gotoxy(2,6);
cout<<p1<<" wins whose symbol is "<<s2<<endl;
}
else
{       gotoxy(2,6);
cout<<p2<<" wins whise symbol is "<<s3<<endl;
}
gotoxy(2,8);
cout<<"Still wanna play ";
cin>>ch;
if(ch=='y'|| ch=='Y')
{
info();
border();
}
else
{
clrscr();
cout<<"Thank you for playing :)";
delay(2000);
exit(0);
}

}
void check()
{
qwe++;
void winner();
if(m[0][0]==s1 && m[0][1]==s1 && m[0][2]==s1 || m[1][0]==s1 && m[1][1]==s1 && m[1][2]==s1 || m[2][0]==s1 && m[2][1]==s1 && m[2][2]==s1)
{
winner();
}
else if(m[0][0]==s1 && m[1][0]==s1 && m[2][0]==s1 || m[0][1]==s1 && m[1][1]==s1 && m[2][1]==s1 || m[0][2]==s1 && m[1][2]==s1 && m[2][2]==s1)
{
winner();
}
else if(m[0][0]==s1 && m[1][1]==s1 && m[2][2]==s1 || m[2][0]==s1 && m[1][1]==s1 && m[0][2]==s1)
{
winner();
}
}
void abc()
{
for(int i=0,i1=8;i<3;i++,i1+=4)
{
for(int j=0,j1=57;j<3;j++,j1+=6)
{
if(m[i][j]!='d')
{
gotoxy(j1,i1);
cout<<m[i][j];
}
}
}
}

void play()
{
int x,y;
abc();
while(qwe<10)
{
if(qwe==3 && wq==0)
save();
else if(qwe==6 && rty==0)
save();
gotoxy(2,20);
cout<<"                                              ";
gotoxy(2,4);
cout<<"                                               ";
if(qwe % 2== 0)
{
gotoxy(2,4);
cout<<p1<<" chance whose symbol is "<<s2<<endl;
}
else
{
gotoxy(2,4);
cout<<p2<<" chance whose symbol is "<<s3<<endl;
}
if(wq==1 && rty==0)
{
gotoxy(2,20);
cout<<"The game would be saved at 6th chance:";
}
else if(wq==0 && rty==0 && qwe<8)
{
gotoxy(2,20);
cout<<"The game would be saved at 3rd and 6th chance:";
}

gotoxy(6,15);
cout<<"                                             ";
gotoxy(2,8);
cout<<"                                             ";
gotoxy(2,10);
cout<<"                                             ";
gotoxy(2,9);
cout<<"                                             ";
gotoxy(2,7);
cout<<"                                             ";
gotoxy(2,11);
cout<<"                                             ";
gotoxy(18,6);
cout<<"  ";
gotoxy(2,6);
cout<<"Enter the coordinates and symbol ³ x ³ y ³"<<endl;
gotoxy(2,7);
cout<<"                                 ³   ³   ³";
gotoxy(37,7);
cin>>x;
gotoxy(37,7);
cout<<x;
gotoxy(41,7);
cin>>y;
gotoxy(41,7);
cout<<y;
gotoxy(2,8);
cout<<"Enter the symbol ";
cin>>s1;
if(x<4 && x>0 && y<4 && y>0 && (s1=='x'||s1=='X'||s1=='O'||s1=='o'))//to check the required range of coordinates of matrix
{
if((qwe%2==0 && s1==s2) || (qwe%2!=0 && s1==s3))//loop to check alternating chances
{
if(m[x-1][y-1]=='d')//to check empty spaces in matrix
{
m[x-1][y-1]=s1;
if(x==1 && y==1)
{
gotoxy(57,8);
cout<<m[x-1][y-1];
check();
}
else if(x==1 && y==2)
{
gotoxy(63,8);
cout<<m[x-1][y-1];
check();
}
else if(x==1 && y==3)
{
gotoxy(69,8);
cout<<m[x-1][y-1];
check();
}
else if(x==2 && y==1)
{
gotoxy(57,12);
cout<<m[x-1][y-1];
check();
}
else if(x==2 && y==2)
{
gotoxy(63,12);
cout<<m[x-1][y-1];
check();
}
else if(x==2 && y==3)
{
gotoxy(69,12);
cout<<m[x-1][y-1];
check();
}
else if(x==3 && y==1)
{
gotoxy(57,16);
cout<<m[x-1][y-1];
check();
}
else if(x==3 && y==2)
{
gotoxy(63,16);
cout<<m[x-1][y-1];
check();
}
else if(x==3 && y==3)
{
gotoxy(69,16);
cout<<m[x-1][y-1];
check();
}
}
else
{
gotoxy(2,10);
cout<<"The choosen spot is already occupied."<<endl;
gotoxy(2,11);
cout<<"Please re-enter the position ";
delay(1000);
}
}
else
{
gotoxy(15,15);
cout<<"PLEASE ENTER YOUR RESPECTIVE SYMBOLS";
delay(2000);
}//end of looop to check alternate chances
if(qwe==9)
{
char ch;
gotoxy(2,4);
cout<<"                                              ";
gotoxy(2,20);
cout<<"                                              ";
gotoxy(2,7);
cout<<"                                              ";
gotoxy(2,8);
cout<<"                                               ";
gotoxy(2,6);
cout<<"                                               ";
gotoxy(2,6);
cout<<"Matrix filled no one is the winner!!"<<endl;
gotoxy(2,7);
cout<<"Still wanna play (Y/y) ";
cin>>ch;
if(ch=='y'|| ch=='Y')
{
info();
border();
}
else
{
clrscr();
cout<<"Thank you for playing :)";
delay(2000);
exit(0);
}
}
}//range looop
else
{
gotoxy(2,9);
cout<<"SORCES OF ERRORS::"<<endl;
gotoxy(2,10);
cout<<"1. Check the position (between 1-4)"<<endl;
gotoxy(2,11);
cout<<"2. Check the symbol (X or O)";
delay(2000);
}//empty space loop
}//End of while loop
}

void main()
{
clrscr();
char username[10]="samarth",user[8];
char pd[20]="  TIC TAC TOE ";
char password[]="qwerty",pass[7];
int count=0,count1=0;
gotoxy(30,11);
cout<<"Username"<<endl;
gotoxy(30,14);
cout<<"Password"<<endl;
gotoxy(39,10);
cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(39,12);
cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(39,13);
cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(39,15);
cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(39,14);
cout<<"³";
gotoxy(52,14);
cout<<"³";
gotoxy(39,11);
cout<<"³";
gotoxy(52,11);
cout<<"³";
gotoxy(40,11);
gets(user);
gotoxy(40,14);
for(int q=0;q<6;q++)
{
pass[q]=getch();
cout<<"*";
}
pass[6]='\0';
for(int i=0;i<3;i++)
{
if(strcmp(user,username)==0 && strcmp(pass,password)==0)
break;
else
{
clrscr();

gotoxy(32,2);
cout<<"  TRAIL "<<count1+1<<" :";
gotoxy(21,11);
cout<<"Re-Enter Username"<<endl;
gotoxy(39,10);
cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(39,12);
cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(40,11);
gotoxy(39,11);
cout<<"³";
gotoxy(52,11);
cout<<"³";
gotoxy(21,14);
cout<<"Re-Enter Password"<<endl;
gotoxy(39,13);
cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(39,15);
cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(39,14);
cout<<"³";
gotoxy(52,14);
cout<<"³";
gotoxy(40,11);
gets(user);
gotoxy(40,14);
for(int q1=0;q1<6;q1++)
{
pass[q1]=getch();
cout<<"*";
}
pass[6]='\0';
++count1;
}
}
if(count1==3)
{
clrscr();
cout<<"TRAIL EXPIRED !! "<<endl;
cout<<"You have entered the wrong password or username."<<endl;
delay(2000);
exit(0);
}
clrscr();
for(int i1=0,j1=15;i1<=7;i1++,j1--)
{
gotoxy((32+i1),2);
cout<<pd[i1];
delay(50);
gotoxy((32+j1),2);
cout<<pd[j1];
delay(50);
}
infoprog();
info();
border();
getch();
}

