#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RUNTIME_SECONDS 3000

void displayMenu() {
    printf("1. Di an bun\n");
    printf("2. Di an pho\n");
    printf("3. Di an buffet\n");
    printf("Chon mot trong cac lua chon sau:\n");
}

void init(){
    setvbuf(stdout,NULL,_IONBF,0);
    setvbuf(stdin ,NULL,_IONBF,0);
    setvbuf(stderr,NULL,_IONBF,0);
}

void intro(){
    printf("Hom nay em muốn ăn gi\n");
    printf("Em ăn gi cũng được.\n");
}

int main() {
    init();
    intro();
    int userChoice;
    int randomChoice;
    int count = 0;

    clock_t start_time = clock();
    double elapsed_time;
    

    while (count < 100) {
        srand(count);
        printf("Ngay %d: \n", count + 1);
        
        displayMenu();
        scanf("%d", &userChoice);

        randomChoice = rand() % 3 + 1;
        

        elapsed_time =  ((clock() - start_time));
        if (elapsed_time > MAX_RUNTIME_SECONDS) {
            printf("Anh khong the đua ra quyet đinh nhanh hơn a!!!\n");
            break;
        }

        switch (userChoice) {
            case 1:
                printf("Ban da chon di an bun\n");
                break;
            case 2:
                printf("Ban da chon di an pho\n");
                break;
            case 3:
                printf("Ban da chon di an buffet\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }

        if (userChoice == randomChoice) {
            printf("Anh hieu em the! Ngay mai minh Di an tiep nhe.\n");
        } else {
            printf("Anh khong hieu em gi het!\n");
            break;  
        }

        count++;
    }

    if (count == 100) {
        printf("Em co một mon qua danh cho anh!\n");
        system("/bin/cat flag.txt");
    }

    return 0;
}
