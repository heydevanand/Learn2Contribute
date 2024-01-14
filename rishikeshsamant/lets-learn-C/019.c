/* Write a program that asks for the IP address in a human readable form and creates three substrings and print them. These substrings are created from parts 3, 2 and 1
of the last part of the IP address. These substrings should be created with the use of pointers or array indexing. If a given string doesn't have three dots, then the 
program should print the message(Error: not a valid address). Your program should also check if a given string consists of only digits and dots, and that thers are no
more than three digits in each block. 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char IPAddress[20];
    char IPAddressLast3[20];
    char IPAddressLast2[10];
    char IPAddressLast1[5];
    int part3Count = 0;
    int part2Count = 0;
    int part1Count = 0;
    int partsCount = 0;
    int actualCount = 0;
    int isError = 0;

    //input the IP Address
    scanf("%s",IPAddress);

    //iterate through each element of array
    for (i=0; i<strlen(IPAddress); i++)
    {
        char c = IPAddress[i];

        //check if character is digit or dot
        if (c=='.' || c>='0' && c<='9')
        {
            //if the character is dot
            if (c=='.')
            {
                if (actualCount>3)
                {
                    isError=1;
                    break;
                }
                
                partsCount++;

                // Store the last 3 parts after the first dot
                if (partsCount == 2)
                {
                    IPAddressLast3[part3Count] = c;
                    part3Count++;
                }

                // Store the last 2 parts after the second dot
                if (partsCount == 3)
                {
                    IPAddressLast3[part3Count] = c;
                    part3Count++;
                    IPAddressLast2[part2Count] = c;
                    part2Count++;
                }

                if (partsCount>3)
                {
                    isError=1;
                    break;
                } 

                actualCount = 0;
            }
            // Count the no of characters in each part
            else 
            {
                // Count the number of characters in each part
                if (partsCount == 1)
                {
                    IPAddressLast3[part3Count] = c;
                    part3Count++;
                }

                if (partsCount == 2)
                {
                    IPAddressLast3[part3Count] = c;
                    part3Count++;
                    IPAddressLast2[part2Count] = c;
                    part2Count++;
                }

                if (partsCount == 3)
                {
                    IPAddressLast3[part3Count] = c;
                    part3Count++;
                    IPAddressLast2[part2Count] = c;
                    part2Count++;
                    IPAddressLast1[part1Count] = c;
                    part1Count++;
                }

                actualCount++;

            }
        }
        else
        {
            //If the character is not a digit or dot, raise an error
            isError=1;
            break;
        }
    }

    //now we check error
    if (isError)
    {
        printf("Error: not a valid address.");
    }
    else
    {
         // Add null terminators to the arrays to make them valid strings
        IPAddressLast3[part3Count] = '\0';
        IPAddressLast2[part2Count] = '\0';
        IPAddressLast1[part1Count] = '\0';

        // Print the last 3, last 2, and last 1 parts of the IP address
        printf("Last 3 parts: %s\n", IPAddressLast3);
        printf("Last 2 parts: %s\n", IPAddressLast2);
        printf("Last 1 part: %s\n", IPAddressLast1);
    }
    
    return 0;
}