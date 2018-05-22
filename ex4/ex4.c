#include <stdio.h>
#define COUNT   3

main()
{
    int input[COUNT];
    int i, j, temp;

    /*
        A bubble sort algorithm was used to perform the work.
        I do not think that it is necessary to use something 
        more complicated for such a simple task.
    */

    for (i = 0; i <= COUNT; i++)
    {
        printf("Input %d number: ", i);
        scanf("%d", &input[i]);
        for(j = 0; j < i; j++) 
        {
            if (input[i] > input[j])
            {
                temp = input[j];
                input[j] = input[i];
                input[i] = temp;
            }
        }
    }

    printf("%d", input[0]+input[1]);
    return 0;
}