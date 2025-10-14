#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    string str;
    cin >> str;

    stack<char> pilha;
    // queue<int>  check_Value;

    int check_Value[3] = {};

    for(char caractre : str)
    {
        pilha.push(caractre);
    }

    while(!pilha.empty())
    {
        char c = pilha.top();
        if(c == ']' || c == '}' || c == ')')
        {
            
        }
    }

    return 0;
}