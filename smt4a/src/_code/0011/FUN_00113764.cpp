#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_0055959c[];  /* vtable */
VObject *FUN_002ec6ec(u32 owner, u32 a, u32 b);

/* Creates the object through FUN_002ec6ec (arguments 6 and 0x40) and sets its vtable. */
void FUN_00113764(u32 owner)
{
    VObject *object = FUN_002ec6ec(owner, 6, 0x40);
    object->vtbl = DAT_0055959c;
}

} /* extern "C" */
