
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	float xmax,ymax,xmid,ymid;
	int sx,sy;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	bar3d(100,20,90,60,20,5);
	xmax=getmaxx();
	ymax=getmaxy();
	xmid=xmax/2;
	ymid=ymax/2;
	line(0,ymid,xmax,ymid);
	line(xmid,0,xmid,ymax);
	cout<<"scalling "<<endl<<"factor"<<endl;
	cin>>sx>>sy;
	bar3d((100*sx),(20*sy),(90*sx),(60*sy),20,5);

	getch();
}