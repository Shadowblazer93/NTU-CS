#include <stdio.h>
#define INIT_VALUE 1000

typedef struct {
   int id;                   /* staff identifier */
   int totalLeave;    /* the total number of days of leave allowed */
   int leaveTaken;   /* the number of days of leave taken so far */
} leaveRecord;

int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void getInput(leaveRecord list[], int *n);
void printList(leaveRecord list[], int n);

int main() {
   leaveRecord listRec[10];
   int len;
   int id, leave, canTake=INIT_VALUE;
   int choice;
    
   printf("Select one of the following options: \n");
   printf("1: getInput()\n");      
   printf("2: printList()\n");
   printf("3: mayTakeLeave()\n");
   printf("4: exit()\n");  
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:   
            getInput(listRec, &len);
            printList(listRec, len);
           break;
         case 2:   
            printList(listRec, len);
            break;
         case 3:   
            printf("Please input id, leave to be taken: \n");
            scanf("%d %d", &id, &leave);
            canTake = mayTakeLeave(listRec, id, leave, len);
            if (canTake == 1)
               printf("The staff %d can take leave\n", id);
            else if (canTake == 0)
               printf("The staff %d cannot take leave\n", id);  
            else if (canTake == -1)
               printf("The staff %d is not in the list\n", id);  
            else
               printf("Error!");
            break;      
      }
   } while (choice < 4);     
   return 0;
}

void printList(leaveRecord list[], int n)
{
    int p;
    printf("The staff list:\n");
    for (p = 0; p < n; p++) {
        printf ("id = %d, totalleave = %d, leave taken = %d\n",
            list[p].id, list[p].totalLeave, list[p].leaveTaken);
    }
}

void getInput(leaveRecord list[], int *n) {
    printf("Enter the number of staff records:\n");
    scanf("%d",n);
    
    for (int i=0;i<*n;i++) {
        printf("Enter id, totalleave, leavetaken:\n");
        scanf("%d %d %d",&list[i].id,&list[i].totalLeave,&list[i].leaveTaken);
    }
}

int mayTakeLeave(leaveRecord list[], int id, int leave, int n) {
// It returns 1 if a leave application for leave days is approved.
// Staff member with identifier id is applying for leave days of leave.
// n is the number of staff in list.
// Approval will be given if the leave taken so far plus the number of days
// applied for is less than or equal to his total number of leave days allowed.
// If approval is not given, it returns 0. It will return ‐1 if no one in list has identifier id.

    int i=0;
    while (list[i].id!=id) {
        if (i>=n) return -1;
        i++;
    };

    return (list[i].leaveTaken+leave<=list[i].totalLeave);
    
}