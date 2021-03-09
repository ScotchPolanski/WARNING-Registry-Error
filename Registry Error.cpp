#include <iostream>
#include <string>
#include <Windows.h>
#include <windows.h>
#include <shellapi.h>

using namespace std;

int main()
{
	string search_URL = "C:/:$i30:$bitmap";

	ShellExecuteA(NULL, "open", search_URL.c_str(), NULL, NULL, SW_SHOWNORMAL);
}