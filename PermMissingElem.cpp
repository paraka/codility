#include <numeric>

int solution(vector<int> &A) 
{
    auto N = A.size() + 1;
    auto sum_N = (N * (N+1)) / 2;
    auto sum_A = accumulate(A.begin(), A.end(), 0);
    
    return (sum_N - sum_A);
}
