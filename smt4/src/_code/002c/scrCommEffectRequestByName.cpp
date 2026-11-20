#include "common.h"

extern "C" {

extern void *g_btlAux; /* the battle auxiliary block */

const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);
void effectRequestByName(void *owner, const char *effect);

/* Script command: requests the effect named by its string argument (copied into a zeroed 64-byte
 * name buffer) on the battle auxiliary block. */
u32 scrCommEffectRequestByName(void)
{
    const char *source = scrGetArgString(0);
    char name[0x40] = {0};

    libc_strcpy(name, source);
    effectRequestByName(g_btlAux, name);
    return 1;
}

} /* extern "C" */
