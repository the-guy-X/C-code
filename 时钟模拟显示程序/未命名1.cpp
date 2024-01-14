#include<stdio.h>
#include<time.h>
#include<windows.h>
main()
{
	while (1)
	{
		time_t now;
		time(&now);
		struct tm* nowtime = localtime(&now);
		printf("%02d:%02d:%02d\r", nowtime->tm_hour, nowtime->tm_min, nowtime->tm_sec);
		fflush(stdout);
		Sleep(1000);//停止当前线程1000毫秒;
	}
}
