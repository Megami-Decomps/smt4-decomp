#include "common.h"

extern "C" {

void _ZN9Obj55aff4C1EPKc(u32 dest, u8 *buffer);
void FUN_0030f090(u32 source, u8 *buffer, s32 size);

/* Fills a 32-byte buffer from `source` (size 0x10) and hands it to _ZN9Obj55aff4C1EPKc with `dest`. */
void FUN_00123844(u32 dest, u32 source)
{
    u8 buffer[32];

    FUN_0030f090(source, buffer, 0x10);
    _ZN9Obj55aff4C1EPKc(dest, buffer);
}

} /* extern "C" */
