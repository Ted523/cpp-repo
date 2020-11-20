    bool recursiveBinarySearch(int key, int values[],int firstIndex, int lastIndex)//function definition
    {
        int midIndex=(firstIndex+lastIndex)/2;//innitialization of midIndex



        if(firstIndex<=lastIndex)//base statement
        {
            if (values[midIndex]==key)

            return true;

            if (values[midIndex]<key)
            return recursiveBinarySearch(key, values, midIndex+1, lastIndex);

            if (values[midIndex]>key)

            return recursiveBinarySearch(key, values, firstIndex, midIndex-1);

        }
        if (firstIndex>lastIndex)

        return false;
    }
