#include "common.h"

extern "C" {

int FUN_0037c7d4(void);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x34];
    /* 0x034 */ u32 unk034;
    /* 0x038 */ u32 unk038;
    /* 0x03C */ u32 unk03C;
    /* 0x040 */ u8 unk040[4];
    /* 0x044 */ u32 unk044;
    /* 0x048 */ u32 unk048;
    /* 0x04C */ u8 unk04C;
    /* 0x04D */ u8 unk04D;
    /* 0x04E */ u8 unk04E[0xA42];
    /* 0xA90 */ u8 unkA90;
    /* 0xA91 */ u8 unkA91[0x193];
    /* 0xC24 */ u32 unkC24;
    /* 0xC28 */ u32 unkC28;
} Obj;

void FUN_0037c294(Obj *obj)
{
    FUN_0037c7d4();
    obj->unk034 = 0;
    obj->unk038 = 0xffffffff;
    obj->unk03C = 0;
    obj->unk044 = 0;
    obj->unk048 = 0;
    obj->unk04C = 0;
    obj->unk04D = 0;
    obj->unkA90 = 3;
    obj->unkC24 = 0;
    obj->unkC28 = 0;
}

} /* extern "C" */
