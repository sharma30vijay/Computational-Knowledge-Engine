#include <stdio.h>
#include <process.h>
#include <stdlib.h>
#include<math.h>
#include <conio.h>
#include <string.h>
#include <malloc.h>
#include<ctype.h>
#include <graphics.h>
#include <dos.h>
#include<iostream.h>

char* substring(char*, int, int);
int analyzer(char string[]);
int Mathematics(char string[]);
int Alphabetical(char string[]);
int check2(char string[]);
int diff(char string[]);
void integrat(char string[]);  //qerwi
int check1(char string[]);
void loading();
void welcome();
void help();
void taj();

 void draw_bar(void);
	 void draw_bar3d(void);
	 void draw_line(void);
	 void draw_pieslice(void);



void removeduplicate();
void final();
int Isiden(char ch);
int Isop(char ch);
int Isdel(char ch);
int Iskey(char * str);
void removeduplicate();

char op[8]={'+','-','*','/','=','<','>','%'};
char del[8]={'}','{',';','(',')','[',']',','};
char *key[]={"int","if","switch","while","for","do while","void","main","char","float"};

int idi=0,idj=0,k,opi=0,opj=0,deli=0,uqdi=0,uqidi=0,uqoperi=0,kdi=0,liti=0,ci=0;
int uqdeli[20],uqopi[20],uqideni[20],l=0,j;
char uqdel[20],uqiden[20][20],uqop[20][20],keyword[20][20];
char iden[20][20],oper[20][20],delem[20],litral[20][20],lit[20],constant[20][20];



void help()
{
clrscr();
printf("\t\t\t\tHelp Menu");
delay(700);
//clrscr();
printf("\n\n\n\nString Selection : Just Type in your content Press Enter sit back and relax");
delay(700);
//clrscr();
cout<<"\n\nIntegration : type in inte with f(x) and press enter and sit back and let our program take burden from you";
delay(700);
//clrscr();
cout<<"\n\nDiffrentiation : type in diff with f(x) and press enter to let it solve";
delay(700);
//clrscr();
cout<<"\n\nQuadratic Equation solver : just type in root and press enter then our program would ask you to provide coefficients of variables and then we are done";

delay(700);
//clrscr();
cout<<"\n\nExit: Type in EXIT and press enter to get out of the program but be back";
delay(700);
//clrscr();
//cout<<"Help : You typed help thats why youre here";
	 getch();
delay(700);
clrscr();cout<<"For more information HAVE PATIENCE";
	getch();
}




void taj()
{
int gd=DETECT,gm,l,t,p,r,n,q,d,a;
int e,v,f;
initgraph(&gd,&gm,"c:\tc\bgi");
int h=40;
line(0,440,639,440);

//line(20,30+h,619,30+h);

//line(25,400,38,120);
//line(85,400,78,120);
//line(85,400,78,120);


//=================================Ist tower========================//
//=================================IIst
//tower============================//
//#################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
l=-20;
line(28+l,400+h,33+l,333+h);
line(86+l,400+h,80+l,333+h);
//||||||||||||||||||||||||||||||Ist
//stage||||||||||||||||||||||||||||||||||||||||||||//
line(23+l,328+h,32+l,334+h);               // slant
line(88+l,328+h,80+l,334+h);                       // slant
line(83+l,323+h,75+l,334+h);                       // slant
line(75+l,323+h,70+l,332+h);
line(66+l,323+h,65+l,332+h);                       // slant
line(57+l,323+h,57+l,332+h);                       // slant
line(30+l,323+h,39+l,334+h);                       // slant
line(38+l,323+h,45+l,332+h);
line(48+l,323+h,51+l,332+h);      // slant

ellipse(57+l,320+h,350,190,34,5);
ellipse(57+l,327+h,350,190,34,5);
ellipse(57+l,337+h,0,180,25,5);
line(22+l,320+h,22+l,328+h);
line(91+l,320+h,91+l,327+h);
setfillstyle(6,15);
floodfill(60+l,320+h,15);

setfillstyle(10,15);

floodfill(60+l,320+h+15,15);


//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//||//
//+++++++++++++++++++++++++++++++++++2nd+++++++++++++++++++++++++++

line(35+l,315+h,38+l,242+h);
line(80+l,315+h,75+l,242+h);

//||||||||||||||||||||||||||||||2st
//stage||||||||||||||||||||||||||||||||||||||||||||//
 t=-93;
line(23+4+l,328+t+3+h,32+5+l,334+t+h);               // slant
line(88+l,328+t+2+h,76+l,334+t+h);                       // slant
//line(+l83,323+t+4,75,334+t);                       // slant
line(78+l,323+t+3+h,71+l,332+t+h);
line(66+l,323+t+2+h,65+l,332+t+h);                       // slant
line(57+l,323+t+2+h,57+l,332+t-2+h);                       // slant
//line(30,323+t+2,39,334+t);                       // slant
line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h);      // slant

ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);
ellipse(57+l,337+t-1+h,0,180,18,5);

line(26+l,320+t+3+h,26+l,328+t+2+h);
line(88+l,320+t+3+h,88+l,327+t+3+h);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//|//
setfillstyle(6,15);
floodfill(60+l,320+h+t,15);                            ////////////////
setfillstyle(10,15);
floodfill(60+l,320+h-35,15);

//||||||||||||||||||||||||||||||3rd
//stage||||||||||||||||||||||||||||||||||||||||||||//

line(38+l,225+h,41+l,152+h);
line(75+l,225+h,72+l,152+h);



 t=-182;
line(32+l,328+t+4+h,32+7+l,334+t+h);               // slant
line(80+l,328+t+4+h,73+l,334+t+h);                       // slant
//line(+l83,323+t+4,75,334+t);                       // slant
line(76+l,323+t+5+h,71+l,332+t+h);
line(66+l,323+t+4+h,65+l,332+t+h);                       // slant
line(57+l,323+t+4+h,57+l,332+t-2+h);                       // slant
//line(30,323+t+2,39,334+t);                       // slant
line(39+l,323+t+6+h,45+l,332+t+1+h);
line(48+l,323+t+4+h,51+l,332+t+h);      // slant

ellipse(57+l,320+t+6+h,360,190,24,5);
ellipse(57+l,327+t+4+h,360,190,24,5);
ellipse(57+l,337+t-1+h,0,170,16,5);

line(32+l,320+t+6+h,32+l,328+t+3+h);
line(81+l,320+t+6+h,81+l,327+t+3+h);

setfillstyle(6,15);
floodfill(60+l,322+h+t,15);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//||//
setfillstyle(10,15);
floodfill(60+l,322+h+t+30,15);
//GGF################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

