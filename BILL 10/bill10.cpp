void bubbleSort(int values[],int size)//Function name.
{
    for(int i=0;i<size;i++)//Loop which is executed size-1 times.
    {
        for(int j=i+1;j<size;j++)//Loop which is executed size-2 times.
        {
            if(values[j]<values[i])//Compares the elements in two subsequent positions,and if the condition is true,it is executed.
            {
                //Swapping.
                int temp=values[i];//Assigns the value stored in position i to a variable called temp.=>position i becomes empty.
                values[i]=values[j];//Assigns the value in position j to position i of the array.=>position j becomes empty.
                values[j]=temp;//Assigns the value stored in temp to position j.=>temp is left empty after swapping fully.
            }

        }
    }

}

