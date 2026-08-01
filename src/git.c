#include <stdlib.h>
#include <stdio.h>
#include <threads.h>
#include "git.h"


int main(){
}

Result clone(Url url){
    char command[600];
    snprintf(command, sizeof(command), "git clone %s", url);
    system(command);
}

Result send_data(){
    system("git add . && git commit -m 0 && git push");
}

Result update_data(){
    system("git fetch origin main && git reset --hard origin/main");
}