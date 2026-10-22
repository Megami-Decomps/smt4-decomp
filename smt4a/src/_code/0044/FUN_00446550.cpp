/* NON_MATCHING: native destructor owned-object calls and buffer-release register scheduling differ. */
#include "shard/LateStartResourceOwners.h"
struct CompositeResourceOwner {
    /* 0x000 */ const void *vtable;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ OwnedResourceObject first;
    /* 0x010 */ u8 unk010[0x38];
    /* 0x048 */ AllocatedResourceBuffer buffer48;
    /* 0x058 */ u8 unk058[8];
    /* 0x060 */ AllocatedResourceBuffer buffer60;
    /* 0x070 */ u8 unk070[0x38];
    /* 0x0A8 */ AllocatedResourceBuffer bufferA8;
    /* 0x0B8 */ u8 unk0B8[4];
    /* 0x0BC */ AllocatedResourceBuffer bufferBC;
    /* 0x0CC */ AllocatedResourceBuffer bufferCC;
    /* 0x0DC */ u8 unk0DC[0x50];
    /* 0x12C */ OwnedResourceObject last;
};
extern "C" {
extern const u32 DAT_0055b634[];
CompositeResourceOwner *FUN_00446550(CompositeResourceOwner *object)
{
    object->vtable = DAT_0055b634;
    object->last.release();
    object->bufferCC.clearAndRelease();
    object->bufferBC.clearAndRelease();
    object->bufferA8.clearAndRelease();
    object->buffer60.clearAndRelease();
    object->buffer48.clearAndRelease();
    object->first.release();
    return object;
}
}
