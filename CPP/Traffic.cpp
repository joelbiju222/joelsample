
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>

// Driver Code
void main()
{
	clrscr();
	int gd = DETECT, gm, midx, midy;


	initgraph(&gd, &gm, "C:\\TC\\BGI");

	midx = getmaxx() / 2;
	midy = getmaxy() / 2;


	setcolor(CYAN);

	
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	outtextxy(midx, midy - 10, "TRAFFIC LIGHT SIMULATION");
	outtextxy(midx, midy + 10, "PRESS ANY KEY TO START");
	getch();
	cleardevice();
	setcolor(WHITE);
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);

	
	rectangle(midx - 30, midy - 80, midx + 30, midy + 80);


	circle(midx, midy - 50, 22);
	setfillstyle(SOLID_FILL, RED);
	floodfill(midx, midy - 50, 22);
	setcolor(BLUE);


	outtextxy(midx, midy - 50, "STOP");

	
	delay(2000);
	graphdefaults();
	cleardevice();

	setcolor(WHITE);

	rectangle(midx - 30, midy - 80,
			midx + 30, midy + 80);


	circle(midx, midy - 50, 22);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(midx, midy, WHITE);
	setcolor(BLUE);

	// Setting inner text to ready
	outtextxy(midx - 18, midy - 3, "READY");
	delay(2000);
	cleardevice();

	setcolor(WHITE);


	rectangle(midx - 30, midy - 80,
			midx + 30, midy + 80);


	circle(midx, midy + 50, 22);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(midx, midy + 50, WHITE);
	setcolor(BLUE);

	
	outtextxy(midx - 7, midy + 48, "GO");
	setcolor(RED);
	settextstyle(TRIPLEX_FONT,
				HORIZ_DIR, 4);

	outtextxy(midx - 150, midy + 100,
			"Brrrmmm");

	getch();
}
