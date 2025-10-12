#include <iostream>

#define log(x) std::cout << "printando valor: " << (x) << std::endl;

using namespace std;

int main(int argc, char *argv[])
{
    
    int n = argc;
    int nums[argc - 2] = {};
    int alvo = atoi(argv[n - 1]);

    for(int i = 1, pos = 0; i < n - 1; i++, pos++)
    {
        int valorInserirNoVetor = atoi(argv[i]);
        nums[pos] = valorInserirNoVetor;
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == alvo)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    
    return 0;
}