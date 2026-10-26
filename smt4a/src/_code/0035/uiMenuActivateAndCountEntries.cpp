/* NON_MATCHING: retail uses `mov r3, #1` where armcc emits `mov r1, #1`. */
#include "common.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "util/FUN_002a4878.h"

extern "C" {

struct MenuItem { u8 data[100]; };
struct MenuState {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ u32 selectedIndex;
    /* 0x3894 */ u8 unk3894[0x12];
    /* 0x38a6 */ u16 count;
    /* 0x38a8 */ s16 ids[4];
    /* 0x38b0 */ u8 unk38b0[3];
    /* 0x38b3 */ u8 active;
    /* 0x38b4 */ u8 unk38b4[8];
    /* 0x38bc */ MenuItem items[1];
};
void FUN_003756c8(s32 enabled);
void FUN_0020ad6c(MenuState *menu, s32 kind, s32 enabled);

void uiMenuActivateAndCountEntries(MenuState *menu)
{
    menu->active = 1;
    menu->count = 0;
    for (s32 i = 0; i < 4; i++) {
        if (menu->ids[i] >= 0) {
            menu->count++;
        }
    }
    if (FUN_002a21c8() == 0) {
        FUN_003756c8(FUN_002a4878(&menu->items[menu->selectedIndex]) == 0);
    }
    FUN_0020ad6c(menu, 14, 1);
}

} /* extern "C" */
