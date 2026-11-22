#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "StaffRoll/StaffRollMain.h"

extern "C" {
s32 padQueryLogicalKey(s32 a, s32 b);
void workSetStateByte(UiSpriteState *sprite, u8 state);

/* Ends a sprite's closing at once (the skip path): clears its update state instead of keying it. */
static void spriteSkipClose(UiSpriteState *sprite)
{
    workSetStateByte(sprite, 0);
}

/* Closes the window parts that belong to the layout `mode`: while the skip key is held or slot 6 is
 * active the sprites are only marked, otherwise they play their closing keyframes. */
void uiPanelCloseStateSection(MessageWindowA *window, u32 mode)
{
    switch (mode) {
    case 1:
        if (padQueryLogicalKey(9, 2) != 0 || slotIsActive(6) != 0) {
            spriteSkipClose(&window->sprites[0]);
        } else {
            uiSpriteSetImageKeyframe(&window->sprites[0], 2, 0);
        }
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 17:
    case 18:
    case 19:
        if (padQueryLogicalKey(9, 2) != 0 || slotIsActive(6) != 0) {
            spriteSkipClose(&window->sprites[0]);
            spriteSkipClose(&window->sprites[2]);
            spriteSkipClose(&window->sprites[1]);
        } else {
            uiSpriteSetImageKeyframe(&window->sprites[0], 2, 0);
            uiSpriteSetImageKeyframe(&window->sprites[2], 2, 0);
            spriteSkipClose(&window->sprites[1]);
        }
        break;
    case 6:
        if (padQueryLogicalKey(9, 2) != 0 || slotIsActive(6) != 0) {
            spriteSkipClose(&window->sprites[0]);
        } else if (vec2GetSpeed(&window->sprites[0]) == 1.0f) {
            uiSpriteSetImageKeyframe(&window->sprites[0], 2, 0);
        }
        break;
    case 7:
    case 8:
        if (padQueryLogicalKey(9, 2) != 0 || slotIsActive(6) != 0) {
            spriteSkipClose(&window->sprites[0]);
            spriteSkipClose(&window->sprites[6]);
        } else {
            uiSpriteSetImageKeyframe(&window->sprites[0], 2, 0);
            uiSpriteSetImageKeyframe(&window->sprites[6], 2, 0);
        }
        break;
    case 9:
        if (padQueryLogicalKey(9, 2) != 0 || slotIsActive(6) != 0) {
            spriteSkipClose(&window->sprites[0]);
            spriteSkipClose(&window->sprites[6]);
        } else {
            uiSpriteSetImageKeyframe(&window->sprites[0], 2, 0);
            uiSpriteSetImageKeyframe(&window->sprites[6], 2, 0);
        }
        break;
    case 10:
        if (padQueryLogicalKey(9, 2) != 0 || slotIsActive(6) != 0) {
            spriteSkipClose(&window->sprites[0]);
        } else {
            uiSpriteSetImageKeyframe(&window->sprites[0], 2, 0);
        }
        break;
    case 11:
        uiSpriteSelectAnim(&window->sprites[0], 7);
        uiSpriteSelectAnim(&window->sprites[3], 7);
        workSetStateByte(&window->sprites[5], 0);
        uiSpriteSelectAnim(&window->sprites[42], 7);
        break;
    case 12:
        for (s32 i = 0; i < 5; i++) {
            if (window->choiceEnabled[i] != 0) {
                uiSpriteSetImageKeyframe(&window->sprites[7 + i], 5, 0);
            }
        }
        window->choicePhase = 0;
        break;
    case 13:
        if (window->selectedChoiceActive != 0) {
            uiSpriteSetImageKeyframe(&window->sprites[12 + window->selectedChoice], 5, 0);
        }
        window->choicePhase = 0;
        break;
    }
}

} /* extern "C" */
