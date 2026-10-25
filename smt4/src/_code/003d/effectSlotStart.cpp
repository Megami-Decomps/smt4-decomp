#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

struct EffectSlot {
    /* 0x00 */ s32 id;
    /* 0x04 */ u32 handle;
    /* 0x08 */ u8 unk08[0x30 - 8];
};

struct EffectOwner {
    /* 0x0000 */ u8 unk0000[0x1398];
    /* 0x1398 */ EffectSlot slots[50];
};

struct EffectSource {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
};

u32 FUN_0027d9e8(void *state, u32 id);

/* Starts effect `id` in the first free slot (unless the source is flagged 0x20000) and records its handle. */
void effectSlotStart(EffectOwner *owner, EffectSource *source, u32 id)
{
    s32 i;

    if ((source->flags & 0x20000) == 0) {
        for (i = 0; i < 50; i++) {
            if (owner->slots[i].id < 0) {
                u32 handle = FUN_0027d9e8(static_cast<void *>(btlGetMainState()), id);

                owner->slots[i].id = id;
                owner->slots[i].handle = handle;
                return;
            }
        }
    }
}

} /* extern "C" */
