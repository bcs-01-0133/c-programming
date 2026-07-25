#include <stdio.h>
/*
name:stephen ngugi
adm:bcs-01-0133/2026
*/


int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

   

    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
        }
    }

    


    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        printf("Floor %d:\n", floor + 1);

        for (room = 0; room < 10; room++) {
            printf("Room %2d: ", room + 1);

            if (occupancy[floor][room] == 1) {
                printf("Occupied\n");
                occupied++;
            } else {
                printf("Vacant\n");
                vacant++;
            }
        }

        printf("Occupied Rooms: %d\n", occupied);
        printf("Vacant Rooms  : %d\n", vacant);
    }

    return 0;
}