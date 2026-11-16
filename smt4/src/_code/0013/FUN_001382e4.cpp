/* NON_MATCHING: the compiler emits local SJIS/empty-string literals instead of retail shared PC-relative string addresses. */
#include "common.h"
#include <string.h>

extern "C" {


/* Accepts the default or Shift-JIS encoding and rejects unsupported names. */
const char *FUN_001382e4(u32 unused, const char *encoding)
{
    if (encoding == NULL || *encoding == 0 || strcmp("SJIS", encoding) == 0) {
        return "";
    }
    return NULL;
}

} /* extern "C" */
