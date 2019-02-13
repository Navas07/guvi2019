{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
           
            if ( year%400 == 0)
                printf("yes", year);
            else
                printf("no", year);
        }
        else
            printf("yes", year );
    }
    else
        printf("%d is not a leap year.", year);
    
    return 0;
}
