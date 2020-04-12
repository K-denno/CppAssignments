#include <stdio.h>
#include <stdlib.h>


int main()
{
    char name[5][25];
    int n;
    //i has been initialised but no value has been assigned t it in a small program this may not be a being problem but in
    // a large program this would be wasted ram memory space as when the loops using i finish running this memory is not reassigned
    printf("Enter total number of students >> ");
    scanf("%d",&n);
    printf("Enter name >> ");
    for(int i=0;i<n;i++){
        printf("\nName [%d]: ", i+1);
        getchar();
        scanf("%[^\n]s",name[i]);
    };



    return 0;

}
