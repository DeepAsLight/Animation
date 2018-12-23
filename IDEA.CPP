#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd = DETECT, gm,i;
initgraph(&gd, &gm, "..\\bgi");
//------------------------------//introduction//-------------------------/
setbkcolor(GREEN);
line(0,249,638,249);
line(0,340,638,340);
delay(1000);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(1,250,"COMPUTER GRAPHICS");
delay(2000);
cleardevice();
setbkcolor(GREEN);
line(0,249,637,249);
line(0,340,637,340);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(200,250,"MINIONS");
delay(2000);
//--------------------------------end------------------------------------//
//--------------------------------story----------------------------------//
cleardevice();
setbkcolor(BROWN);
setcolor(CYAN);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(250,20,"Minions");
line(248,64,380,64);
line(248,67,380,67);
delay(500);
setcolor(YELLOW);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(110,80,"This is a comic story of three minions");
delay(2000);
setcolor(LIGHTGRAY);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(60,130,"Scene 1");
delay(500);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(60,150,"Two minions friends fighting in a funny way.");
delay(2000);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(60,200,"Scene 2");
delay(500);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(60,220,"The Boss minion chasing the employee minion.");
delay(2000);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(60,270,"Scene 3");
delay(500);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(60,290,"Minions celebrating together.");
delay(4000);
//---------------------------//CLOUDS-1//---------------------------------//
cleardevice();
setbkcolor(LIGHTBLUE);
setcolor(DARKGRAY);                  //grass
setfillstyle(SOLID_FILL,GREEN);
line(1,400,1,478);
line(1,478,638,478);
line(1,400,20,450);
line(20,450,40,380);
line(40,380,80,460);
line(80,460,100,400);
line(100,400,140,450);
line(140,450,160,390);
line(160,390,200,455);
line(200,455,250,400);
line(250,400,270,460);
line(270,460,310,400);
line(310,400,370,450);
line(370,450,410,390);
line(410,390,450,460);
line(450,460,500,400);
line(500,400,520,460);
line(520,460,590,400);
line(590,400,600,455);
line(600,455,638,400);
line(638,400,638,478);
floodfill(2,477,DARKGRAY);
setcolor(DARKGRAY);                   //circle;
setfillstyle(SOLID_FILL,YELLOW);
circle(590,40,40);
floodfill(590,40,DARKGRAY);
setcolor(DARKGRAY);                   //cloud 1
setfillstyle(SOLID_FILL,WHITE);
arc(60,90,40,175,50);
arc(128,80,30,140,40);
arc(175,80,5,140,25);
arc(65,75,190,320,55);
arc(145,75,220,360,55);
floodfill(61,75,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(110,80,2,5);
floodfill(111,79,DARKGRAY);
fillellipse(150,80,2,5);
floodfill(151,79,DARKGRAY);
setcolor(DARKGRAY);                   //cloud 2
setfillstyle(SOLID_FILL,WHITE);
arc(400,100,40,175,50);
arc(468,90,30,140,40);
arc(515,90,5,140,25);
arc(405,85,190,320,55);
arc(485,85,220,360,55);
floodfill(401,85,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);        //eyes
fillellipse(400,80,2,5);
floodfill(401,79,DARKGRAY);
fillellipse(440,80,2,5);
floodfill(441,79,DARKGRAY);
//---------------------------------//moving lips//----------------------//
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);               //mouth  1
floodfill(421,99,DARKGRAY);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
for(i=0;i<20;i++)
{
setfillstyle(SOLID_FILL,LIGHTBLUE);     //birds
bar(98+i,147,113+i,179);
arc(100+i,157,270,50,10);
arc(100+i,170,290,50,5);
delay(50);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(78+i,147,93+i,179);
arc(80+i,157,270,50,10);
arc(80+i,170,290,50,5);
delay(50);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(58+i,147,73+i,179);
arc(60+i,157,270,50,10);
arc(60+i,170,290,50,5);
delay(50);
}
//---------------------------------//moving lips//----------------------//
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(15,200,"Hey Ramesh....");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(10,200,270,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	              //mouth  1
floodfill(421,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(365,200,"Ya Suresh........");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(330,200,600,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(15,200,"How are you ?");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(10,200,270,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	              //mouth  1
floodfill(421,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);                    //mouth 2
floodfill(421,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(365,200,"I am fine.");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(330,200,600,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 1
fillellipse(130,100,9,2);
floodfill(131,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(112,90,148,110);
setfillstyle(SOLID_FILL,RED);           //mouth 2
fillellipse(130,100,9,4);
floodfill(131,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(15,200,"who is they???");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(10,200,270,300);
setcolor(DARKGRAY);
for(i=0;i<10;i++)
{
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,2);	              //mouth  1
floodfill(421,99,DARKGRAY);
delay(rand()%100);
setfillstyle(SOLID_FILL,WHITE);
bar(410,90,430,110);
setfillstyle(SOLID_FILL,RED);
fillellipse(420,100,9,4);               //mouth 2
floodfill(421,99,DARKGRAY);
}
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(365,200,"Look... MINIONS are here!");
delay(2000);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(330,200,628,300);








////////


setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(1,220,640,479);
//minion 2
//body
setfillstyle(SOLID_FILL,YELLOW);
arc(500,280,0,180,31);
line(469,280,469,365);
line(531,280,531,365);
arc(500,361,170,10,31);
floodfill(501,361,DARKGRAY);
//mouth
line(492,315,504,315);
arc(498,315,180,360,7);
//dress
setfillstyle(SOLID_FILL,BLUE);
line(485,340,513,340);         // -
line(485,342,485,353);         // |
line(513,342,513,353);         // |
line(485,353,469,353);         // |
line(513,353,531,353);         // |
line(485,340,469,330);         // \
line(485,343,469,333);         // \
line(513,340,531,330);         // /
line(513,343,531,333);         // /
//pocket
line(492,348,504,348);
arc(498,349,180,359,7);
arc(469,353,280,359,10);
arc(530,353,180,269,10);
floodfill(486,352,DARKGRAY);
//eye
setfillstyle(SOLID_FILL,CYAN);
line(485,288,469,288);
line(485,291,469,291);
arc(492,290,190,170,7);
floodfill(492,290,DARKGRAY);
line(515,288,531,288);
line(515,291,531,291);
arc(507,290,10,360,7);
floodfill(507,290,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
circle(492,290,5);
floodfill(492,290,DARKGRAY);
circle(507,290,5);
floodfill(507,290,DARKGRAY);
setfillstyle(SOLID_FILL,BLACK);
circle(492,290,2);
floodfill(492,290,DARKGRAY);
circle(507,290,2);
floodfill(507,290,DARKGRAY);
//hands
setfillstyle(SOLID_FILL,YELLOW);
line(469,315,450,360);              //left
line(469,325,457,360);
line(450,360,457,360);
floodfill(451,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(453,363,130,30,6);
floodfill(453,363,DARKGRAY);
setfillstyle(SOLID_FILL,YELLOW);
line(531,315,557,360);              //right
line(531,325,550,360);
line(550,360,557,360);
floodfill(555,359,DARKGRAY);
setfillstyle(SOLID_FILL,15);
arc(553,363,133,33,6);
floodfill(553,363,DARKGRAY);
//legs
setfillstyle(SOLID_FILL,BLUE);
rectangle(485,389,499,400);
floodfill(486,399,DARKGRAY);
rectangle(504,389,517,400);
floodfill(505,399,DARKGRAY);
//shoes
setfillstyle(SOLID_FILL,WHITE);
fillellipse(488,403,10,5);
floodfill(488,403,DARKGRAY);
fillellipse(508,403,10,5);
floodfill(508,403,DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(455,270,7,7);
floodfill(450,270,DARKGRAY);
delay(500);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
delay(500);
//minion 2 conver
for(i=0;i<2;i++)
{
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(492,315,504,315);
arc(498,315,180,360,4);
floodfill(495,315,DARKGRAY);
delay(500);
setfillstyle(SOLID_FILL,YELLOW);
bar(489,312,507,325);
setfillstyle(SOLID_FILL,YELLOW);
line(490,315,506,315);
arc(498,315,180,360,7);
floodfill(495,315,DARKGRAY);
delay(500);
}
//mini 2 lang
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(370,235,"Hi Ba tis");
outtextxy(370,245,"Julian");
delay(2000);
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(300,360,"HI this is");
outtextxy(320,380,"JULIAN");
delay(2000);
setcolor(DARKGRAY);
setfillstyle(SOLID_FILL,WHITE);
fillellipse(400,250,50,30);
floodfill(400,250,DARKGRAY);
setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(200,350,440,470);
