/* ARM runtime code (armlib's atoll): built --cpu=5TE like its neighbours libc_toupper and digitValueInBase. */
#include "common.h"
#include <errno.h>

extern "C" {

s64 FUN_001029f4(const char *text, char **end, s32 base);

/* Parses a decimal integer without disturbing errno (armlib's atoll shape). */
s64 scriptParseIntArgumentPreservingErrno(const char *text)
{
    s32 saved = errno;
    s64 value = FUN_001029f4(text, NULL, 10);
    errno = saved;
    return value;
}

} /* extern "C" */
