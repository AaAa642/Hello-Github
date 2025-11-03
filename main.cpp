#include <graphics.h>
#include "timer.h"


int main()
{
	bool running = 1;
	initgraph(1280, 720, EX_SHOWCONSOLE);

	while (running)
	{

		

		BeginBatchDraw();


		cleardevice();


		FlushBatchDraw();
	}

	EndBatchDraw();
	return 0;
}