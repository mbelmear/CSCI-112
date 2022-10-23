typedef struct {
    char ID[15];
    char Title[50];
    char Days[15];
    char Time[20];
    char Seats[10];
    char Professor[50];
} Class;

int print(Class* classes);

int printclassbynum(Class* classes, int numClasses, char* options);

int printclassesbyday(Class* classes, int numClasses, char* options);

int printclassbyprof(Class* classes, int numClasses, char* options);
