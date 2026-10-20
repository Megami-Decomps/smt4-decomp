/* NON_MATCHING: retail's function symbol excludes the string literal armcc emits right after the function; the code itself is identical and fdiff only reports the trailing literal-pool row(s) */
/* Formats a 4-byte IPv4 address as "a.b.c.d" into `buffer`; returns the buffer, or NULL if the arguments are invalid. */
#include "common.h"

extern "C" {

extern s32 libc_snprintf(char *buffer, u32 size, const char *format, ...);

char *inet_ntop(s32 family, const u8 *address, char *buffer, u32 size)
{
    if (address != NULL && buffer != NULL && family == 2 && size >= 16) {
        libc_snprintf(buffer, size, "%d.%d.%d.%d", address[0], address[1], address[2], address[3]);
        return buffer;
    }
    return NULL;
}

}
