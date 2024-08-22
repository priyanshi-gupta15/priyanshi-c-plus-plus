for(i=2; i<=n; i++)
    {
        Prime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                Prime = 0;
                break;
            }
        }

        if(Prime==1)
        {
            sum += i;
        }
    }

