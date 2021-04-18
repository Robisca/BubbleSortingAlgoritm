/*
************************************************
This is an sorting algoritm and random vector  *       
          generator made by Robisca            *
Fell free to use this code for whatever reason *
                  you need to                  *
************************************************
*/
//This algoritm sort numbers with bubble sorting method


#include <iostream>
#include <vector>
#include <time.h>                                         //This is used for random seed generator
#include <stdlib.h>                                       //This is used for srand() and rand()


void clear()            //Just to make console look cleaner
{
    std::cout << "\n\n";
}

void showvector(std::vector <int> desortat)               //Function that show all vectors value 
{
    for (int i = 0; i < desortat.size(); i++)
    {
        std::cout << desortat[i] << " ";
    }
}

int main()
{
    srand(time(NULL));                                    //Random seed generator

    int n = rand() % 100;                                 //This is the size of the vector.Notice that bigger size determinate longer time to sort
    std::vector <int> desortat;

    for (int i = 0; i <= n; i++)                          //Make vector size n with random value in it
    {
        desortat.push_back(rand() % 5000);
    }
    showvector(desortat);
    clear();
    bool done = false;
    while (done == false)                                 //The algoritm that sorts vector
    {
        for (int i = 0; i < desortat.size() - 1; i++)
        {
            int x;
            if (desortat[i] > desortat[i + 1])
            {
                x = desortat[i + 1];
                desortat[i + 1] = desortat[i];
                desortat[i] = x;
            }
        }
        for (int i = 0; i < desortat.size() - 1; i++)
        {
            if (desortat[i] > desortat[i + 1])
            {
                done = true;
            }
            else
            {
                done = false;
            }
        }
    }
    showvector(desortat);
}