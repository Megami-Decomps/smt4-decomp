/* NON_MATCHING: retail retains the trivial 16-byte element destruction loop before releasing storage. */
#include "shard/LateStartResourceOwners.h"
struct BufferArrayOwner {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ AllocatedResourceBuffer records;
};
extern "C" {
extern const u32 DAT_0055b7d4[];
BufferArrayOwner *FUN_005160a0(BufferArrayOwner *object)
{
    object->vtable = DAT_0055b7d4;
    object->records.clearAndRelease();
    return object;
}
}