ellipse(51+l,132+h,340,216,4,15);
ellipse(62+l,131+h,327,216,4,15);
ellipse(72+l,132+h,327,216,2,15);
ellipse(42+l,132+h,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h);
line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);
setfillstyle(6,15);
floodfill(60+l-2,322+h+t-60,15);

setfillstyle(10,15);
floodfill(60+l-2,322+h+t-30,15);


//=================================IIst
//tower============================//
//#################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
 l=547;


line(28+l,400+h,33+l,333+h);
line(86+l,400+h,80+l,333+h);
//||||||||||||||||||||||||||||||Ist
//stage||||||||||||||||||||||||||||||||||||||||||||//
line(23+l,328+h,32+l,334+h);               // slant
line(88+l,328+h,80+l,334+h);                       // slant
line(83+l,323+h,75+l,334+h);                       // slant
line(75+l,323+h,70+l,332+h);
line(66+l,323+h,65+l,332+h);                       // slant
line(57+l,323+h,57+l,332+h);                       // slant
line(30+l,323+h,39+l,334+h);                       // slant
line(38+l,323+h,45+l,332+h);
line(48+l,323+h,51+l,332+h);      // slant

ellipse(57+l,320+h,350,190,34,5);
ellipse(57+l,327+h,350,190,34,5);
ellipse(57+l,337+h,0,180,25,5);
line(22+l,320+h,22+l,328+h);
line(91+l,320+h,91+l,327+h);
setfillstyle(6,15);
floodfill(60+l,320+h,15);

setfillstyle(10,15);

floodfill(60+l,320+h+15,15);


//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//||//
//+++++++++++++++++++++++++++++++++++2nd+++++++++++++++++++++++++++

line(35+l,315+h,38+l,242+h);
line(80+l,315+h,75+l,242+h);

//||||||||||||||||||||||||||||||2st
//stage||||||||||||||||||||||||||||||||||||||||||||//
t=-93;
line(23+4+l,328+t+3+h,32+5+l,334+t+h);               // slant
line(88+l,328+t+2+h,76+l,334+t+h);                       // slant
//line(+l83,323+t+4,75,334+t);                       // slant
line(78+l,323+t+3+h,71+l,332+t+h);
line(66+l,323+t+2+h,65+l,332+t+h);                       // slant
line(57+l,323+t+2+h,57+l,332+t-2+h);                       // slant
//line(30,323+t+2,39,334+t);                       // slant
line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h);      // slant

ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);
ellipse(57+l,337+t-1+h,0,180,18,5);

line(26+l,320+t+3+h,26+l,328+t+2+h);
line(88+l,320+t+3+h,88+l,327+t+3+h);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//||//
setfillstyle(6,15);
floodfill(60+l,320+h+t,15);                            ////////////////
setfillstyle(10,15);
floodfill(60+l,320+h-35,15);

//||||||||||||||||||||||||||||||3rd
//stage||||||||||||||||||||||||||||||||||||||||||||//

line(38+l,225+h,41+l,152+h);
line(75+l,225+h,72+l,152+h);



 t=-182;
line(32+l,328+t+4+h,32+7+l,334+t+h);               // slant
line(80+l,328+t+4+h,73+l,334+t+h);                       // slant
//line(+l83,323+t+4,75,334+t);                       // slant
line(76+l,323+t+5+h,71+l,332+t+h);
line(66+l,323+t+4+h,65+l,332+t+h);                       // slant
line(57+l,323+t+4+h,57+l,332+t-2+h);                       // slant
//line(30,323+t+2,39,334+t);                       // slant
line(39+l,323+t+6+h,45+l,332+t+1+h);
line(48+l,323+t+4+h,51+l,332+t+h);      // slant

ellipse(57+l,320+t+6+h,360,190,24,5);
ellipse(57+l,327+t+4+h,360,190,24,5);
ellipse(57+l,337+t-1+h,0,170,16,5);

line(32+l,320+t+6+h,32+l,328+t+3+h);
line(81+l,320+t+6+h,81+l,327+t+3+h);

setfillstyle(6,15);
floodfill(60+l,322+h+t,15);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//||//
setfillstyle(10,15);
floodfill(60+l,322+h+t+30,15);
//GGF################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

ellipse(51+l,132+h,340,216,4,15);
ellipse(62+l,131+h,327,216,4,15);
ellipse(72+l,132+h,327,216,2,15);
ellipse(42+l,132+h,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h);
line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);
setfillstyle(6,15);
floodfill(60+l-2,322+h+t-60,15);

setfillstyle(10,15);
floodfill(60+l-2,322+h+t-30,15);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//||//

//GGF################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

ellipse(51+l,132+h,340,216,4,15);
ellipse(62+l,131+h,327,216,4,15);
ellipse(72+l,132+h,327,216,2,15);
ellipse(42+l,132+h,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h);
line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);


//=================================Ist tower========================//

//+++++++++++++++++++++++++++++++++TAJ mahal++++++++++++++++++++++++//

////setcolor(15);

rectangle(275,290,365,440);         //  inner
rectangle(268,283,372,440);           //     //inner
setfillstyle(1,15);
floodfill(274,294,15);
line(280,440,280,350);
//line(283,440,283,350);
ellipse(315,349,130,180,35,40);
ellipse(275,280,290,326,53,40);

line(360,440,360,350);
ellipse(325,349,360,50,35,40);
ellipse(361,280,216,255,53,40);
setfillstyle(9,7);
floodfill(277,386,15);
putpixel(277,386,14);

line(280,360,359,360);
line(280,364,359,364);
setfillstyle(1,15);
floodfill(281,362,15);

rectangle(295+4,370,345-4,440);
rectangle(292+4,367,348-4,440);
setfillstyle(1,15);
floodfill(294+4,369,15);
rectangle(296,378,344,380);
floodfill(301,379,15);


line(302,405,302,440);
line(338,405,338,440);
ellipse(327,405,108,180,25,20);

ellipse(313,405,360,74,25,20);

setfillstyle(7,15);
//putpixel(312,416,11);
//floodfill(312,406,15);
line(329,390,329,440);
line(310,391,310,440);
line(311,402,329,402);
line(311,422,329,422);
line(302,412,310,412);
line(329,412,338,412);

line(302,428,310,428);
line(329,428,338,428);
//setfillstyle(7,15);


  p=-60;
line(302,405+p,302,440+p-20);
line(338,405+p,338,440+p-20);
ellipse(327,405+p,108,180,25,20);

ellipse(313,405+p,360,74,25,20);
setfillstyle(7,15);
floodfill(311,406,15);
line(329,390+p,329,440+p-20);
line(310,391+p,310,440+p-20);
line(311,402+p,329,402+p);
line(311,422+p-7,329,422+p-7);
line(302,412+p,310,412+p);
line(329,412+p,338,412+p);



