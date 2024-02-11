#include <iostream>
#include <thread>
#include <string>

void PrintString(const std::string& str)
{
    std::cout << str << std::endl;
}

int main()
{
    //スレッド1
    std::thread t1(PrintString, "thread1");
    t1.join();
    //スレッド２
    std::thread t2(PrintString, "thread2");
    t2.join();
    //スレッド３
    std::thread t3(PrintString, "thread3");
    t3.join();

    return 0;
}