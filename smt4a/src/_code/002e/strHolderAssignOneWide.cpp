#include "common.h"

extern "C" {

void strHolderAssignWide(void *dest, const void *source, s32 size);

/* Calls strHolderAssignWide(dest, source, 1) and returns `dest`. */
void *strHolderAssignOneWide(void *dest, const void *source)
{
    strHolderAssignWide(dest, source, 1);
    return dest;
}

} /* extern "C" */
