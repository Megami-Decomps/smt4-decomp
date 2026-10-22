/* NON_MATCHING: native destructor allocator calls and five buffer cursor resets schedule differently. */
#include "shard/LateStartResourceOwners.h"
struct MultiResourceBuffers {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ AllocatedResourceBuffer first;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ AllocatedResourceBuffer second;
    /* 0x30 */ AllocatedResourceBuffer third;
    /* 0x40 */ AllocatedResourceBuffer fourth;
    /* 0x50 */ AllocatedResourceBuffer fifth;
};
extern "C" {
extern const u32 DAT_0055bd34[];
MultiResourceBuffers *FUN_0045991c(MultiResourceBuffers *object)
{
    object->vtable = DAT_0055bd34;
    object->fifth.clearAndRelease();
    object->fourth.clearAndRelease();
    object->third.clearAndRelease();
    object->second.clearAndRelease();
    object->first.clearAndRelease();
    return object;
}
}
