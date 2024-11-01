
#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter the rows and columns of the matrix\n");
    scanf("%d %d",&rows, &columns);
     int matrix[rows][columns];
    if(rows==columns)
    {
        printf("\nEnter the elements of the matrix\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }
        printf("\nMatrix\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                printf("%d  ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("Right Diagonal Matrix\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                if(i==j)
                {
                    printf("%d  ",matrix[i][j]);
                }
            }
        }
        printf("\nLeft Diagonal Matrix\n");
 
            for(int i=0;i<columns;i++)
            {
               printf("%d  ",matrix[i][columns - 1 - i]); 
            }
     
        
        
        
        
    }else{
        printf("It is not a square matrix\n");
    }
    return 0;
    
}
