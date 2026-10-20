#include "common.h"

extern "C" {

void bufferAssignBytes(void *dest, const void *source, s32 flag);

/* Calls bufferAssignBytes(dest, source, 1) and returns `dest`. */
void *bufferAssignByte(void *dest, const void *source)
{
    bufferAssignBytes(dest, source, 1);
    return dest;
}

} /* extern "C" */
