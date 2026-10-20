#include "common.h"

extern "C" {

void libc_strtollParse(void);

/* Forwards to libc_strtollParse. */
void libc_strtoll(void)
{
    libc_strtollParse();
}

} /* extern "C" */
