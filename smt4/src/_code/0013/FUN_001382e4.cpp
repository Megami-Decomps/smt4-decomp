/* NON_MATCHING: the compiler emits local SJIS/empty-string literals instead of retail shared PC-relative string addresses. */
#include "common.h"

extern "C" {

extern s32 libc_strcmp(const char *left, const char *right);

/* Accepts the default or Shift-JIS encoding and rejects unsupported names. */
const char *FUN_001382e4(u32 unused, const char *encoding)
{
    if (encoding == NULL || *encoding == 0 || libc_strcmp("SJIS", encoding) == 0) {
        return "";
    }
    return NULL;
}

} /* extern "C" */
