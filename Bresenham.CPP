

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void blda(int x0,int y0,int x1,int y1)
{
	int dx,dy,p,x,y;
	dx=x1-x0;
	dy=y1-y0;
	x=x0;  y=y0;
	p=(2*dy)-dx;

	while(x<x1)
	{
		if(p>=0)
		{
			putpixel(x,y,RED);
			x=x+1;
			y=y+1;
			p=p+(2*dy)-(2*dx);
		}
		else
		{
			putpixel(x,y,RED);
			x=x+1;
			p=p+(2*dy);
		}
	}
}
void main()
{
	clrscr();
	int gd=DETECT,gm=0,x0,y0,x1,y1;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	cout<<"\t\t"<<"Bresanham Line Drawing Algorithm"<<endl;
	cout<<"enter first co-ordinates";
	cin>>x0>>y0;
	cout<<"enter second co-ordinates";
	cin>>x1>>y1;
	blda(x0,y0,x1,y1);
	getch();
}