//??//////////////////////////////////2nd portion/////////////////////


rectangle(245,260,400,440);         //  inner
rectangle(230,245,415,440);           //     //inner

rectangle(230,425,275,440);
setfillstyle(1,15);
floodfill(231,426,15);
floodfill(249,426,15);
////setcolor(8);
rectangle(230+135,425,275+140,440);
//setfillstyle(1,15);

floodfill(231+160,426,15);
floodfill(249+159,426,15);



////setcolor(15);
line(415,290,415,440);
line(420,245,420,440);

line(415,240,415,205);
line(420,240,420,205);


line(225,245,225,440);          //vertical
line(230,250,230,440);

line(225,240,225,205);          //vertical
line(230,240,230,205);

line(222,240,425,240);
line(222,245,425,245);                    //horz

ellipse(222,242.5,90,270,2.5,2.5);
ellipse(425,242.5,270,90,2.5,2.5);

rectangle(231,230,414,239);



ellipse(227,206,0,180,9,1);
ellipse(227,204,0,180,9,1);
putpixel(220,204,15);
putpixel(220,205,15);
putpixel(220,206,15);
putpixel(235,204,15);
putpixel(235,205,15);
putpixel(235,206,15);
ellipse(227,203,0,180,6,7);
line(227,195,227,192);
 r=190;

ellipse(227+r,206,0,180,9,1);
ellipse(227+r,204,0,180,9,1);
putpixel(220+r,204,15);
putpixel(220+r,205,15);
putpixel(220+r,206,15);
putpixel(235+r,204,15);
putpixel(235+r,205,15);
putpixel(235+r,206,15);

ellipse(227+r,203,0,180,6,7);
line(227+r,195,227+r,192);

/*

//floodfill(305,424,15);
//floodfill(305,429,15);
//floodfill(325,424,15);
//floodfill(325,421,15);
//floodfill(332,420,15);
//floodfill(332,429,15);
*/

ellipse(315,170,140,210,105,100);
ellipse(330,170,330,40,105,100);

ellipse(292,167,105,140,75,95);
ellipse(353,167,40,75,75,95);

ellipse(323,78,350,190,60,8);
ellipse(323,77,350,190,60,8);


//ellipse(259,24,295,358,58,51);
ellipse(240,24,321,358,78,71);
ellipse(192,40,342,7,128,100);

ellipse(448,30,180,203,128,100);
ellipse(443,5,194,220,128,100);
ellipse(438,-9,203,234,128,100);
ellipse(198,-6,310,340,128,100);

ellipse(319,30,0,360,7,2);

floodfill(320,29,15);
circle(319,24,3);
line(319,20,319,18);
circle(319,14,4);
line(319,9,319,0);
//ellipse(319,4,0,360,2,3);
circle(319,2,1);
line(316,6,322,6);
line(316,6,314,4);
line(322,6,324,4);
//???????????????????????????????????

//////////////////////////////////////////////////////////
//ellipse();
ellipse(321,258,48,130,140,50);
ellipse(321,255,48,130,140,50);

ellipse(321,241,48,130,140,50);
ellipse(321,238,48,130,140,50);
//setfillstyle(6,11);
//  line(265,79,277,70);
//////setcolor(4);
  //line(385,81,380,76);

//while(!kbhit())
//{
 delay(300);
setfillstyle(10,15);

floodfill(322,160,15);
setfillstyle(6,15);

floodfill(322,193,15);

//}
//line(319,26,319,480+h);//center



///////////////////////////////////////////new////////////////////////////
rectangle(150,283,225,294);

//line(146,294,225,294);
line(150,298,225,298);

line(150,240,150,440);            //pole
line(146,240,146,440);

line(150,299,150,440);            //pole
line(146,299,146,440);


r=-80;
 n=34;

ellipse(227+r,206+n,0,180,9,1);
ellipse(227+r,204+n,0,180,9,1);
putpixel(220+r,204+n,15);
putpixel(220+r,205+n,15);
putpixel(220+r,206+n,15);
putpixel(235+r,204+n,15);
putpixel(235+r,205+n,15);
putpixel(235+r,206+n,15);

ellipse(227+r,203+n,0,180,6,7);
line(227+r,195+n,227+r,192+n);

l=128;
h=150;

ellipse(51+l,132+h-7,340,216,4,15);
ellipse(62+l,131+h-7,327,216,4,15);
ellipse(72+l,132+h-7,327,216,2,15);
ellipse(42+l,132+h-7,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h-7);
line(75+l,107+h,75+l,140+h-7);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);


line(100-5,240+15,100-5,440);            //pole
line(96-5,240+15,96-5,440);

r=-134;
 n=49;
ellipse(227+r,206+n,0,180,9,1);
ellipse(227+r,204+n,0,180,9,1);
putpixel(220+r,204+n,15);
putpixel(220+r,205+n,15);
putpixel(220+r,206+n,15);
putpixel(235+r,204+n,15);
putpixel(235+r,205+n,15);
putpixel(235+r,206+n,15);

ellipse(227+r,203+n,0,180,6,7);
line(227+r,195+n,227+r,192+n);


line(146,294,97,302);
line(146,298,97,306);

line(146,283,97,291);


///////////////////////////////////////inner/////////////////

//rectangle(275+k,290,365+k,440);         //  inner
//rectangle(268+k,283,372+k,440);           //     //inner

//line(225,367,151,367);
rectangle(155,302,220,364);
rectangle(155,302+70,220,364+75);

 q=-133;
 d=-2;
line(302+q-5,405+d,302+q-5,440+d);
line(338+q+5,405+d,338+q+5,440+d);
ellipse(327+q+5,405+d,108,180,35,30);

ellipse(313+q-5,406+d,360,74,35,30);


d=-77;
line(302+q-5,405+d,302+q-5,440+d);
line(338+q+5,405+d,338+q+5,440+d);
ellipse(327+q,405+d,105,180,30,25);

ellipse(313+q,405+d,360,80,30,25);
putpixel(163,300,11);
setfillstyle(6,15);
floodfill(163,330,15);
floodfill(160,380,15);

line(141,305,141,360);
line(101,310,101,365);
line(141,305,101,310);
line(141,360,101,365);


int x=70;
line(141,305+x,141,440);
line(101,310+x,101,440);
line(141,305+x,101,310+x);



q=-200;
line(302+q+4,405+d,302+q+4,440+d);
line(338+q-1,405+d,338+q-1,440+d-2);
ellipse(327+q,405+d,105,180,20,15);
ellipse(313+q+4,405+d,360,80,20,15);

