#include "common.h"

extern "C" {

extern u8 DAT_0055ade0; /* vtable */

extern u32 *_ZN9Obj5590e4C1Eh(u32 arg, u32 flag);

/* Creates the base object for `arg` and gives it this class's vtable. */
void FUN_0030e690(u32 arg)
{
    *_ZN9Obj5590e4C1Eh(arg, 1) = (u32)&DAT_0055ade0;
}

} /* extern "C" */
