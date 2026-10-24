#include "common.h"

extern "C" {

extern void *DAT_00435d18;

const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);
void FUN_003db258(void *owner, const char *name);

/* Script command: copies its string argument into a zeroed 64-byte buffer and passes it on. */
u32 FUN_002cfd0c(void)
{
    const char *source = scrGetArgString(0);
    char name[0x40] = {0};

    libc_strcpy(name, source);
    FUN_003db258(DAT_00435d18, name);
    return 1;
}

} /* extern "C" */