d=1;
line(302+q+4,405+d,302+q+4,440+d-2);
line(338+q-1,405+d,338+q-1,440+d-2);
ellipse(327+q,405+d,105,180,20,15);
ellipse(313+q+4,405+d,360,80,20,15);

rectangle(178,415,197,439);
setfillstyle(7,15);
floodfill(179,416,15);
 rectangle(178,415-75,197,440-76);
setfillstyle(7,15);
floodfill(179,415-75+1,15);

line(130-3,417,130-3,440);
line(113+3,420,113+3,440);

line(113+3,420,130-3,417);
putpixel(114,423,4);
line(113,440,130,440);
floodfill(114+3,423,15);



 a=-76;
line(130-3,417+a,130-3,440+a-3);
line(113+3,420+a,113+3,440+a);

line(113+3,420+a,130-3,417+a);
putpixel(114,423,4);
floodfill(114+3,423+a,15);



line(10,400+h,615,400+h);



//////////////////////////////////////////////right\\\\\\\\\\\


 e=270;
rectangle(150+e,283,226+e,294);
line(146+e+4,294,225+e,294);
line(146+e+4,298,225+e,298);


line(150+e+80,240,150+e+80,440);            //pole
line(146+e+80,240,146+e+80,440);

line(150+e+80,299,150+e+80,440);            //pole
line(146+e+80,299,146+e+80,440);





l=400;
h=+149;
ellipse(51+l,132+h-7,340,216,4,15);
ellipse(62+l,131+h-7,327,216,4,15);
ellipse(72+l,132+h-7,327,216,2,15);
ellipse(42+l,132+h-7,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h-7);
line(75+l,107+h,75+l,140+h-7);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);

r=270;
n=n-15;

ellipse(227+r,206+n,0,180,9,1);
ellipse(227+r,204+n,0,180,9,1);
putpixel(220+r,204+n,15);
putpixel(220+r,205+n,15);
putpixel(220+r,206+n,15);
putpixel(235+r,204+n,15);
putpixel(235+r,205+n,15);
putpixel(235+r,206+n,15);

ellipse(227+r,203+n,0,180,6,7);
line(227+r,195+n,227+r,192+n);



line(146+e+135,302,97+e+135,294);
line(146+e+135,306,97+e+135,298);

line(146+e+135,291,97+e+135,283);



line(100-5+e+190,240+15,100-5+e+190,440);            //pole
line(96-5+e+190,240+15,96-5+e+190,440);





r=325;
n+=15;
ellipse(227+r,206+n,0,180,9,1);
ellipse(227+r,204+n,0,180,9,1);
putpixel(220+r,204+n,15);
putpixel(220+r,205+n,15);
putpixel(220+r,206+n,15);
putpixel(235+r,204+n,15);
putpixel(235+r,205+n,15);
putpixel(235+r,206+n,15);

ellipse(227+r,203+n,0,180,6,7);
line(227+r,195+n,227+r,192+n);


rectangle(155+e,302,220+e,364);
rectangle(155+e,302+70,220+e,364+75);


q=140;
d-=1;
line(302+q-5,405+d,302+q-5,440+d);
line(338+q+5,405+d,338+q+5,440+d);
ellipse(327+q+5,405+d,108,180,35,30);

ellipse(313+q-5,406+d,360,74,35,30);

d=-77;
line(302+q-5,405+d,302+q-5,440+d);
line(338+q+5,405+d,338+q+5,440+d);
ellipse(327+q,405+d,105,180,30,25);

ellipse(313+q,405+d,360,80,30,25);
putpixel(163,300,11);
setfillstyle(6,15);
floodfill(163,330,15);
floodfill(160,380,15);
/////////////////////////////
e=e-15;
line(141+e+150,305+5,141+e+150,360+5);
line(101+e+150,310-5,101+e+150,365-5);
line(101+e+150,305,141+e+150,310);
line(101+e+150,360,141+e+150,365);

 v=75;
line(141+e+150,305+5+v-5,141+e+150,440);
line(101+e+150,310-5+v-5,101+e+150,440);
line(101+e+150,305+v-5,141+e+150,310+v-5);
//line(101+e+150,360+v,141+e+150,365+v);

e=e+18;
rectangle(178+e,415,197+e,439);
setfillstyle(7,15);
floodfill(179+e,416,15);
 f=-75;
rectangle(178+e,415+f,197+e,439+f);
setfillstyle(7,15);
floodfill(179+e,416+f,15);


e+=130;
line(130-3+e,440+a-2,130-3+e,417+a+2);
line(113+3+e,440+a-2,113+3+e,420+a-2);

line(113+3+e,417+a,130-3+e,420+a);
putpixel(114+e,423,4);
floodfill(114+3+e,423+a,15);

a=1;
line(130-3+e,440+a-2,130-3+e,417+a+2);
line(113+3+e,440+a-2,113+3+e,420+a-2);

line(113+3+e,417+a,130-3+e,420+a);
putpixel(114+e,423,4);
line(113+3+e,440,130-3+e,440);
floodfill(114+3+e,423+a,15);


q=204;
line(302+q+4,405+d,302+q+4,440+d-2);
line(338+q-1,405+d,338+q-1,440+d+2);
ellipse(327+q,405+d,105,180,20,15);
ellipse(313+q+4,405+d,360,80,20,15);
q=204;

d=0;
line(302+q+4,405+d,302+q+4,440+d-1);
line(338+q-1,405+d,338+q-1,440+d);
ellipse(327+q,405+d,105,180,20,15);
ellipse(313+q+4,405+d,360,80,20,15);
line(302+q+4,440,302+q+4,440);




setfillstyle(10,15);
floodfill(322,160,15);
setfillstyle(6,15);

floodfill(322,193,15);
///////////////////////////////////////////////walls//////////////
setfillstyle(9,15);
floodfill(110,294,15);
floodfill(210,290,15);
floodfill(430,290,15);
floodfill(520,290,15);
/////////////////////////////////////////////poles
setfillstyle(6,15);
floodfill(93,394,15);
floodfill(148,394,15);
floodfill(227,394,15);
floodfill(417,394,15);
floodfill(498,394,15);
floodfill(553,394,15);


setfillstyle(9,15);
floodfill(185,224,15);
floodfill(465,224,15);



while(!kbhit())
{
delay(40);
putpixel(random(640),random(248),random(15));
 }

  getch();
cleardevice();

setcolor(13);
rectangle(1,1,639,479);
rectangle(15,15,624,464);
//setcolor(LIGHTBLUE);
setfillstyle(6,11);

floodfill(2,2,13);
settextstyle(7,0,3);
setcolor(12);


//delay(1000);
getch();
}



