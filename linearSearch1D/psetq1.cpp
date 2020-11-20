bool linearSearch1D(int values[], int key, int s)

{
    for (int i=0; i<s; i++)
     {
         if(values[i]==key)
         return true;
     }

     return false;

}

