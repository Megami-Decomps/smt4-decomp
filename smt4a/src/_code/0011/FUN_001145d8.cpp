#include "common.h"

extern "C" {

void FUN_0011b312(void *dest, const void *source);

/* Assignment through FUN_0011b312; returns `dest`. */
void *FUN_001145d8(void *dest, const void *source)
{
    FUN_0011b312(dest, source);
    return dest;
}

} /* extern "C" */
