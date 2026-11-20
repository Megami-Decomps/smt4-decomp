/* NON_MATCHING: same instructions, frame and control flow as retail; 40 lines differ, all register names in two
 * places. The tap test: retail loads edit->touchY into r0 and the lifted stylus's y into r1 (this build the other
 * way round). The stylus's step down: retail keeps the item count in r2 and the last index in r1, loading the
 * fields it compares into r0 (this build: count r1, last index r0, fields r2). */
#include "shard/Shard0032.h"
#include "shard/W6_W6Match3_FormatBuffer.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "code/Code002b.h"
#include "ui/UiControl.h"
#include "quest_center/qcMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

struct ControllerPresetState;

extern "C" {

bool slideFadeWindowStep(StateAtF4 *window, s32 opening);
u32 padButtonIsPressed(u32 button);
u32 buttonHelpIsActionActive(u32 action);
void msgWindowReset(void);
void sysPlaySe(u32 id);
u32 sysPlayVoice(u32 id); // declcheck: local (declared in the large map's header)
s32 progressUnlockFindNthEarnedIndex(s32 nth);
u16 dataTableGetEntryValue(u32 index);
u32 gameDataToggleFlagIsSet(s32 flagIndex);
void gameDataToggleFlagSet(s32 flagIndex, s32 enabled);
ControllerPresetState *overlayGetStatusScene(void);
void controllerApplyPreset(ControllerPresetState *state, u32 preset);
void characterInfoPanelPopulate(u32 *panel, PlayerSummary *record, void *messages);

/* Whether the pointer (`pointer`: which touch sample) is on sprite `index` of the edit screen's table. */
static __inline s32 pointerHitsSprite(s32 index, u32 pointer)
{
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(CEC_EDIT_SPRITE_FILE_A, index);
    return uiPointerHitsRect(entry->x, entry->y, entry->placement->width, entry->placement->height, pointer);
}

/* Runs the edit screen's choice list (portraits, titles, poses or greeting messages) for one frame: the stylus
 * on the arrows, the scroll bar and the rows, the pad's line and page steps with wrap-around, the preview of
 * the item the cursor reaches, and confirm or cancel. Returns 3 when the list closes, else 0. */
s32 campCecEditChoiceListState(StateAtF4 *edit)
{
    s32 touchedRow = -1;
    s32 tapped = 0;
    s32 startRow = edit->listRow;
    s32 startTop = edit->listTop;
    s32 startIndex = edit->listRow + edit->listTop;
    edit->touchFlags = 0;
    s32 result = 0;
    s32 leftIndex = -1;
    s32 chosenIndex = -1;
    s32 touchX = 0;
    s32 touchY = 0;

    touchGetPointByMode(&edit->touchX, &edit->touchY, 1);
    edit->rowTouched = 0;
    asdTMTexTableEntryAt(CEC_EDIT_SPRITE_FILE_A, edit->listRow + CEC_EDIT_SPRITE_ROW_CURSOR);

    if (slideFadeWindowStep(edit, 1)) {
        if (pointerHitsSprite(CEC_EDIT_SPRITE_ARROW_UP, 0)) {
            edit->touchFlags |= CEC_EDIT_TOUCH_ARROW_UP;
        } else {
            edit->touchFlags &= ~CEC_EDIT_TOUCH_ARROW_UP;
        }
        if (pointerHitsSprite(CEC_EDIT_SPRITE_ARROW_DOWN, 0)) {
            edit->touchFlags |= CEC_EDIT_TOUCH_ARROW_DOWN;
        } else {
            edit->touchFlags &= ~CEC_EDIT_TOUCH_ARROW_DOWN;
        }
        if (pointerHitsSprite(CEC_EDIT_SPRITE_SCROLL_BAR, 0)) {
            edit->touchFlags |= CEC_EDIT_TOUCH_SCROLL_BAR;
        } else {
            edit->touchFlags &= ~CEC_EDIT_TOUCH_SCROLL_BAR;
        }
        for (s32 row = 0; row < CEC_EDIT_LIST_ROWS; row++) {
            if (row < edit->listCount) {
                if (pointerHitsSprite(row + CEC_EDIT_SPRITE_ROW, 0)) {
                    edit->rowTouched = 1;
                    touchedRow = row;
                }
            }
        }

        /* An arrow scrolls on the first frame it is held, then every other frame from the 15th. */
        if (edit->listCount < 10) {
            edit->touchFlags = 0;
        }
        if (edit->touchFlags != 0) {
            edit->arrowHoldFrames++;
            if (edit->arrowHoldFrames == 1 || (edit->arrowHoldFrames >= 15 && (edit->arrowHoldFrames & 1) == 0)) {
                if (edit->touchFlags & CEC_EDIT_TOUCH_ARROW_UP) {
                    edit->touchFlags |= CEC_EDIT_TOUCH_STEP_UP;
                } else if (edit->touchFlags & CEC_EDIT_TOUCH_ARROW_DOWN) {
                    edit->touchFlags |= CEC_EDIT_TOUCH_STEP_DOWN;
                }
            }
        } else {
            edit->arrowHoldFrames = 0;
        }

        /* Lifting the stylus from the selected row within 15 frames and 8 dots of where it went down confirms. */
        if (pointerHitsSprite(edit->listRow + CEC_EDIT_SPRITE_ROW_CURSOR, 3)) {
            touchGetPointByMode(&touchX, &touchY, 3);
            s32 moved = touchY - edit->touchY;
            moved = moved < 0 ? -moved : moved;
            if (edit->touchFrames <= 15 && moved <= 8) {
                tapped = 1;
            }
        }

        if (edit->touchFlags & CEC_EDIT_TOUCH_STEP_UP) {
            if (edit->listIndex > 0) {
                edit->listIndex--;
            }
            if (edit->listRow > 0) {
                edit->listRow--;
            } else if (edit->listTop > 0) {
                edit->listTop--;
            }
        } else if (edit->touchFlags & CEC_EDIT_TOUCH_STEP_DOWN) {
            s32 last = edit->listCount - 1;
            s32 lastTop = edit->listCount - CEC_EDIT_LIST_ROWS;
            if (edit->listIndex < last) {
                edit->listIndex++;
            }
            if (edit->listRow < CEC_EDIT_LIST_ROWS - 1 && edit->listRow < last) {
                edit->listRow++;
            }
            if (edit->listTop < lastTop && edit->listRow < last) {
                edit->listTop++;
            }
        } else if (edit->touchFlags & CEC_EDIT_TOUCH_SCROLL_BAR) {
            /* The stylus's height on the bar picks the position; the selected row stays where it is. */
            s32 row = edit->listRow;
            s32 barX;
            s32 barY;
            touchGetPointByMode(&barX, &barY, 0);
            TextureTableEntryIV *bar = asdTMTexTableEntryAt(CEC_EDIT_SPRITE_FILE_A, CEC_EDIT_SPRITE_SCROLL_BAR);
            barY -= bar->y;
            edit->listIndex = (s32)((f32)barY / (f32)bar->placement->height * (f32)edit->listCount);
            if (edit->listIndex >= edit->listCount) {
                edit->listIndex = edit->listCount - 1;
            }
            edit->listTop = edit->listIndex - row;
            edit->listTop = edit->listTop <= 0 ? 0 : edit->listTop;
            edit->listTop = edit->listTop > edit->listCount - CEC_EDIT_LIST_ROWS ? edit->listCount - CEC_EDIT_LIST_ROWS
                                                                                 : edit->listTop;
        } else if (touchedRow == -1) {
            edit->touchFrames = 0;
        } else {
            edit->listRow = touchedRow;
            edit->listIndex = edit->listTop + touchedRow;
            edit->touchFrames++;
        }

        edit->tickerX += 8;
        if (edit->tickerX > 280) {
            edit->tickerX = -56;
        }
        edit->listActive = 1;

        if (edit->listRow == 0 && edit->listTop == 0 && (padButtonIsPressed(5) || padButtonIsPressed(14))) {
            /* Up from the first item wraps to the last. */
            if (edit->listCount > CEC_EDIT_LIST_ROWS) {
                edit->listTop = edit->listCount - CEC_EDIT_LIST_ROWS;
                edit->listRow = CEC_EDIT_LIST_ROWS - 1;
                edit->listIndex = edit->listCount - 1;
            } else {
                edit->listRow = edit->listCount - 1;
                edit->listTop = 0;
                edit->listIndex = edit->listCount - 1;
            }
        } else if (edit->listTop + edit->listRow - edit->listCount == -1 &&
                   (padButtonIsPressed(6) || padButtonIsPressed(15))) {
            /* Down from the last item wraps to the first. */
            edit->listTop = 0;
            edit->listRow = 0;
            edit->listIndex = 0;
        } else if (padButtonRepeat(5) || padButtonRepeat(14)) {
            if (edit->listIndex > 0) {
                edit->listIndex--;
            }
            if (edit->listTop > 0 && edit->listRow <= 1) {
                edit->listTop--;
            } else if (edit->listRow > 0) {
                edit->listRow--;
            }
        } else if (padButtonRepeat(6) || padButtonRepeat(15)) {
            if (edit->listIndex < edit->listCount) {
                edit->listIndex++;
            }
            if (edit->listRow >= 9 && edit->listTop < edit->listCount - CEC_EDIT_LIST_ROWS) {
                edit->listTop++;
            } else if (edit->listRow < CEC_EDIT_LIST_ROWS - 1 && edit->listRow < edit->listCount - 1) {
                edit->listRow++;
            }
        } else if (padButtonRepeat(3) || padButtonRepeat(12)) {
            /* A page down. */
            if (edit->listTop + CEC_EDIT_LIST_ROWS >= edit->listCount) {
                if (edit->listCount > CEC_EDIT_LIST_ROWS) {
                    edit->listRow = CEC_EDIT_LIST_ROWS - 1;
                    edit->listIndex = edit->listCount - 1;
                } else {
                    edit->listRow = edit->listCount - 1;
                    edit->listTop = 0;
                    edit->listIndex = edit->listCount - 1;
                }
            } else {
                edit->listIndex += 10;
                edit->listIndex = edit->listCount - 1 < edit->listIndex ? edit->listCount - 1 : edit->listIndex;
                edit->listTop += edit->listIndex;
                edit->listTop = edit->listTop > edit->listCount - CEC_EDIT_LIST_ROWS
                                    ? edit->listCount - CEC_EDIT_LIST_ROWS : edit->listTop;
                edit->listTop = edit->listTop <= 0 ? 0 : edit->listTop;
            }
        } else if (padButtonRepeat(4) || padButtonRepeat(13)) {
            /* A page up. */
            if (edit->listTop <= 0) {
                edit->listRow = 0;
                edit->listIndex = 0;
                edit->listTop = 0;
            } else {
                edit->listIndex -= 10;
                edit->listTop -= 10;
                edit->listIndex = edit->listIndex <= 0 ? 0 : edit->listIndex;
                edit->listTop = edit->listTop <= 0 ? 0 : edit->listTop;
            }
        }

        /* Preview the item the cursor moved to on the card. */
        if (edit->listRow != startRow || edit->listTop != startTop) {
            if (edit->editItem == CEC_EDIT_ITEM_MESSAGE) {
                edit->record->message = edit->listRow + edit->listTop + edit->messageBase;
            } else if (edit->editItem == CEC_EDIT_ITEM_TITLE) {
                edit->record->title = progressUnlockFindNthEarnedIndex(edit->listRow + edit->listTop);
                screenStartOrClear((s32)edit->messages, dataTableGetEntryValue(edit->record->title));
            } else if (edit->editItem == CEC_EDIT_ITEM_POSE) {
                edit->record->pose = edit->listRow + edit->listTop;
                controllerApplyPreset(overlayGetStatusScene(), edit->listRow + edit->listTop);
            } else if (edit->editItem == CEC_EDIT_ITEM_PORTRAIT) {
                edit->record->portrait = edit->listRow + edit->listTop;
            }
            characterInfoPanelPopulate(edit->infoPanel, edit->record, edit->messages);
            sysPlayVoice(0x100020d);
        }

        if (padButtonIsPressed(0) || buttonHelpIsActionActive(1) || tapped) {
            /* Confirmed: go on to the item's closing message. */
            result = 3;
            if (edit->editItem == CEC_EDIT_ITEM_TITLE) {
                edit->table.nextState = 13;
            } else if (edit->editItem == CEC_EDIT_ITEM_POSE) {
                edit->table.nextState = 20;
            } else if (edit->editItem == CEC_EDIT_ITEM_PORTRAIT) {
                edit->table.nextState = 23;
            } else {
                edit->table.nextState = 10;
            }
            chosenIndex = edit->listRow + edit->listTop;
            edit->followingPhase = 5;
            edit->phase = 2;
            leftIndex = startIndex;
            sysPlaySe(228);
            sysPlayVoice(0x100020e);
        } else if (padButtonIsPressed(1) || buttonHelpIsActionActive(2)) {
            /* Cancelled: put the card's value back and close the list. */
            msgWindowReset();
            edit->listCancelled = 1;
            edit->listActive = 0;
            result = 3;
            if (edit->editItem == CEC_EDIT_ITEM_TITLE) {
                edit->record->title = edit->savedTitle;
            } else if (edit->editItem == CEC_EDIT_ITEM_POSE) {
                edit->record->pose = edit->savedPose;
                controllerApplyPreset(overlayGetStatusScene(), edit->savedPose);
            } else if (edit->editItem == CEC_EDIT_ITEM_PORTRAIT) {
                edit->record->portrait = edit->savedPortrait;
            } else if (edit->editItem == CEC_EDIT_ITEM_MESSAGE) {
                edit->record->message = edit->savedMessage;
            }
            characterInfoPanelPopulate(edit->infoPanel, edit->record, edit->messages);
            edit->cursor.frame = 0;
            edit->cursor.done = 0;
            edit->table.state = -1;
            edit->phase = 8;
            edit->table.nextState = -1;
            campCecSetObjectValue(0);
            sysPlayVoice(0x100020f);
        }
    }

    /* A title the cursor rested on for more than two frames, and the one chosen, are no longer new. */
    if (edit->listRow + edit->listTop != startIndex) {
        s32 stillFrames = edit->stillFrames;
        edit->stillFrames = 0;
        if (stillFrames > 2) {
            leftIndex = startIndex;
        }
    }
    if (edit->editItem == CEC_EDIT_ITEM_TITLE) {
        s32 flag = progressUnlockFindNthEarnedIndex(leftIndex);
        if (leftIndex >= 0 && gameDataToggleFlagIsSet(flag)) {
            gameDataToggleFlagSet(flag, 0);
        }
        flag = progressUnlockFindNthEarnedIndex(chosenIndex);
        if (chosenIndex >= 0 && gameDataToggleFlagIsSet(flag)) {
            gameDataToggleFlagSet(flag, 0);
        }
    }
    edit->stillFrames++;
    return result;
}

} /* extern "C" */
