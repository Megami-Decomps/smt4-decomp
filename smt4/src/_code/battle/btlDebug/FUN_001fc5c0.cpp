/* NON_MATCHING: retail keeps the debug-state base in r1 and the state in r0, moves the work pointer after the NULL test, and ends the dispatch with bne/b; case layout matches. */
#include "common.h"

extern "C" {

typedef struct BtlDebugMenu {
    /* 0x00 */ s32 state;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ u32 listBox;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u32 unit;
} BtlDebugMenu;

typedef struct BtlDebugState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
    /* 0x08 */ BtlDebugMenu *menu;
} BtlDebugState;

typedef struct BtlDebugWork {
    /* 0x0000 */ u8 unk0000[0x49C8];
    /* 0x49C8 */ u32 aocIndex;
} BtlDebugWork;

extern BtlDebugState g_btlDebugState;

BtlDebugWork *jobGetWork(void);
u32 asdListBoxGetSelectedItemId(u32 listBox);
const char *aocIndexValueOrDefault(u32 index);
void textDrawDefaultString(const char *text, f32 x, f32 y);
u32 FUN_002561d8(BtlDebugWork *work, u32 unit, s32 flags);
void FUN_003c2fe8(BtlDebugMenu *menu, u32 value);
void FUN_003c3238(BtlDebugMenu *menu, u32 value);

/* Battle debug menu update: act on the selected list item for the menu's current state. */
u32 FUN_001fc5c0(void)
{
    BtlDebugWork *work = jobGetWork();
    BtlDebugMenu *menu = g_btlDebugState.menu;

    if (menu == NULL) {
        return 0;
    }
    switch (menu->state) {
    case 1:
        FUN_003c2fe8(menu, g_btlDebugState.value);
        break;
    case 10:
        if (asdListBoxGetSelectedItemId(menu->listBox) == 11) {
            textDrawDefaultString(aocIndexValueOrDefault(work->aocIndex), 256.0f, 42.0f);
        }
        break;
    case 14:
        if (asdListBoxGetSelectedItemId(menu->listBox) == 0) {
            FUN_003c3238(menu, FUN_002561d8(work, menu->unit, 1));
        }
        break;
    case 12:
        if (asdListBoxGetSelectedItemId(menu->listBox) == 0) {
            FUN_003c3238(menu, FUN_002561d8(work, menu->unit, 1));
        }
        break;
    }
    return 0;
}

} /* extern "C" */
