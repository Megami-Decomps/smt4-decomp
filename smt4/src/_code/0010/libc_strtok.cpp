#include "common.h"

extern "C" {

int libc_strtokR(void);

void libc_strtok(void)
{
    libc_strtokR();
}

} /* extern "C" */
