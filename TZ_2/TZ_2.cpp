#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

list <char> solution(list <char> ls1, list <char> ls2, list <char> ls3) {
    list <char> ls4 = ls1;
    for (auto i = ls2.begin(); i != ls2.end(); i++)
    {
        for (auto j = ls4.begin(); j != ls4.end(); j++)
        {

            if (*i == *j)
            {
                auto buf = i;
                i--;
                ls2.erase(buf);
                break;
            }
        }
    }
    ls4.merge(ls2);

    for (auto i = ls3.begin(); i != ls3.end(); i++)
    {
        for (auto j = ls4.begin(); j != ls4.end(); j++)
        {

            if (*i == *j)
            {
                auto buf = i;
                i--;
                ls3.erase(buf);
                break;
            }
        }
    }

    for (auto i = ls3.begin(); i != ls3.end(); i++)
    {
        ls4.push_back(*i);
    }

    return ls4;
}

int main()
{
    list <char> ls1{ 'a', 'b', 'c', 'd', 'e' };
    list <char> ls2{ 'f', 'g', 'h', 'b', 'c' };
    list <char> ls3{ 'x', 'j', 'k', 'l', 'h' };
    list <char> ls4 = solution(ls1, ls2, ls3);
    for (auto i = ls4.begin();  i != ls4.end();  i++)
    {
        cout << *i << " ";
    }
}
