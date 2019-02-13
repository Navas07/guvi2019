{
    int year;

    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            
            if ( year%400 == 0)
                printf("yes", year);
            else
                printf("", year);
        }
        else
            printf("yes", year );
    }
    else
        printf("yes", year);
    
    return 0;
}
