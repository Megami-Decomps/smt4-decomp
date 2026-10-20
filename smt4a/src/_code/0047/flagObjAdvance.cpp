#include "shard/Shard0047.h"

extern "C" {

typedef struct FlagObj {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 state;
    /* 0x00C */ u8 unk00C[0x434];
    /* 0x440 */ u8 block440[0x118];
    /* 0x558 */ u8 block558[4];
} FlagObj;

extern void uiSpriteSetImageKeyframe(u8 *block, s32 a, s32 b);

/* When both flag bits 0x10 and 0x20 are set: enters state 3, clears 0x20 and resets two sub-blocks. */
void flagObjAdvance(FlagObj *obj)
{
    u32 flags = obj->flags;

    if ((flags & 0x10) != 0 && (flags & 0x20) != 0) {
        obj->state = 3;
        obj->flags = flags & ~0x20u;
        uiSpriteSetImageKeyframe(obj->block440, 2, 0);
        uiSpriteSetImageKeyframe(obj->block558, 2, 0);
    }
}

} /* extern "C" */
