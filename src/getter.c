#include "../include/reporter.h"


void getter() {
    struct utsname detect;
    uname(&detect);
    
    int choice = param();
    printf("\n\n");
        switch(choice) {
        case 1:
            system("ps aux\n");
            getter();
        break;
        case 2 :
            system("df -h");
            getter(); 
        break;
        case 3 :
            system("free");
            getter(); 
        break;
        case 4 :
            system("apt-get install bmon");
            system("bmon");
            getter(); 
        break;
        case 5 :
            printf("System name - %s \n", detect.sysname);
            printf("Username    - %s \n", detect.nodename);
            printf("Release     - %s \n", detect.release);
            printf("Version     - %s \n", detect.version);
            printf("Machine     - %s \n", detect.machine);
            param(); 
        break;
        case 6 :
            system("lshw");
            getter(); 
        break;
        case 7 :
            system("fdisk -l");
            getter(); 
        break;
        case 8 :
            system("wget https://raw.githubusercontent.com/mzet-/linux-exploit-suggester/master/linux-exploit-suggester.sh -O les.sh");
            getter(); 
        break;
        case 9 :
            printf("[+]-Bye Bye :)");
            exit(0);
        break;
    }
}
