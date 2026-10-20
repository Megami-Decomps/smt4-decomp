#include "common.h"

extern "C" {

int libc_strtollParse(void);

void libc_strtoll(void)
{
    libc_strtollParse();
}

} /* extern "C" */
