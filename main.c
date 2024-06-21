#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char c;
    int width = 10;
    int height = 10;
    int x,y = 0;
    FILE *f = fopen("input.txt","r");
    if(f == NULL){
        perror("main");
        exit(EXIT_FAILURE);
    }
    else{
        while((c = fgetc(f)) != EOF){
            switch (c){
                case '0':
                    printf(" ");
                    break;
                case '1':
                    printf(".");
                    break;
                case '2':
                    printf(":");
                    break;
                case '3':
                    printf("l");
                    break;
                case '4':
                    printf("/");
                    break;
                case '5':
                    printf("c");
                    break;
                case '6':
                    printf("a");
                    break;
                case '7':
                    printf("d");
                    break;
                case '8':
                    printf("8");
                    break;
                case '9':
                    printf("@");
                    break;
                case '\n':
                    break;
            };
            if(x == width){
                printf("\n");
                y++;
                x = 0;
            }
            else{
                x++;
            }
        }
    }


}