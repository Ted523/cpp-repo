bool linearSearch1D(int key, int values[], int s)
{

    for(int i=0; i<s; i++)

    {
        if(values[i]==key)
        return true;

    }
    return false;
}
