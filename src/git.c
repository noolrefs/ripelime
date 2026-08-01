#include <stdlib.h>
#include <stdio.h>
#include <threads.h>
#include "git.h"


int main(){
    send_data();
}

Result clone(Url url){
    char command[600];
    snprintf(command, sizeof(command), "git clone %s", url);
    system(command);
}

Result send_data(){
    system("git add . && git commit -m added_clone_and_push && git push");
}