#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    
    vector<int> vetor;

    string str;

    while(cin >> str)
    {
        if(str == "D")
        {
            if(!vetor.empty())
            {
                vetor.push_back(vetor.back() * 2);
            }
            else
            {
                continue;
            }
        }
        else if(str == "C")
        {
            if(!vetor.empty())
            {
                vetor.pop_back();
            }
            else
                continue;
        }
        else if(str == "+")
        {
            if(!vetor.empty())
            {
                int pos = vetor.size() - 1;
                vetor.push_back(vetor[pos] + vetor[pos - 1]);
            }
            else
                continue;
        }
        else
        {
            int v = stoi(str);
            vetor.push_back(v);
        }
    }

    int aws = 0;
    for(int i = 0; i < vetor.size(); i++)
    {
        aws += vetor[i];
    }

    cout << aws;

    return 0;
}