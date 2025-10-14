#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    
    vector<int> nums;
    vector<int> repetitos;

    int anterior = atoi(argv[1]);
    bool num_repetido = 0;

    for(int i = 1; i < argc; i++)
    {
        int v = atoi(argv[i]);
        nums.push_back(v);

    }   

    sort(nums.begin(), nums.end());

    for(int i = 1; i < nums.size(); i++)
    {
        int v = nums[i];
        if(v == anterior)
        {
            num_repetido = 1;
        }

        anterior = v;
    }

    cout << num_repetido << endl;

    return 0;
}