#include "common.h"

extern "C" {

void FUN_001bd438(u8 *object, u32 value);
extern u8 DAT_00647660[];

/* Forwards `value` to FUN_001bd438 with the object at 0x647660. */
void FUN_001c6df4(u32 value)
{
    FUN_001bd438(DAT_00647660, value);
}

} /* extern "C" */
