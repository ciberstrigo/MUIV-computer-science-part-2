#include <stdio.h>
#include <time.h>

main()
{
    
    int Y;
    int M;
    int D;

    struct tm t;

    time_t ttime;
    time_t unixepoch; 
    time_t utcepoch;

    /* 
        Input data 
    */

    printf("Input Y: ");
    scanf("%d", &Y);

    if( Y <= 1970 && Y >= 2100 )
    {
        /* 
            If the number is specified in the wrong range, 
            the program will end with an error. 
        */
        printf("Wrong input.");
        return 1;
    }

    printf("Input M: ");
    scanf("%d", &M);

    if( M <= 1 && M >= 12 )
    {
        /*
            Same thing.
        */
        printf("Wrong input.");
        return 1;
    }

    printf("Input D: ");
    scanf("%d", &D);

    if( D <= 1 && D >= 31 )
    {
        /*
            Same thing.
        */
        printf("Wrong input.");
        return 1;
    }
    /* 
        In the UNIX system, January 1, 1970 is taken as 0. 
        January 1, 1970 aka UNIX Epoch time.
    */
    unixepoch = 0;
    /*
        Convert the time to the UTC format.
    */
    utcepoch = mktime(gmtime(&unixepoch));
    /*
        Write the data into the structure. 
        Correct the values, according to the condition 
        of the exercise.
    */
    t.tm_year = Y - 1900;
    t.tm_mon = M - 1;
    t.tm_mday = D;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;
    t.tm_isdst = 0;


    /*
        Convert "struct tm" to "time_t" 
    */
    ttime = mktime(&t);

    /*
        Write the difference in time.
    */
    printf("%0.0lf\n", difftime(ttime, utcepoch));

    return 0;
}