void welcome(void)
 {
	int k,i;
/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
 /* initialize graphics mode */
initgraph(&gdriver, &gmode, " ");
 /*Color Setup */
 /* -------------------*/
 setbkcolor(RED);
 setcolor(GREEN);
 /*Call To Functions 0 */
 /************************/
 draw_bar();
 draw_line();
 draw_bar3d();
 draw_pieslice();
// gotoxy(20,45);
// printf("Computational Knowledge Engine");
 /***********************/
	getch();
 /*Ends All Graphic Jobs*/
closegraph();
}
/*Function Employed in Drawing a Bars*/
/*********************************************/
void draw_bar(void)
 {
	int i;
	setfillstyle(CLOSE_DOT_FILL,YELLOW);
	for(i=0;i<=640;i+=10)
 {
	bar(0,0,i,50);
	 delay(3);
		sound(200+i);
	delay(20);
	 nosound();
}
	for(i=50;i<=480;i+=10)
	{
		bar(590,50,640,i);
		 delay(15);
			sound(400+i);
		delay(20);
			 nosound();
	}
	 for(i=590;i>=0;i-=10)
 {
		 bar(590,430,i,480);
		delay(25);
		 sound(600+i);
			delay(20);
			 nosound();
 }
		 for(i=430;i>=50;i-=10)
	{
		bar(0,430,50,i);
		 delay(15);
		sound(800+i);
			 delay(20);
			nosound();
	}
	 for(i=70;i<=140;i+=10)
 {
		setfillstyle(SOLID_FILL,GREEN);
		bar(430,70,440,140);
		 delay(20);
			sound(1000+i);
			delay(20);
			 nosound();
 }
		 for(i=70;i<=140;i+=10)
	 {
			 bar(460,70,470,140);
			delay(20);
			 sound(1000+i);
			delay(20);
			nosound();
	 }
 }
/*Function Employed in Drawing Lines*/
/*********************************************/
 void draw_line(void)
 {
	setfillstyle(CLOSE_DOT_FILL,YELLOW);
			 int i;
	for(i=70;i<=140;i+=10)
{
		 line(70,70,80,i);
		delay(50);
		 sound(1000+i);
		delay(20);
		nosound();
}
		for(i=140;i>=90;i-=10)
		{
			 line(80,140,100,i);
				delay(50);
				 sound(1000+i);
				delay(20);
				nosound();
		}
	for(i=90;i<=140;i+=10)
{
		 line(100,90,120,i);
		 delay(50);
		sound(1000+i);
			 delay(20);
			nosound();
}
		 for(i=140;i>=70;i-=10)
	 {
			line(120,140,130,i);
			 delay(50);
				 sound(1000+i);
			 delay(20);
				 nosound();
	 }
	 for(i=70;i<=105;i+=5)
 {
	line(440,70,450,i);
	delay(50);
		 sound(1000+i);
	delay(20);
		 nosound();
}
		for(i=105;i>=70;i-=5)
	{
			 line(450,105,460,i);
			delay(50);
			 sound(1000+i);
			delay(20);
			 nosound();
	 }
 }
 /*Function Employed in Drawing a Three Dimensional Bars*/
/*********************************************/
	 void draw_bar3d(void)
{
	int i;
	setfillstyle(CLOSE_DOT_FILL, YELLOW);
		 for(i=0;i<=5;i++)
	 {
			bar3d(150,70,170,140,5,3);
			 delay(20);
			 bar3d(170,70,200,90,5,3);
			delay(20);
			 bar3d(170,95,190,115,5,3);
			delay(20);
			 bar3d(170,120,200,140,5,3);
				delay(20);
			sound(1000+i);
			 delay(20);
				nosound();
			bar3d(220,70,240,140,i,3);
			 delay(20);
				bar3d(240,120,280,140,i,3);
				 delay(20);
			bar3d(300,70,320,140,i,2);
			 delay(20);
			bar3d(320,70,350,90,i,3);
			 delay(20);
			bar3d(320,120,350,140,i,2);
			 delay(20);
			bar3d(480,70,500,140,i,3);
			 delay(20);
			bar3d(500,70,530,90,i,2);
			 delay(20);
			bar3d(500,95,520,115,i,2);
			 delay(20);
			bar3d(500,120,530,140,i,2);
			 delay(20);
	 }
}
/*******************************************************/
	/*Function Employed in Drawing a Pieslices*/
/*********************************************/
 void draw_pieslice(void)
{
	int i;
	setfillstyle(CLOSE_DOT_FILL,YELLOW);
	for(i=5;i<=30;i++)
		 {
			pieslice(390,105,0,360,i);
			delay(20);
			 setfillstyle(EMPTY_FILL,YELLOW);
			 pieslice(390,105,0,360,15);
			sound(1000+i);
			delay(20);
				 nosound();
		}
	for(i=40;i<=480;i+=40)
	{
		 setfillstyle(CLOSE_DOT_FILL,CYAN);
		pieslice(60+i,240,0,360,40);
			 delay(20);
			setfillstyle(CLOSE_DOT_FILL,LIGHTGREEN);
		pieslice(60+i,320,0,360,40);
			 delay(20);
			sound(1000+i);
			 delay(20);
			nosound();
	}
	 gotoxy(15,17); printf("Computational Knowledge Engine");
}





















void loading() {
    int gd = DETECT, gm;
    int i, x, y,j=0;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
        
 
 while (j<2) {
      /* color 500 random pixels on screen */
   for(i=0; i<=25000; i++) {
       x=rand()%getmaxx();
          y=rand()%getmaxy();
          putpixel(x,y,15);
      }
      j++;
     delay(250);
 
      /* clears screen */
      cleardevice();
    }

    closegraph();
}

int check2(char string[])
{
int d=0,e=0,w=0;
double D,a,b,c,real,img;
char tempe[100],rr[100];
 char q[4]={"root"};
   strcpy(rr,string);
 for(d=0;d<=3;d++)
     {
	tempe[d]=string[d];
     }
while(tempe[e]!='\0' && q[e]!='\0')
		{
			if(tempe[e]!=q[e])
			  {
			     w=1;
			     break;
			  }
			  e++;
		}
getch();
if(w==0)
{
  //finding root
double a,b,c,D,img,real,root;
clrscr();
printf("enter coefficient-->");
scanf("%lf %lf %lf",&a,&b,&c);
//printf("--%lf--",b);
D=pow(b,2)-4*a*c;
if(D<0)//We check the determinant whether it is greater or lesser than zero and accordingly find real or imaginary roots
{
    printf("The roots are imaginary\n");
    real=(-1*b)/(2*a);//The real part of the root
    img=sqrt(-1*D)/(2*a);//The imaginary part of the root
    printf("The first root is %lf+i%lf\n",real,img);
    printf("The first root is %lf-i%lf\n",real,img);
}
if(D>=0)
{
    printf("The roots are real\n");
    if(D!=0)
{   //We find both roots if D>0
    double root1=(-1*b+sqrt(D))/(2*a);
    double root2=(-1*b-sqrt(D))/(2*a);
    printf("The first root is %lf\n",root1);
    printf("The second root is %lf\n",root2);
}
else
{   //We find the root if D==0 and display that we have equal roots
    root=(-1*b)/(2*a);
    printf("The roots are equal\n");
    printf("The root is %lf\n",root);
}
}
}
 getch();
return 1;
}



