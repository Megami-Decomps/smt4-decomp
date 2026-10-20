#include "shard/Shard0048.h"

extern "C" {

typedef struct Rect48 {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u32 unkA4;
    /* 0xA8 */ u32 unkA8;
    /* 0xAC */ u32 unkAC;
} Rect48;

extern void FUN_004853fc(Rect48 *obj, s32 state);

void rect48Init(Rect48 *obj)
{
    FUN_004853fc(obj, 1);
    obj->unkA4 = 0x140;
    obj->unkA8 = 0;
    obj->unkAC = 0x140;
}

} /* extern "C" */
