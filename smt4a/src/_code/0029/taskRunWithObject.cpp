/* Builds an object via FUN_001642e4 (which also yields a value), passes both to effBlockCopyDataB, then releases the object. */
#include "common.h"

extern "C" {

void effBlockCopyDataB(u32 arg1, u32 object, u32 value, u32 arg4);
void asdMemFree(u32 object);
u32 FUN_001642e4(u32 arg, u32 *outValue, u32 count, u32 flags);

void taskRunWithObject(u32 arg1, u32 arg2, u32 arg4)
{
    u32 value;
    u32 object;

    object = FUN_001642e4(arg2, &value, 1, 0x80);
    effBlockCopyDataB(arg1, object, value, arg4);
    asdMemFree(object);
}

} /* extern "C" */
