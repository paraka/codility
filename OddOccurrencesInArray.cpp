
int solution(vector<int> &A) 
{
    int with_no_pair = 0;
    for (auto const &el : A) with_no_pair ^= el;
    return with_no_pair;
}
