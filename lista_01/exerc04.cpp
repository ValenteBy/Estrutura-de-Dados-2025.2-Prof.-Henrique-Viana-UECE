#include <iostream>
#include <vector>

#define log(x) std::cout << "printando valor: " << (x) << std::endl;

using namespace std;

int main(int argc, char *argv[])
{

    int n = argc;

    int vetor[100000] = {};
    vector<int> nums;

    for(int i = 1; i < n; i++)
    {
        int x = atoi(argv[i]);
        nums.push_back(x);

        vetor[x]++;
        //log(vetor[x]);
    }
    int aws = -1;
    for(int i = 0; i < nums.size(); i++)
    {
        int val = vetor[nums[i]];

        if(1 == val)
        {
            aws = nums[i];
        }
    }

    cout << aws << endl;

    return 0;
}


// Exerc´ıcio: 4.
// (N´umero Unico) ´ Dado um vetor n˜ao vazio de n´umeros inteiros, cada elemento aparece
// duas vezes, exceto um. Encontre esse ´unico elemento.
// Exemplo 1. Entrada: nums = [2, 2, 1]. Sa´ıda: 1.
// Exemplo 2. Entrada: nums = [4, 1, 2, 1, 2]. Sa´ıda: 4.
// Exemplo 3. Entrada: nums = [1]. Sa´ıda: 1.