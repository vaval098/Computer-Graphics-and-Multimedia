#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	float xmax,ymax,xmid,ymid;
	int tx,ty;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	bar3d(100,20,90,60,20,5);
	xmax=getmaxx();
	ymax=getmaxy();
	xmid=xmax/2;
	ymid=ymax/2;
	line(0,ymid,xmax,ymid);
	line(xmid,0,xmid,ymax);
	cout<<"translation "<<endl<<"factor"<<endl;
	cin>>tx>>ty;
	bar3d(100+tx,20+ty,90+tx,60+ty,20,5);
	getch();
}