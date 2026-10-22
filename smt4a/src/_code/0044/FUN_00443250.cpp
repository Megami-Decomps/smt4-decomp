/* NON_MATCHING: explicit vtable store and allocator release calls schedule differently from the native destructor. */
#include "shard/LateStartResourceOwners.h"
struct DualResourceBuffers {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ AllocatedResourceBuffer first;
    /* 0x18 */ AllocatedResourceBuffer second;
};
extern "C" {
extern const u32 DAT_0055b544[];
DualResourceBuffers *FUN_00443250(DualResourceBuffers *object)
{
    object->vtable = DAT_0055b544;
    object->second.clearAndRelease();
    object->first.clearAndRelease();
    return object;
}
}
