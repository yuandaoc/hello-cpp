#include <iostream>

/*
 *简单主函数：
 *读取两个数，求他们的和
 */
int main()
{
    // std::cout << "Hello World!" << std::endl;

    // /* 初识输入输出 */
    // std::cout << "/*" << std::endl; // 合法 输出/*
    // std::cout << "*/" << std::endl; // 合法 输出*/
    // // std::cout << /* "*/" */ << std::endl; // 不合法
    // std::cout << /* "*/ "*/" /*" */ << std::endl; // 合法 输出*/

    // int v1 = 0, v2 = 0;
    // std::cout << "Enter two numbers:" << std::endl;
    // std::cin >> v1 >> v2;
    // std::cout << "The sum of " << v1
    //           << " and " << v2
    //           << " is " << v1 + v2 << std::endl;

    // int sum = 0;
    // for (int val = -100; val <= 100; ++val)
    //     sum += val;
    // std::cout << "Sum of -100 to 100 inclusive is "
    //           << sum << std::endl;

    /* 读取数量不定的输入数据 */
    int sum = 0, value = 0;
    // 读取数据直到遇到文件尾，计算所有读入的值的和
    // 当从键盘向程序输入数据时，可以通过键盘控制文件尾的输入，即输入文件结束符
    // 不同操作系统有不同的文件结束符，Windows系统中，文件结束符为Ctrl+Z，然后按enter，Linux系统中，文件结束符为Ctrl+D
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}