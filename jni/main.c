#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "proc_inject.h"


int main(int argc, char *argv[])
{
    int c = 0;
    if(argc != 3){
        printf("Usage:%s -p pid\n", argv[0]);
        return 0;
    }

    while((c = getopt(argc, argv, "p:")) != -1) {
      switch(c) {
        case 'p': {
            printf("[+] start inject %s\n", optarg);
			proc_inject(atoi(optarg));
            break;
        }
        case '?': {
            printf("Usage:%s -p pid\n", argv[0]);
            break;
        }
      }
    }
    
    return 0;
}

