#include <stdio.h>
#include <string.h>

struct  Student {
    char name[50];
    int age;
    float marks;
    
};
int main() {
    struct Student s1;
    strcpy(s1.name, "Aditya Satyam");
    s1.age = 19;
    s1.marks = 100;

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
};
int main() {
    struct Student s2;
    strcpy(s2.name, "Risabh");
    s2.age = 19;
    s2.marks = 23;

    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
};
int main() {
    struct Student s2;
    strcpy(s3.name, "Arahan");
    s3.age = 18;
    s3.marks = 100;

    printf("Name: %s\n", s3.name);
    printf("Age: %d\n", s3.age);
    printf("Marks: %.2f\n", s3.marks);

    return 0;
};