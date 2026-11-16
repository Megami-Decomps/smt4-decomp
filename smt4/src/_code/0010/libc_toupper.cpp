#include "common.h"

extern "C" {

extern const u8 **libcLocaleGetCtypeTable(void);   /* the current locale's character class table */

/* toupper: maps lowercase letters (class bit 3) to uppercase, except 0xDF. */
int libc_toupper(int c)
{
    const u8 *table = *libcLocaleGetCtypeTable();

    if ((table[c] & 8) && c != 0xdf) {
        return c - 0x20;
    }
    return c;
}

} /* extern "C" */
