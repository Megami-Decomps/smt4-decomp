/* NON_MATCHING: retail zeroes the 0x44-byte name buffer with 17 inline word stores after the argument lookup; armcc emits a __aeabi_memclr4 call for the zero-initialised char array. */
#include "common.h"

extern "C" {

char *libc_strcpy(char *dest, const char *src);
void FUN_004f7b84(u32 btlAux, const char *name);
const char *scrGetArgString(u32 index);

extern u32 g_btlAux; /* 0x573808 */

/* Script command: passes its string argument (copied into a zeroed 0x44-byte buffer) to the battle aux handler. */
u32 FUN_00335934(void)
{
    const char *source = scrGetArgString(0);
    char name[0x44] = {0};

    libc_strcpy(name, source);
    FUN_004f7b84(g_btlAux, name);
    return 1;
}

} /* extern "C" */
