#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void circle(int x,int y,int xc,int yc)
{
	putpixel(x+xc,y+yc,RED);
	putpixel(y+xc,x+yc,RED);
	putpixel(y+xc,-x+yc,RED);
	putpixel(-y+xc,x+yc,RED);
	putpixel(-y+xc,-x+yc,RED);
	putpixel(x+xc,-y+yc,RED);
	putpixel(-x+xc,y+yc,RED);
	putpixel(-x+xc,-y+yc,RED);
}
void mid(int r,int xc,int yc)
{
	int p,x,y;
	x=0;  y=r;
	p=1-r;
	while(x<=y)
	{
		if(p<0)
		{
			x=x+1;
			p=p+(2*x)+3;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+(2*x)-(2*y)+5;
		}
		circle(x,y,xc,yc);
	}
}
void main()
{
	clrscr();
	int gd=DETECT,gm,r,xc,yc;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cout<<"\t\t"<<"Mid Point Circle Drawing"<<endl;
	cout<<"enter radius";
	cin>>r;
	cout<<"enter coordinates";
	cin>>xc>>yc;
	mid(r,xc,yc);
	getch();
}
