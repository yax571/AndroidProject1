#include <stdio.h>
#include <string>
#include <android/log.h>

#include <unistd.h>

#include <signal.h>
#include "debugbreak.h"
#include <string.h>
int main(int argc, char **argv)
{
	//debug_break();
	raise(SIGTRAP);
	sleep(3);
	//__android_log_assert("", "int3", "");
	//__builtin_trap();
	std::string aa = "Hello, World!\n";
	char *sub = strstr((char*)aa.c_str(), "World");
	char tmp[_POSIX_PATH_MAX] = { 0 };
	strcpy(tmp, sub);
	printf("%s",sub);	//Set a breakpoint here or press F10 to step into.
	
	return 0;
}
