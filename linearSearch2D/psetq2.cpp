bool linearSearch2D(int key, int value[6][5], int rows, int cols)

{
    for (int i=0;i<rows;i++)
    for (int j=0;j<cols;j++)
    {

       if(value[i][j]==key)

            return true;

    }
    return false;
}
