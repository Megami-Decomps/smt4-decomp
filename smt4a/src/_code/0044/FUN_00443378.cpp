/* NON_MATCHING: explicit vtable store and allocator release call schedule differently from the native destructor. */
#include "shard/LateStartResourceOwners.h"
struct SingleResourceBuffer {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[12];
    /* 0x10 */ AllocatedResourceBuffer buffer;
};
extern "C" {
extern const u32 DAT_0055b454[];
SingleResourceBuffer *FUN_00443378(SingleResourceBuffer *object)
{
    object->vtable = DAT_0055b454;
    object->buffer.clearAndRelease();
    return object;
}
}
