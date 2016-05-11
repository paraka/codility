#include <algorithm>

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) 
{
    vector<vector<int>> parsums(4); 
    
    for_each(parsums.begin(), parsums.end(), [&S](vector<int>& x) { x.resize(S.size()); });
  
    for (unsigned i = 0; i < S.size(); ++i) 
    {
        auto t = [=](char c) -> int
        {
            switch (c)
            {
            case 'A':
                return 0;
            case 'C':
                return 1;
            case 'G':
                return 2;
            default:
                return 3;
            }
        };
        parsums[t(S[i])][i] = 1;
    }
 
    for_each(parsums.begin(), parsums.end(), [](vector<int>& x) { partial_sum(x.begin(), x.end(), x.begin()); });

    vector<int> result(P.size());
    for (unsigned i = 0; i < P.size(); ++i)
    {
        int type = 3;
        for (unsigned j = 0; j < 3; ++j)
        {
            auto left = P[i] > 0 ? parsums[j][P[i] - 1] : 0;
            auto right = parsums[j][Q[i]];
            if (right != left) 
            {
                type = j;
                break;
            }
        }
 
        result[i] = type + 1;
    }
}
