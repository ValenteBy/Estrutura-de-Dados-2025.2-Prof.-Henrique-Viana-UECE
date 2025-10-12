#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{

    int n = argc;
    int nums[n] = {};

    for(int i = 1; i < n; i++)
    {
        int posDoVetor = atoi(argv[i]);
        nums[posDoVetor]++;
    }

    int valorFaltante = -1;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == 0)
        {
            valorFaltante = i;
        }
        cout << nums[i] << endl;

    }

    cout << valorFaltante << endl;
    
    return 0;
}