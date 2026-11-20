/* NON_MATCHING: same control flow, frame and calls as retail; what differs is register allocation in three
 * places. The page down loads the first row and the count with one ldm (first row r0, count r1) where retail
 * loads them apart (r1, r0); with the count in r1 the tails retail shares with the wrap to the last item and with
 * the page up (the short-list case, the store of the clamped first row) stay separate copies, which is the one
 * extra row. The page up keeps the first row in r0 (retail r1), and the scroll bar's offset goes back to r2
 * (retail r1). Writing the page down's test as `count <= top + 11` gives retail's loads and shared tails (48
 * lines) but compares the other way round (retail: cmp r2, r0; blt), so the test stays as retail has it. */
#include "camp/CampCec/CampCecEdit.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "code/Code002b.h"
#include "ui/UiControl.h"
#include "quest_center/qcMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

extern "C" {

u32 FUN_0026f024(s32 *output, s32 start, s32 end, s32 duration, s32 elapsed, s32 easeOut);
u32 padIsButtonRepeat(u32 button);
u32 padIsButtonPressed(u32 button);
s32 soundPlaySeUnpanned(u32 id);
void characterInfoPanelPopulate(u32 panel, const CecProcessSlot *record, void *messages);

/* Whether the pointer (`pointer`: which touch sample) is on sprite `index` of the edit screen's table. */
static __inline s32 pointerHitsSprite(s32 index, u32 pointer)
{
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(CEC_EDIT_SPRITE_FILE, index);
    return uiPointerHitsRect(entry->x, entry->y, entry->placement->width, entry->placement->height, pointer);
}

/* Slides the list's window in over 12 frames; returns whether it has arrived (Apocalypse's slideFadeWindowStep
 * is the same step as a function of its own). */
static __inline bool listWindowSlideIn(CampCecEdit *edit)
{
    bool finished = false;

    if (FUN_0026f024(&edit->listWindowX, 330, 0, 12, edit->listWindowFrame, 1)) {
        edit->listWindowDone = 1;
    } else {
        edit->listWindowFrame++;
    }
    if (edit->listWindowDone == 1) {
        finished = true;
    }
    return finished;
}

/* State 7 of the StreetPass card editor: the list of greeting messages. Slides the list in, then each frame
 * takes the stylus on the arrows, the scroll bar and the rows, the pad's line and page steps with wrap-around,
 * previews the message the cursor reaches on the card, and on confirm asks the closing question. Returns 2 to
 * change state, else 0. */
s32 campCecEditChoiceListState(CampCecEdit *edit)
{
    edit->touchFlags = 0;
    s32 startRow = edit->listRow;
    s32 startTop = edit->listTop;
    s32 result = 0;
    s32 touchedRow = -1;
    s32 tapped = 0;
    s32 touchX = 0;
    s32 touchY = 0;

    touchGetPointByMode(&edit->touchX, &edit->touchY, 1);
    edit->rowSprite = CEC_EDIT_SPRITE_ROW_PLAIN;
    asdTMTexTableEntryAt(CEC_EDIT_SPRITE_FILE, edit->listRow + CEC_EDIT_SPRITE_ROW_CURSOR);

    if (listWindowSlideIn(edit)) {
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
                    edit->rowSprite = CEC_EDIT_SPRITE_ROW_TOUCHED;
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
            TextureTableEntryIV *bar = asdTMTexTableEntryAt(CEC_EDIT_SPRITE_FILE, CEC_EDIT_SPRITE_SCROLL_BAR);
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

        if (edit->listRow == 0 && edit->listTop == 0 && (padIsButtonPressed(5) || padIsButtonPressed(14))) {
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
                   (padIsButtonPressed(6) || padIsButtonPressed(15))) {
            /* Down from the last item wraps to the first. */
            edit->listTop = 0;
            edit->listRow = 0;
            edit->listIndex = 0;
        } else if (padIsButtonRepeat(5) || padIsButtonRepeat(14)) {
            if (edit->listIndex > 0) {
                edit->listIndex--;
            }
            if (edit->listTop > 0 && edit->listRow <= 1) {
                edit->listTop--;
            } else if (edit->listRow > 0) {
                edit->listRow--;
            }
        } else if (padIsButtonRepeat(6) || padIsButtonRepeat(15)) {
            if (edit->listIndex < edit->listCount) {
                edit->listIndex++;
            }
            if (edit->listRow >= 9 && edit->listTop < edit->listCount - CEC_EDIT_LIST_ROWS) {
                edit->listTop++;
            } else if (edit->listRow < CEC_EDIT_LIST_ROWS - 1 && edit->listRow < edit->listCount - 1) {
                edit->listRow++;
            }
        } else if (padIsButtonRepeat(3) || padIsButtonRepeat(12)) {
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
        } else if (padIsButtonRepeat(4) || padIsButtonRepeat(13)) {
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

        /* Preview the message the cursor moved to on the card. */
        if (edit->listRow != startRow || edit->listTop != startTop) {
            edit->card->selection = edit->listRow + edit->listTop + edit->messageBase;
            characterInfoPanelPopulate(edit->handleD, edit->card, edit->heapC);
            soundPlaySeUnpanned(0x100016c);
        }

        if (padIsButtonPressed(0) || buttonHelpHasEnabledEntryForId(1) || tapped) {
            /* Confirmed: ask the closing question. */
            edit->nextMessage = 8;
            result = 2;
            edit->followingState = 5;
            edit->nextState = 2;
            buttonHelpSetPreset(226);
            soundPlaySeUnpanned(0x100016d);
        }
    }
    return result;
}

} /* extern "C" */
