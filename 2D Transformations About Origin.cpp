#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void rotation(float x1,float y1,float x2,float y2,float x3,float y3)
{
	float t;
	cout<<"\t\t Rotation"<<"\n";
	cout<<"Enter angle of Rotation"<<endl;
	cin>>t;
	t=t*(3.14/180);
	x1=x1*cos(t)-y1*sin(t);
	y1=x1*sin(t)+y1*cos(t);
	x2=x2*cos(t)-y2*sin(t);
	y2=x2*sin(t)+y2*cos(t);
	x3=x3*cos(t)-y3*sin(t);
	y3=x3*sin(t)+y3*cos(t);

	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
void scaling(float x1,float y1,float x2,float y2,float x3,float y3)
{
	int sx,sy;
	cout<<"\t\t Scaling"<<"\n";
	cout<<"Enter co-ordinates for Scaling"<<endl;
	cin>>sx>>sy;
	x1=x1*sx;
	y1=y1*sy;
	x2=x2*sx;
	y2=y2*sy;
	x3=x3*sx;
	y3=y3*sy;

	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
void translation(float x1,float y1,float x2,float y2,float x3,float y3)
{
	int tx,ty;
	cout<<"\t\t Translation"<<"\n";
	cout<<"Enter co-ordinates for Translation"<<endl;
	cin>>tx>>ty;
	x1=x1+tx;
	y1=y1+ty;
	x2=x2+tx;
	y2=y2+ty;
	x3=x3+tx;
	y3=y3+ty;

	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
void main(){
	clrscr();
	int gd=DETECT,gm ;
	float x1,x2,y1,y2,x3,y3;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cout<<"\t\t"<<"Transformation"<<"\n\n";
	x1=200;
	y1=200;
	x2=250;
	y2=150;
	x3=300;
	y3=200;
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);

	int ch;
	cout<<"Enter Choice: "<<"\n"<<" 1: Rotation"<<"\n"<<" 2: Translation"<<"\n"<<" 3: Scaling"<<endl;
	cin>>ch;
	switch(ch)	{
		case 1:
			rotation(x1,y1,x2,y2,x3,y3);
			break;
		case 2:
			translation(x1,y1,x2,y2,x3,y3);
			break;
		case 3:
			scaling(x1,y1,x2,y2,x3,y3);
			break;
	}
	getch();
}

