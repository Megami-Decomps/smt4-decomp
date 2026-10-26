#include "common.h"

extern "C" {

extern void *g_btlAux;

const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);
void FUN_004f7b84(void *owner, const char *name);

/* Script command: copies its string argument into a zeroed 64-byte buffer and passes it on. */
u32 FUN_00335934(void)
{
    const char *source = scrGetArgString(0);
    char name[0x40] = {0};

    libc_strcpy(name, source);
    FUN_004f7b84(g_btlAux, name);
    return 1;
}

} /* extern "C" */
