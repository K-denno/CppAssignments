#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define numOfCats 2


struct Student{
    int studId;
    char studName[10];
    int cat[numOfCats];
};
int main()
{
    int n;
    printf("Enter total number of students >> ");
    scanf("%d",&n);
    struct Student stud[n];
    for(int i=0;i<n;i++){
        printf("Enter Student details \n ID >> ");
        scanf("%d",&stud[i].studId);
        printf("Name >> ");
        scanf("%s",&stud[i].studName);
        getchar();
        for(int j=0;j<numOfCats;j++){
            printf("Enter Cat %d marks >> ",j+1);
            scanf("%d",&stud[i].cat[j]);
        }
    }
    printf("id        name        cat1        cat2");
    for(int i=0;i<n;i++){
        printf("\n[%d]      %s     %d      %d ",i+1,stud[i].studName,stud[i].cat[0],stud[i].cat[1]);
    }
    return 0;
}
