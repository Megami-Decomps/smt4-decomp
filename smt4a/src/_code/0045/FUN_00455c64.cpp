/* NON_MATCHING: native destructor buffer reset and allocator release scheduling differ. */
#include "shard/LateStartResourceOwners.h"
struct PairedResourceOwner {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ AllocatedResourceBuffer first;
    /* 0x24 */ u8 unk24[0x1c];
    /* 0x40 */ AllocatedResourceBuffer second;
};
extern "C" {
extern const u32 DAT_0055bc70[];
PairedResourceOwner *FUN_00455c64(PairedResourceOwner *object)
{
    object->vtable = DAT_0055bc70;
    object->second.clearAndRelease();
    object->first.clearAndRelease();
    return object;
}
}
