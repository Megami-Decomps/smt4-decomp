#include "common.h"

extern "C" {

void libc_strtokR(void);

/* Forwards to libc_strtokR. */
void libc_strtok(void)
{
    libc_strtokR();
}

} /* extern "C" */
