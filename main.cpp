#include <bits/stdc++.h>

int main()
{
    std::vector<bool> data(3);
    double stat;
    int heads = 0, tails = 0;
    std::cout << "Tossing a coin..." << std::endl;
    for(int i=0; i<3; i++) 
    {
        std::cout << "Round " << (i+1) << " ";
        stat = (double)rand()/RAND_MAX;
        if(stat<0.5) 
        {
            std::cout << "Heads" << std::endl;
            heads++;
        }
        else 
        {
            std::cout << "Tails" << std::endl;
            tails++;
        }
    }
    std::cout << "Heads: " << heads << ", Tails: " << tails << std::endl;

    return 0;
}