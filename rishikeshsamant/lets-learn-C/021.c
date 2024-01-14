/* Create a three dimensional array to represent three buildings each with 15 floor and each floor with 20 rooms for counting no of guests.*/

#include <stdio.h>
int main()
{
    int guest[3][15][20];
    int building, floor, room;
    for (building = 0; building<3; building++)
    {
        for (floor = 0; floor<15; floor++)
        {
            for (room = 0; room<20; room++)
            {
                guest[building][floor][room] = 0;
            }
        }
    }
    return 0;
}