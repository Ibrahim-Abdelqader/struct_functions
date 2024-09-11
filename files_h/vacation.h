typedef struct {
    int Id;
    int totalLeave;
    int leaveTaken;
}app;
void getInput(app*,int *n);
void canTake(app*,int *n);
void printList(app*,int *n);