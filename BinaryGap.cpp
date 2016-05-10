enum class Status
{
    LAST_ZERO = 0,
    LAST_ONE = 1,
    FIRST_TIME = 2
};
    
int solution(int N) 
{
    int max_found_gap = 0;
    int gap_in_loop = 0;
    Status state = Status::FIRST_TIME;
    int bitmask = 0x00000001;
    while (bitmask > 0)
    {
        if ((bitmask & N) != 0)
        {
            if(state != Status::LAST_ONE)
            {
                state = Status::LAST_ONE;
                if (gap_in_loop > max_found_gap) max_found_gap = gap_in_loop;
            }
            gap_in_loop = 0;
        }
        else 
        { 
            if(state != Status::FIRST_TIME)
            {
                state = Status::LAST_ZERO;
                ++gap_in_loop;
            }
        }
        bitmask = bitmask << 1;
    }
    return max_found_gap;
}
