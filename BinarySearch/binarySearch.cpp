bool binarySearch(int key,int values[] ,int s )
{

    int max=s-1;
    int min=0;
    int mid=(max+min)/2;

       while (min<=max&&values[mid]!=key)
    {


        if(key>values[mid])
        {
            min=mid+1;

        }
        if(key<values[mid])
        {
            max=mid-1;

        }
        mid = (max+min)/2;

    }
        if (key==values[mid])
        {
            return true;
        }
        else{
        return false;}
    }

