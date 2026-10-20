#include "common.h"

extern "C" {

int libc_strtoulParse(void);

void libc_strtoul(void)
{
    libc_strtoulParse();
}

} /* extern "C" */