//lexical analyser
void lexanalysis(char *str)
 {
   int i=0;
   while(str[i]!='\0')
    {
     if(Isiden(str[i]))     //for identifiers
       {
	  while(Isiden(str[i]))
	{
	    iden[idi][idj++]=str[i++];
	}
	  iden[idi][idj]='\0';
	  idi++;idj=0;
       }
      else
      if(str[i]=='"')         //for literals
	 {
	 lit[l++]=str[i];
	 for(j=i+1;str[j]!='"';j++)
	   {
	    lit[l++]=str[j];
	   }
	 lit[l++]=str[j];lit[l]='\0';
	 strcpy(litral[liti++],lit);
	 i=j+1;
	 }
      else
      if(Isop(str[i]))        // for operators
	  {
	 while(Isop(str[i]))
	    {
	     oper[opi][opj++]=str[i++];
	    }
	 oper[opi][opj]='\0';
	 opi++;opj=0;
	  }
       else
       if(Isdel(str[i]))     //for delemeters
	  {
	  while(Isdel(str[i]))
	    {
	      delem[deli++]=str[i++];
	    }
	   }
	else
	   {
	    i++;
	}
     }

   removeduplicate();
   final();
}

int Isiden(char ch)
 {
   if(isalpha(ch)||ch=='_'||isdigit(ch)||ch=='.')
   return 1;
   else
   return 0;
 }

int Isop(char ch)
 {
  int f=0,i;
  for(i=0;i<8&&!f;i++)
   {
    if(ch==op[i])
     f=1;
   }
 return f;
}

int Isdel(char ch)
 {
  int f=0,i;
  for(i=0;i<8&&!f;i++)
   {
    if(ch==del[i])
     f=1;
   }
 return f;
 }

int Iskey(char * str)
{
  int i,f=0;
  for(i=0;i<5;i++)
   {
    if(!strcmp(key[i],str))
      f=1;
    }
  return f;
}

void removeduplicate()
 {
   int i,j;
   for(i=0;i<20;i++)
    {
     uqdeli[i]=0;
     uqopi[i]=0;
     uqideni[i]=0;
    }
   for(i=1;i<deli+1;i++)  //removing duplicate delemeters
     {
       if(uqdeli[i-1]==0)
     {
	   uqdel[uqdi++]=delem[i-1];
	   for(j=i;j<deli;j++)
	  {
	       if(delem[i-1]==delem[j])
		uqdeli[j]=1;
	  }
      }
     }

    for(i=1;i<idi+1;i++)  //removing duplicate  identifiers
       {
      if(uqideni[i-1]==0)
	 {
	strcpy(uqiden[uqidi++],iden[i-1]);
	for(j=i;j<idi;j++)
	 {
	    if(!strcmp(iden[i-1],iden[j]))
	       uqideni[j]=1;
	 }
	  }
    }

     for(i=1;i<opi+1;i++)  //removing duplicate  operators
     {
	if(uqopi[i-1]==0)
	   {
	   strcpy(uqop[uqoperi++],oper[i-1]);
	   for(j=i;j<opi;j++)
	     {
	       if(!strcmp(oper[i-1],oper[j]))
		 uqopi[j]=1;
	     }
	   }
     }

 }
void final()
 {
  int i=0;
  idi=0;
  for(i=0;i<uqidi;i++)
   {
     if(Iskey(uqiden[i]))        //identifying keywords
     strcpy(keyword[kdi++],uqiden[i]);
     else
      if(isdigit(uqiden[i][0]))    //identifying constants
     strcpy(constant[ci++],uqiden[i]);
     else
     strcpy(iden[idi++],uqiden[i]);
   }

// printing the outputs
//setbkcolor(RED);
printf("\n\tDelemeter are : ");
for(i=0;i<uqdi;i++)
printf("\t%c\n",uqdel[i]);

printf("\n\tOperators are : ");
for(i=0;i<uqoperi;i++)
 {
 printf("\t");
 puts(uqop[i]);
 }

printf("\n\tIdentifiers are : ");
for(i=0;i<idi;i++)
 {
  printf("\t");
  puts(iden[i]);
 }

printf("\n\tKeywords are : ");
for(i=0;i<kdi;i++)
 {
  printf("\t");
  puts(keyword[i]);
 }

printf("\n\tConstants are : ");
for(i=0;i<ci;i++)
  {
  printf("\t");
  puts(constant[i]);
  }

printf("\n\tLiterals are : ");
for(i=0;i<liti;i++)
 {
   printf("\t");
   puts(litral[i]);
 }
 cout<<"\n";
// delay(2000);
 //clrscr();
}
//string matching
char *substring(char *string, int position, int length)
{
   char *pointer;
   int c;
pointer=(char *) malloc(length+1);
  // pointer = malloc(length+1);

   if (pointer == NULL)
   {
      printf("Unable to allocate memory.\n");
      exit(1);
   }

   for (c = 0 ; c < length ; c++)
   {
      *(pointer+c) = *(string+position-1);
      string++;
   }

   *(pointer+c) = '\0';

   return pointer;
}



