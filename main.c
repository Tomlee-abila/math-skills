#include <stdio.h>

int main(int argc, char *argv[]){
    if (argc > 2){
        printf("Only one argument is required after main.c\n");
        return 1;
    }else if (argc < 2){
        printf("Enter one argument after main.c\n");
        return 1;
    }
    
    const char *fileName = argv[1];

    FILE *file;

    file = fopen(fileName, "r");

    if (file == NULL){
        printf("Error opening file");
    }

    return 0;
}