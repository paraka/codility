int solution(vector<int> &A) 
{
    static const int MAX = 1000000000;
    int pairs = 0, zeros_found = 0;
    for (unsigned int i=0; i<A.size(); ++i)
    {
        if (A.at(i) == 0) 
        {
            ++zeros_found;
        }
        else if (A.at(i) == 1)
        {
            pairs += zeros_found;
            if (pairs > MAX) return -1;
        }
    }
    
    return pairs;
}