void integrat(char str[])
{

char string2[100],w1[100],w2[100],final[100];
char temp,temp5;
char temp2,temp3;
int n,p,i=0,j=0,k=0,l=0;
for(i=5;i<=strlen(str);i++)
    {
    string2[l]=str[i];
    l++;
    }
    printf("\n      Attempting to integrate the function--> %s\n",string2);
    getch();
i=0;
j=0;
n=strlen(string2);
printf("\nlength of function=%d\n",n);
 /*  FILE* fp=fopen("qw.txt","r");
			  for(i=0;i<15;i++)
			       {
      fscanf(fp,"%s %s\n",w1,w2);
      if(strcmp(string2,w1)==0)
      {
      cout<<"Integration is-->"<<w2<<"\n";
      fclose(fp);
      goto H;
      }
      } */
    //  fclose(fp);
while(i<n)
{
if(string2[i]=='x')
    {
	j=i+1;

	if(string2[j]=='^')
	    {
	    j=j+1;
	    temp=string2[j];
	    final[k]='x';
	    //cout<<final[k];
	    final[++k]='^';
	    final[++k]=temp+1;
	    final[++k]='/';
	    final[++k]=temp+1;
	    temp2=string2[++j];
	    final[++k]=temp2;

	    i=i+4;
	    k=k+1;
	    }
	    else{
       j=i+1;
	final[k]='x';
	final[++k]='^';
	final[++k]=50;
	final[++k]='/';
	final[++k]=50;
	temp3=string2[j];
	final[++k]=temp3;
	k=k+1;
	i=i+2;
	    }
}

 if(string2[i]>=48 && string2[i]<=57)
     {
    int temp4=string2[i];
    j=i+1;
    temp5=string2[j];
     final[k]=temp4;
     final[++k]='x';
     final[++k]=temp5;
     k=k+1;
     i=i+1;
     }
}
p=strlen(final);
printf("integration is-->");
for(i=0;i<p;i++)
printf("%c",final[i]);
H:
}


void main()
{
welcome();
char ch='y';
   while(ch=='y')
   {
   // char match[4]={"exit"};
    int flag=0,runtest=0;
    char string[100];

   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int left, top, right, bottom;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

 // settextstyle(9,HORIZ_DIR,7);
   //outtextxy(20,20,"Computational Knowledge Engine");


   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   settextstyle(9,HORIZ_DIR,7);
   outtextxy(10,10,"Computational knowledge engine ");

   left = getmaxx() / 2 - 150;
   top = getmaxy() / 2 - 16;
   right = getmaxx() / 2 + 150;
   bottom = getmaxy() / 2 + 8;

   /* draw a rectangle */



   rectangle(left,top,right,bottom);

   left = getmaxx() / 1.87 - 50;
   top = getmaxy() / 1.7 - 18;
   right = getmaxx() / 1.87 + 5;
   bottom = getmaxy() / 1.7 + 12;
   rectangle(left,top,right,bottom);
  //  printf("Enter a string\n");
  gotoxy(25,25);
  printf("A V.N.Y 'S GROUP PRODUCTIONS");
  gotoxy(38,18);
  printf("SEARCH");
  gotoxy(23,15);
   gets(string);
   if(strcmp("taj",string)==0)
     {
	taj();
     }
   else if(strcmp("taj mahal",string)==0)
   {
   taj();
   }

   else if(strcmp("exit",string)==0)
   {
   exit(0);
   }
   else if(strcmp("help",string)==0)
   {
   help();
   }
   else
   {
loading();//loading screen
   lexanalysis(string);
   flag=analyzer(string);
    check2(string);
   if(flag==0)
    printf("Sorry couldn`t gotch you /n/n Try Again\nWe found a Bug . . . . . . . .  Attempting System RESTAR");
    else if(flag==1)
	runtest=Alphabetical(string);
    else if(flag==2)
	runtest=Mathematics(string);
    else
	printf("We found a Bug . . . . . . . .  Attempting System RESTART");
     }
     }
   getch();
}

