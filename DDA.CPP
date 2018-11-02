#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void DDA(int x0,int y0,int x1,int y1)
{
	float dx,dy,xi,yi,step;
	dx=abs(x1-x0);
	dy=abs(y1-y0);

	if(dx>dy)
		step=abs(dx);
	else
		step=abs(dy);
	xi=dx/step;
	yi=dy/step;
	for(int i=1;i<step;i++)
	{
		x0=x0+xi;
		y0=y0+yi;
		putpixel(x0,y0,BLUE);
	}
}
void main()
{
	clrscr();
	int gd=DETECT,gm=0,x0,y0,x1,y1;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	cout<<"\t"<<"Digital Differential Analyzer"<<endl;
	cout<<"enter first coordinates";
	cin>>x0>>y0;
	cout<<"enter second coordinates";
	cin>>x1>>y1;
	DDA(x0,y0,x1,y1);
	getch();
}