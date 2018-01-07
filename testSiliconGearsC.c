

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define iArrayLenght 5

int8_t i8Array[iArrayLenght];
int8_t i8Result[2];

void find2GreatesElementsInArray(int8_t i8Array[], int iArrayLength, int8_t i8Result[])
{

	int8_t largest = -1;
	int8_t second_largest = -1;

    int index_of_largest = -1;
    int index_of_second_largest = -1;

    for (int j = 0; j < iArrayLength; j++)  // find the largest
    {
        if (i8Array[j] >= largest)
        {
            largest = i8Array[j];
            index_of_largest = j;
        }
    }

    for (int k = 0; k < iArrayLength; k++)  // find the second largest
    {
        if (k != index_of_largest) // skip over the largest one
        {
            if (i8Array[k] >= second_largest)
            {
                second_largest = i8Array[k];
                index_of_second_largest = k;
            }
        }
    }

    i8Result[0] = largest;
    i8Result[0] = second_largest;
    printf("Largest is %d at index %d\n", largest, index_of_largest);
    printf("Second largest is %d at index %d\n", second_largest, index_of_second_largest);
}

int main(void) {
	return EXIT_SUCCESS;
}
