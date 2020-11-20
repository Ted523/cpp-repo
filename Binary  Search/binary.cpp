
bool binarySearch(int key,int values[],int s)
{


    int First=0;
    int Last=s-1;
    int mid=(First+Last)/2;
    //int array[mid];


    //for(int i=0;i<s;i++){
        //cout<<"\n Enter  a value to be searched in the array";
        //cin>>key;

        while(First<=Last)
        {


            if(key>values[mid])
            {
                First=mid+1;
            }
            else if(key<values[mid])
            {
               Last=mid-1;
            }

            mid=(First+Last)/2;

             if(key==values[mid])
            {
               return true;
            }
        }
            return  false;

            }





