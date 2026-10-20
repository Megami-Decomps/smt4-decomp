#include "common.h"

extern "C" {

void FUN_0011080c(u32 value);

/* Calls FUN_0011080c on `*valueRef`; when `terminate` is set, NUL-terminates the 16-bit string buffer at its `length`-th character. */
void FUN_0010ed92(u32 *valueRef, u16 *buffer, s32 length, s32 terminate)
{
    FUN_0011080c(*valueRef);
    if (terminate != 0) {
        buffer[length - 1] = 0;
    }
}

} /* extern "C" */
