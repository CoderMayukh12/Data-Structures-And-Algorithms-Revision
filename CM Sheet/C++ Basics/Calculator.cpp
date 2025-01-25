#include <bits/stdc++.h>
using namespace std;
bool isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '/' || ch == '*';
}
int tell(char ch)
{
    if (ch == '+')
        return 1;
    else if (ch == '-')
        return 2;
    else if (ch == '*')
        return 3;
    else
        return 4;
}
int Val(int A, int B, int op)
{
    if (op == 1)
        return A + B;
    else if (op == 2)
        return A - B;
    else if (op == 3)
        return A * B;
    else
        return A / B;
}

int convert(string a)
{
    int mul = 1;
    int sum = 0;
    int i = a.size() - 1;
    while (i >= 0)
    {
        int num = a[i] - '0';
        sum += mul * num;
        mul *= 10;
        i--;
    }
    return sum;
}
void calculator(string str)
{
    string a, b;
    int op;
    string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (!isOperator(str[i]))
            temp += str[i];
        else
            op = tell(str[i]), a = temp, temp = "";
    }
    b = temp;
    int A, B;
    A = convert(a), B = convert(b);
    cout << Val(A, B, op) << endl;
    ;
}
int main()
{
    string str;
    cin >> str;
    calculator(str);
    return 0;
}