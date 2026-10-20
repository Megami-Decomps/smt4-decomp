#include "common.h"

extern "C" {

int uiSpriteSetImageKeyframe(void *block, int a, int b);

typedef struct Obj {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u8 unk00C[0x434];
    /* 0x440 */ u8 blockA[0x118];
    /* 0x558 */ u8 blockB[1];
} Obj;

void FUN_0027e9c0(Obj *obj)
{
    u32 flags = obj->flags;

    if ((flags & 0x10) != 0 && (flags & 0x20) != 0) {
        obj->unk008 = 3;
        obj->flags = flags & 0xffffffdf;
        uiSpriteSetImageKeyframe(obj->blockA, 2, 0);
        uiSpriteSetImageKeyframe(obj->blockB, 2, 0);
        return;
    }
}

} /* extern "C" */
