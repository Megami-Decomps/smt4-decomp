#include "common.h"

extern "C" {

struct GimicFlagsObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
};

struct GimicRef {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ GimicFlagsObject *object;
};

struct GimicSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ GimicRef *ref;
    /* 0x0c */ u8 unk0c[0x0c];
};

struct MapGimicSlots {
    /* 0x000 */ u8 unk000[0x8c4];
    /* 0x8c4 */ GimicSlot slots[10];
};

extern MapGimicSlots *g_mapGimic;

/* Sets or clears the low two flag bits on the object behind the active gimic slot with `id`. */
void FUN_003851f8(s32 id, s32 enable)
{
    s32 i;

    for (i = 0; i < 10; i++) {
        GimicSlot *slot = &g_mapGimic->slots[i];
        if (slot->active && slot->id == id) {
            GimicFlagsObject *object = slot->ref->object;
            if (enable != 0) {
                object->flags &= ~3u;
            } else {
                object->flags |= 3;
            }
            return;
        }
    }
}

} /* extern "C" */
