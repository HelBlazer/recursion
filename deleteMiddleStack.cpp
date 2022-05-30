#include <bits/stdc++.h>
using namespace std;

void delete_middle(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();
    delete_middle(s, k - 1);
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(8);
    s.push(7);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(0);
    s.push(9);
    s.push(-1);
    int sz = 0;
    while (!s.empty())
    {
        ++sz;
    }
    int k = (sz / 2) + 1;
    delete_middle(s, k);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}