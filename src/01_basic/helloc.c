#include <stdio.h> // 预编译指令，包含标准头文件

int main() {  //主函数的函数头，全局惟一

	printf("hello c \n"); //标准库函数，在输出设备（一般为屏幕）上输出一行文本函数调用，需要了解该函数原型，即函数如何使用的细节信息；printf 函数原型位于"stdio.h"中，故需包含该头文件双引号内为字符串内容；‘\n’为转义字符，表示换行分号表示语句结束

	return 0; // 函数结束执行，程序退出
} //函数体，花括号内为语句序列

