#include "shard/Shard0040.h"

extern "C" {

typedef struct LinkOwner {
    /* 0x00 */ u8 unk00[0x15];
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 unk16[6];
    /* 0x1C */ FlagLink *link1C;
    /* 0x20 */ FlagLink *link20;
} LinkOwner;

/* Clears bit 0 of the linked data's flags when `enable` is set, else sets it (only when +0x15 is set). */
void linkSlotSetFlag20(LinkOwner *owner, s32 enable)
{
    FlagData *data;
    u32 flags;

    if (owner->unk15 != 0) {
        data = owner->link20->data;
        flags = data->flags;
        if (enable != 0) {
            flags = flags & ~1u;
        } else {
            flags = flags | 1;
        }
        data->flags = flags;
    }
}

} /* extern "C" */
