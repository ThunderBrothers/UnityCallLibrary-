#include "pch.h"
#include "UnityCppInterop.h"

/// <summary>
/// 无返回值类型
/// 打印 你好
/// </summary>
void SayHello() {
	std::cout << "你好!" << std::endl;
}

/// <summary>
/// 返回简单值类型
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns> 返回a+b的值 </returns>
int Add(int a, int b) {
	return a + b;
}