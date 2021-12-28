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
            system("nmap -sC -sV -p- -vvv -O --script vuln $(ip route get 1.2.3.4 | awk '{print $7}')");
            getter(); 
        break;
        case 9 :
            printf("[+]-Bye Bye :)");
            exit(0);
        break;
    }
}
