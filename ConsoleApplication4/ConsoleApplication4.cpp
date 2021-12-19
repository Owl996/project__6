// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string> 
using namespace std;

int main()
{
    string s1 = { "lc tr ab" };
    string s2 = { "it ab" };

    for (size_t i = 0; i < s1.size(); i++)
        for (size_t j = 0; j < s2.size(); j++)
            if (s1[i] == s2[j]) { cout << i << " "; break; }

    system("pause");
    return 0;
}