int Alphabetical(char string[])
{
   char *pointer;
   int position = 1, length = 1, temp, string_length,i;

   char w1[50];
char w3[50];
char w4[50];
char w2[50];
char w5[50];
char w6[50];
char w7[50];



   temp = string_length = strlen(string);

   while (position <= string_length)
   {
      while (length <= temp)
      {
	 pointer = substring(string, position, length);
	// printf("%s\n", pointer);
	       if(pointer[0]=='a')
		  {
		    FILE* fp=fopen("a.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
	printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }
else if(pointer[0]=='b')
		  {
		    FILE* fp=fopen("b.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }   else if(pointer[0]=='c')
		  {
		    FILE* fp=fopen("c.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='d')
		  {
		    FILE* fp=fopen("d.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='e')
		  {
		    FILE* fp=fopen("e.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='f')
		  {
		    FILE* fp=fopen("f.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='g')
		  {
		    FILE* fp=fopen("g.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='h')
		  {
		    FILE* fp=fopen("h.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='i')
		  {
		    FILE* fp=fopen("i.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='j')
		  {
		    FILE* fp=fopen("j.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='k')
		  {
		    FILE* fp=fopen("k.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='l')
		  {
		    FILE* fp=fopen("l.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='m')
		  {
		    FILE* fp=fopen("m.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='n')
		  {
		    FILE* fp=fopen("n.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='o')
		  {
		    FILE* fp=fopen("o.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='p')
		  {
		    FILE* fp=fopen("p.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='q')
		  {
		    FILE* fp=fopen("q.txt","r");

		    for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='r')
		  {
		    FILE* fp=fopen("r.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='s')
		  {
		    FILE* fp=fopen("s.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='t')
		  {
		    FILE* fp=fopen("t.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='u')
		  {
		    FILE* fp=fopen("u.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='v')
		  {
		    FILE* fp=fopen("v.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='w')
		  {
		    FILE* fp=fopen("w.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='x')
		  {
		    FILE* fp=fopen("x.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='y')
		  {
		    FILE* fp=fopen("y.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }    else if(pointer[0]=='z')
		  {
		    FILE* fp=fopen("z.txt","r");
			  for(i=0;i<10;i++)
			       {
      fscanf(fp,"%s %s %s %s %s %s %s\n",w1,w2,w3,w4,w5,w6,w7);
      if(strcmp(pointer,w1)==0)
	{
		printf("\n%s",w1);
	printf("\n assuming %s is a %s ",w1,w2);
	printf("\n%s  %s",w1,w3);
	printf("\n%s  %s",w1,w4);
	printf("\n%s  %s",w1,w5);
	printf("\n%s  %s",w1,w6);
	printf("\n%s  %s",w1,w7);
	getch();
	 break;
	 }
			       }
      fclose(fp);
     }
	 free(pointer);
	 length++;
      }
      temp--;
      position++;
      length = 1;
   }
 // getch();
   return 1;
}

int analyzer(char string[])
{
    char farcry[100],temp2[100],ell[100],temp3[100],temp[100],maths[14][25] ={"root","integrate","diff","integration","sine","sin","cos","cosine","tan","tangent","cot","sec","cosec"};
     int ascii=0,j=0,i,t=0,p=0,e=0,d=0,w=0;
   // char q[4]={"inte"};
     char h[4]={"diff"};
     strcpy(temp,string);
  for(i=0;i<strlen(temp);i++)
    {
	ascii=temp[i];
	if(((ascii>=65) && (ascii<=90)) || ((ascii>=97) && (ascii<122)))
	    farcry[j++]=temp[i];
	else
	    break;
    }
    //comparing two string for differenciation
for(i=0;i<=3;i++)
     {
	temp2[i]=string[i];
     }
while(temp2[p]!='\0' && h[p]!='\0')
		{
			if(temp2[p]!=h[p])
			  {
			     t=1;
			     break;
			  }
			  p++;
		}

if(t==0)
{
diff(temp);
}
else
{
check1(temp);
}
//comparing two string for Integration
/*for(d=0;d<=3;d++)
     {
	temp3[d]=string[d];
     }
while(temp3[e]!='\0' && q[e]!='\0')
		{
			if(temp3[e]!=q[e])
			  {
			     w=1;
			     break;
			  }
			  e++;
		}
if(w==0)
{
integrat(temp);
}*/
//if string are equal then maka a call for diff function
  for(i=0;i<14;i++)
    if(strcmpi(temp,maths[i])==0)
    {
      printf("%s is a  Mathamatical function.\n Write help on the search bar to use it",temp);
      return 2;
    }

    /*for(i=0;i<strlen(string);i++)
    {

	if(string==)
    }*/

    return 1;
}
int check1(char string[])
{
int d=0,e=0,w=0;
char tempe[100],rr[100];
 char q[4]={"inte"};
   strcpy(rr,string);
 for(d=0;d<=3;d++)
     {
	tempe[d]=string[d];
     }
while(tempe[e]!='\0' && q[e]!='\0')
		{
			if(tempe[e]!=q[e])
			  {
			     w=1;
			     break;
			  }
			  e++;
		}
if(w==0)
{
integrat(rr);
}
getch();
return 1;
}
int diff(char strin[])
{
int Coeficient[100],i,liber[100],g,j=0,ajutor,w,help,h,m;
	float x;
	char Functie[100],Nou[100];
for(i=5;i<=strlen(strin);i++)
    {
    Functie[j]=strin[i];
    printf("%c",Functie[j]);
    j++;
    }
    printf("\n      Attempting to differenciate the function--> %s\n",Functie);
    getch();
 g=strlen(Functie);
printf("lenth of funtion=%d\n",g);
	j=0;
	for(i=0;i<=g;i++)
	{

		if( (Functie[i]=='4') || (Functie[i]=='1') || (Functie[i]=='2') || (Functie[i]=='3') || (Functie[i]=='5') || (Functie[i]=='6') || (Functie[i]=='7') || (Functie[i]=='8') || (Functie[i]=='9') )
			{
				h=i;
				do{
					h++;

				}while( (Functie[h]=='4') || (Functie[h]=='1') || (Functie[h]=='2') || (Functie[h]=='3') || (Functie[h]=='5') || (Functie[h]=='6') || (Functie[h]=='7') || (Functie[h]=='8') || (Functie[h]=='9') );

				if( ( (i == 0) || (Functie[i-1]=='(') || (Functie[i-1]=='+') || (Functie[i-1]=='-') ) && ( (Functie[h]==')') || (Functie[h]=='+') || (Functie[h]=='-') || (Functie[h]==NULL) ) )
					{
						Nou[j]='0';
						i=h-1;
					}
				else
					Nou[j]=Functie[i];
			}

		if(Functie[i]=='+')
		{
			Nou[j]=Functie[i];
		}

		if(Functie[i]=='(')
		{
			Nou[j]=Functie[i];
		}

		if(Functie[i]==')')
		{
			Nou[j]=Functie[i];
		}

		if( (Functie[i]=='s') && (Functie[i+1]=='i') && (Functie[i+2]=='n') )
		{
			Nou[j]='c';
			j++;
			Nou[j]='o';
			j++;
			Nou[j]='s';
			if(Functie[i+3]=='(')
			{
				j++;
				Nou[j]='(';
				help=i+4;
				while(Functie[help]!=')')
				{
					j++;
					Nou[j]=Functie[help];
					help++;
				}
				j++;
				Nou[j]=')';
				j++;
				Nou[j]='*';
			}
			else
			{
				j++;
				Nou[j]=Functie[i+3];
				j++;
				Nou[j]='*';
			}
			i++;
			i++;

		}
		if( (Functie[i]=='l') && (Functie[i+1]=='n') )
		{
			Nou[j]='(';
			j++;
			Nou[j]='1';
			j++;
			Nou[j]='/';

			if(Functie[i+2]=='(')
			{
				j++;
				Nou[j]='(';
				help=i+3;
				while(Functie[help]!=')')
				{
					j++;
					Nou[j]=Functie[help];
					help++;
				}
				j++;
				Nou[j]=')';
				j++;
				Nou[j]=')';
				j++;
				Nou[j]='*';
			}
			else
			{
				j++;
				Nou[j]=Functie[i+2];
				j++;
				Nou[j]=')';
				j++;
				Nou[j]='*';
			}
			i++;
		}

		if( (Functie[i]=='c') && (Functie[i+1]=='o') && (Functie[i+2]=='s') )
		{
			Nou[j]='-';
			j++;
			Nou[j]='s';
			j++;
			Nou[j]='i';
			j++;
			Nou[j]='n';
			if(Functie[i+3]=='(')
			{
				j++;
				Nou[j]='(';
				help=i+4;
				while(Functie[help]!=')')
				{
					j++;
					Nou[j]=Functie[help];
					help++;
				}
				j++;
				Nou[j]=')';
				j++;
				Nou[j]='*';
			}
			else
			{
				j++;
				Nou[j]=Functie[i+3];
				j++;
				Nou[j]='*';
			}
			i++;
			i++;

		}

		if(Functie[i]=='-')
		{
			Nou[j]=Functie[i];
		}

		if(Functie[i]=='/')
		{
			Nou[j]=Functie[i];
		}

		if(Functie[i]=='*')
		{
			Nou[j]=Functie[i];
		}

		if(Functie[i]=='x')
		{
			if(Functie[i+1]=='^')
				Nou[j]=Functie[i];
			else
				Nou[j]='1';
		}

		if(Functie[i]=='^')
		{
			Nou[j]=Functie[i];
			Coeficient[i]=Functie[i+1]-'0'-1;
			ajutor=Coeficient[i]+1;
			Functie[i+1]=(char)(((int)'0')+Coeficient[i]);
			j++;
			Nou[j]=Functie[i+1];
			j++;
			Nou[j]='*';
			j++;
			Nou[j]=(char)(((int)'0')+ajutor);
			i++;
		}
		j++;
	}

	//"Functia este : "<<endl;
	for(i=0;i<j-1;i++)
		printf("%c",Nou[i]);
       //	cout<<endl;
       printf("\n\n");
	system("PAUSE");

	return 0;
}



int Mathematics(char strin[])
{

    return 1;
}

