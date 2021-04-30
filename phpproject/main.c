#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curl/curl.h>
#include "appdev.h"

int main(int argc, char* argv[]) {
    rock r;
    printf("application developers rock!\n");
    printf("rockers name: ");
    scanf_s("%s", r.rname, (unsigned)_countof(r.rname));
    r.max = rand() % 50 + 51;
    r.min = rand() % 50 + 1;
    send_data(r);
    printf("rock roll \n");
   

    
    return 0;
}