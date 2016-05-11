int solution(vector<int> &A) 
{
    auto size = A.size();

    if (size == 2) return 0;
    
    //initialize the current minimum average of the first two slots.
    auto min_avg = (A.at(0) + A.at(1)) / 2.0;
    int idx = 0;
    for (unsigned i = 2; i < size; ++i)
    {
        auto aux1 = (A.at(i - 1) + A.at(i)) / 2.0;
        auto aux2 = (A.at(i - 2) + A.at(i - 1) + A.at(i)) / 3.0;
        
        if (aux1 < min_avg)
        {
            idx = i - 1;
            min_avg = aux1;
        }
        if (aux2 < min_avg)
        {
            idx = i - 2;
            min_avg = aux2;
        }
    }
    
    return idx;
}
