/* NON_MATCHING: register allocation only: retail recomputes the panel address (`add r0, r4, #9216; add r0, r0, #188`) after FUN_00321500 instead of keeping it in r5, so it pushes only {r4, lr}; built reuses the first computation. */
#include "common.h"

extern "C" {

typedef struct BtlUiData {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ u8 menu[0x24B4];
    /* 0x24BC */ u8 panel[1];
} BtlUiData;

typedef struct BtlUi {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiData *data;
} BtlUi;

extern BtlUi g_btlUi;

s32 menu32ModeIsNot6(u8 *menu);
s32 FUN_0039ebcc(u8 *panel);
s32 FUN_00321500(u8 *menu);
s32 FUN_00184748(u8 *panel);

/* Refreshes the battle UI menu and panel when the menu is not in mode 6 and FUN_0039ebcc succeeds. */
void FUN_004ab734(void)
{
    BtlUiData *data = g_btlUi.data;

    if (menu32ModeIsNot6(data->menu) != 0) {
        if (FUN_0039ebcc(data->panel) != 0) {
            FUN_00321500(data->menu);
            FUN_00184748(data->panel);
        }
    }
}

} /* extern "C" */
