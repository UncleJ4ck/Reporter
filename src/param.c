#include "../include/reporter.h"

int choice;

int param(void){
    // checking the permissions 
    uid_t uid=getuid(), euid=geteuid();
    if (uid != 0 || uid != euid) {
        printf("\n[!] This script must be run as root\n");
        exit (0);
    }
    // getting the user choise 
    printf("\n\nMenu :\n\n1) Process Informartions\n2) Storage Informations\n3) Memory Utilization\n4) Network Monitoring\n5) Machine Informations\n6) System Hardware\n7) Disk Partition\n8) Vulnerability assessment\n9) Exit\n\n>> ");
    scanf("%i" , &choice);
    if (choice < 1 || choice > 9) {
        printf("[!]-Invalid");
        param();
    } else {
        return choice;
    }
}





