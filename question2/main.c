#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOfStudents;
    printf("Enter number of students >> ");
    scanf("%d",&numberOfStudents);
    int studentId[numberOfStudents];
    char studentNames[numberOfStudents][numberOfStudents];
    int cat1[numberOfStudents];
    int cat2[numberOfStudents];
    for (int i=0;i<numberOfStudents;i++){
    printf("student %d details",i+1);
        printf("\nEnter Student id >> ");
        scanf("%d",&studentId[i]);
        printf("Enter Student name >> ");
        scanf("%s",&studentNames[i]);
        printf("Enter Cat 1 marks >> ");
        scanf("%d",&cat1[i]);
        printf("Enter Cat 2 marks >> ");
        scanf("%d",&cat2[i]);
    }
    printf("Display students\n");
    printf("id\t\tname\t\tcat1\tcat2\taverage\t\ttotal \n");
    for(int i=0;i<numberOfStudents;i++){
        printf("[%d]\t\t %s\t\t %d\t %d\t %d\t\t %d\n",studentId[i],studentNames[i],cat1[i],cat2[i],((cat1[i]+cat2[1])/2),cat1[i]+cat2[i]);
    }
    return 0;

}
