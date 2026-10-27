#include "common.h"

extern "C" {

typedef struct BtlUiData {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ u8 menu[0x23F8];
    /* 0x2400 */ u8 subobject[0xBC];
    /* 0x24BC */ u8 panel[1];
} BtlUiData;

typedef struct BtlUi {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiData *data;
} BtlUi;

extern BtlUi g_btlUi;

u8 menu32ModeIsNot6(u8 *menu);
s32 FUN_0039ebcc(u8 *panel);
u8 *FUN_00502754(u8 *subobject); /* returns the subobject's panel (+0xBC) */
s32 FUN_00321500(u8 *menu);
s32 uiSpriteSetKeyframeThree(u8 *panel);

/* Refreshes the battle UI menu and panel when the menu is not in mode 6 and FUN_0039ebcc succeeds. */
void FUN_004ab734(void)
{
    BtlUiData *data = g_btlUi.data;

    if (menu32ModeIsNot6(data->menu) != 0) {
        if (FUN_0039ebcc(FUN_00502754(data->subobject)) != 0) {
            FUN_00321500(data->menu);
            uiSpriteSetKeyframeThree(data->panel);
        }
    }
}

} /* extern "C" */
