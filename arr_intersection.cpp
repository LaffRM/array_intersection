#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> arr_intersection(const std::vector<int> arr_A, const std::vector<int> arr_B)
{
        std::unordered_map<int,int> hash_map;
        std::vector<int> arr_result;

        for(int i = 0; i < (int)arr_A.size(); i++)
        {
            hash_map[arr_A[i]]++;
        }

        for (int i = 0; i < (int)arr_B.size(); i++)
        {
            if(hash_map[arr_B[i]] > 0)
            {
                arr_result.push_back(arr_B[i]);
                hash_map[arr_B[i]]--;
            }
        }

        return arr_result;
}

int main()
{

    std::vector<int> A = {1, 2, 4, 2, 44, 23, 22, 3, 7, 76, 4, 7};
    std::vector<int> B = {3, 6, 8, 67, 22, 3, 7, 5, 7, 76, 4, 56, 56, 77};

    std::vector<int> res = arr_intersection(A, B);
    for(int i = 0; i < (int)res.size(); i++)
    {
        std::cout << res[i] << " ";
    }

    return 0;
}
