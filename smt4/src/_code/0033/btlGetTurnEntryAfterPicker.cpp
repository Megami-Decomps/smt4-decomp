/* Returns the entry whose turn it is, or -1 while the battle is idle and the menu cursor has stopped; advances the
 * picker once first unless the editor holds it. */
#include "battle/btlMain.h"
#include "ui/UiControl.h"

extern "C" {

s32 btlGetTurnEntryAfterPicker(BtlMainState *battle)
{
    s32 value;

    if ((battle->editorControl.flags & 0x10) == 0 && (battle->battleMask & 0x1000000) == 0) {
        pickerAdvance(battle);
        battle->battleMask |= 0x1000000;
    }
    value = battle->resolution.kind;
    if ((battle->battleMask & 0x1004) == 0) {
        if (battle->menuCursor.stepsX == 0 && battle->menuCursor.stepsY == 0) {
            value = -1;
        }
    }
    return value;
}

}
