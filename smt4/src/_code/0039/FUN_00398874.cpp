/* NON_MATCHING: the restored cursor's store address goes to r0 instead of r3 (register allocation only). */
#include "common.h"
#include "util/TouchLayoutRebuildRegions.h"

extern "C" {

typedef struct CursorMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 cursorX;
    /* 0x14 */ s32 cursorY;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u8 page;
    /* 0x21 */ u8 savedPage;
    /* 0x22 */ u8 unk22[7];
    /* 0x29 */ u8 zoomed; // set while the zoomed view is shown
    /* 0x2A */ s8 savedCursorX;
    /* 0x2B */ s8 savedCursorY;
    /* 0x2C */ u8 unk2C[0x78];
    /* 0xA4 */ s32 timerValue;
    /* 0xA8 */ u8 unkA8[0x660];
    /* 0x708 */ u8 timer[1];
} CursorMenu;

s32 FUN_002bf818(void *timer);
void FUN_00232848(void);
void buttonHelpSetPreset(s32 preset);
void messageOwnerSetState(CursorMenu *menu, s32 state);
void timerStart(void *timer, s32 a, s32 b);
s32 vec2GetXInt(void *timer);

/* Toggles the menu's zoomed view on input, restoring the saved cursor when leaving it,
 * and samples the transition timer. */
void FUN_00398874(CursorMenu *menu)
{
    if (FUN_002bf818(menu->timer) != 0) {
        if (menu->zoomed) {
            menu->page = menu->savedPage;
            menu->zoomed = 0;
            menu->cursorX = menu->savedCursorX;
            menu->cursorY = menu->savedCursorY;
            FUN_00232848();
            touchLayoutRebuildRegions(menu);
            buttonHelpSetPreset(150);
        } else {
            menu->cursorX = 0;
            menu->zoomed = 1;
            menu->cursorY = 0;
            touchLayoutRebuildRegions(menu);
            buttonHelpSetPreset(151);
        }
        messageOwnerSetState(menu, 11);
        timerStart(menu->timer, 0, 0);
    }
    menu->timerValue = vec2GetXInt(menu->timer);
}

} /* extern "C" */
