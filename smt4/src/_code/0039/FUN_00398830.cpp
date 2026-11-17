#include "common.h"
#include "ui/UiSpriteApi.h"

extern "C" {


typedef struct Obj {
    /* 0x000 */ u8 unk000[1];
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u8 unk002[0xA];
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ u8 unk010[0x94];
    /* 0x0A4 */ u32 unk0A4;
    /* 0x0A8 */ u8 unk0A8[0x660];
    /* 0x708 */ UiSpriteState block;
} Obj;

void FUN_00398830(Obj *obj)
{
    u32 value;

    if (uiSlidingSpriteAdvance(&obj->block, 0) != 0) {
        obj->unk001 = 2;
        obj->unk00C = 0;
    }
    value = vec2GetXInt(&obj->block);
    obj->unk0A4 = value;
}

} /* extern "C" */
