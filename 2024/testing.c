#include <stdio.h>
#include <string.h>

// Struct is a collection which represents an Entity(Object).
// Each property in struct is called attribute.
struct Person {
    // Persons name
    char name[100];

    // Person's age
    int age;

    // Persons Gender (Either M for Male or F for Female)
    char gender;
};

void printPerson(struct Person person);
struct Person scanPerson();

int main() {
    struct Person randomPerson;

    int loopCount = 0;
    while(loopCount < 1) {
        randomPerson = scanPerson();
        printPerson(randomPerson); 
        loopCount++;
    }
     
    return 0;
}

void printPerson(struct Person person){
    printf("\n My Name is %s", person.name);
    printf("\n My Age is %d", person.age);
    printf("\n My Gender is %c", person.gender);
    printf("\n");
}

struct Person scanPerson() {

    struct Person person;

    printf("Person's Name: ");
    // TODO: solve this when it is encounter a \n char
    fgets(person.name, 100, stdin); 

    printf("Person's Age: ");
    scanf("%d", &person.age);
    
    printf("Person's Gender:");
    scanf(" %c", &person.gender);
    return person;
}
