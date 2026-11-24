/* NON_MATCHING: same control flow and calls as retail. What still differs: retail's frame is 28 bytes (here 12)
 * with the two spilled sprite addresses of the opening state at [sp] and [sp,#24]; the switch keeps the state in
 * r0 and the banner sprite in r1 (here swapped, so retail's `mov r0, r1` before each banner call is missing);
 * state 6 stores its 0 through r0 and keeps its own `frame = 0` where this build shares state 4's stores; the
 * mark-count loops of state 3 use r0/r1 the other way round and compute the leaving sprite's number before its
 * row. */
#include "ui/UiSpriteApi.h"
#include "ui/SpriteRowList.h"

extern "C" {

void workSetStateByte(UiSpriteState *element, u8 state);

/* Advances the row list by a frame: the removed marks that are still turning away, the state's own
 * animation (opening, applying a change of rows and marks, closing, the banner), the sprites that
 * faded or shrank to nothing, and each row's flash timer. */
void spriteRowListUpdate(SpriteRowList *list)
{
    s32 done = 0;
    s32 i;
    UiSpriteState *banner;
    s32 rowCount;
    s32 selectedRow;

    for (i = 0; i < SPRITE_ROW_MAX; i++) {
        if (list->leavingSprites[i] >= 0 && list->leavingActive[i] == 1) {
            uiSpriteAdvanceAnimation(&list->sprites[list->leavingSprites[i]]);
            if (list->alternate != 0) {
                list->leavingAngles[i] -= 0.049087387f;
            } else {
                list->leavingAngles[i] += 0.049087387f;
            }
            if (uiSpriteGetCompletionState(&list->sprites[list->leavingSprites[i]])) {
                list->leavingSprites[i] = -1;
                list->leavingActive[i] = 0;
                list->leavingAngles[i] = 0.0f;
            }
        }
    }

    banner = &list->sprites[SPRITE_ROW_BANNER];
    switch (list->state) {
    case SPRITE_ROW_STATE_SHOWN:
        for (i = 0; i < list->rowCount; i++) {
            uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_BASE]);
            uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_COVER]);
        }
        if (list->selectedRow > 0) {
            for (i = 0; i < list->selectedRow; i++) {
                s32 row = list->rowCount - i - 1;

                uiSpriteAdvanceAnimation(&list->sprites[row + SPRITE_ROW_MARK]);
            }
            list->angle += 0.1f;
            if (list->angle >= 6.28f) {
                list->angle -= 6.28f;
            }
        }
        break;

    case SPRITE_ROW_STATE_OPENING:
        /* each row starts two frames after the one before it */
        if (list->rowCount > 0) {
            for (i = 0; i < list->rowCount; i++) {
                if (i * 2 <= list->frame) {
                    uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_BASE]);
                    if (list->frame >= i * 2 + 2) {
                        uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_MARK]);
                        if (i >= list->rowCount - 1 && uiSpriteGetCompletionState(&list->sprites[i + SPRITE_ROW_MARK])) {
                            done = 1;
                        }
                    }
                    if (i * 2 + 4 <= list->frame) {
                        uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_COVER]);
                        uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_GLOW]);
                        if (uiSpriteGetCompletionState(&list->sprites[i + SPRITE_ROW_GLOW]) &&
                            list->sprites[i + SPRITE_ROW_COVER].image == 6) {
                            spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_COVER], 0);
                        }
                    }
                }
            }
            if (!done) {
                break;
            }
        }
        for (i = 0; i < list->rowCount; i++) {
            spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_MARK], 6);
            spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_GLOW], 4);
            spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_COVER], 0);
        }
        if (list->selectedRow > 0) {
            for (i = 0; i < list->selectedRow; i++) {
                s32 row = list->rowCount - i - 1;

                pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_COVER], 6);
                spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_COVER], 1);
                spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_MARK], 6);
                spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_GLOW], 4);
                if (row >= 0 && row < SPRITE_ROW_MAX && list->flashFrames[row] < 0) {
                    list->flashFrames[row] = 0;
                }
            }
        }
        list->state = SPRITE_ROW_STATE_SHOWN;
        list->frame = 0;
        break;

    case SPRITE_ROW_STATE_CHANGING:
        done = 1;
        if (list->selectedChange > 0) {
            s32 rows = list->rowCount;
            s32 total;
            s32 count;
            s32 j;

            if (list->rowCountChange > 0) {
                rows += list->rowCountChange;
            }
            total = list->selectedRow + list->selectedChange;
            if (total > 0 && list->frame == 14) {
                for (j = 0; j < total; j++) {
                    s32 row = rows - j - 1;

                    if (row >= 0 && row < SPRITE_ROW_MAX && list->flashFrames[row] < 0) {
                        list->flashFrames[row] = 0;
                    }
                }
            }
            for (j = 0; j < list->selectedChange; j++) {
                s32 row = rows - list->selectedRow - j;

                list->leavingSprites[row - 1] = row - 1 + SPRITE_ROW_LEAVING;
                uiSpriteAdvanceAnimation(&list->sprites[list->leavingSprites[row - 1]]);
            }
            count = list->selectedChange;
            if (list->frame <= 8) {
                for (j = 0; j < count; j++) {
                    s32 row = rows - list->selectedRow - j - 1;

                    if (list->alternate == 0) {
                        list->leavingAngles[row] += 0.19634955f;
                    } else {
                        list->leavingAngles[row] -= 0.19634955f;
                    }
                }
            } else {
                for (j = 0; j < count; j++) {
                    s32 row = rows - list->selectedRow - j - 1;

                    if (list->alternate == 0) {
                        list->leavingAngles[row] += 0.049087387f;
                    } else {
                        list->leavingAngles[row] -= 0.049087387f;
                    }
                }
            }
            if (list->frame >= 15) {
                for (j = 0; j < list->selectedChange; j++) {
                    list->leavingActive[rows - list->selectedRow - j - 1] = 1;
                }
            } else {
                done = 0;
            }
        }
        if (list->rowCountChange > 0) {
            for (i = 0; i < list->rowCount + list->rowCountChange; i++) {
                uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_BASE]);
                uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_COVER]);
            }
            if (!uiSpriteGetScaleDone(&list->sprites[list->rowCount + list->rowCountChange - 1])) {
                done = 0;
            }
        }
        if (list->rowCountChange < 0) {
            for (i = 0; i < list->rowCount; i++) {
                if (!uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_BASE])) {
                    uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_COVER]);
                    uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_MARK]);
                    uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_GLOW]);
                    list->flashFrames[i] = -1;
                }
            }
            if (!uiSpriteGetScaleDone(&list->sprites[list->rowCount - 1]) || !done) {
                break;
            }
            for (i = 0; i < list->rowCount; i++) {
                workSetStateByte(&list->sprites[i + SPRITE_ROW_MARK], 0);
                workSetStateByte(&list->sprites[i + SPRITE_ROW_GLOW], 0);
            }
        }
        if (!done) {
            break;
        }
        rowCount = (s16)(list->rowCount + list->rowCountChange);
        selectedRow = (s16)(list->selectedRow + list->selectedChange);
        list->rowCount = rowCount;
        list->selectedRow = selectedRow;
        if (selectedRow < 0) {
            list->selectedRow = 0;
        }
        list->selectedRow = list->selectedRow > rowCount ? rowCount : list->selectedRow;
        list->rowCountChange = 0;
        list->selectedChange = 0;
        for (i = 0; i < list->rowCount; i++) {
            spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_MARK], 6);
            spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_GLOW], 4);
            spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_COVER], 0);
        }
        if (list->selectedRow > 0) {
            for (i = 0; i < list->selectedRow; i++) {
                s32 row = list->rowCount - i - 1;

                pairSetFirstResetSecond(&list->sprites[row + SPRITE_ROW_COVER], 6);
                spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_COVER], 1);
                spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_MARK], 6);
                spriteStartAnimationByIndex(&list->sprites[row + SPRITE_ROW_GLOW], 4);
            }
        }
        list->state = SPRITE_ROW_STATE_SHOWN;
        list->frame = 0;
        break;

    case SPRITE_ROW_STATE_CLOSING:
        /* from the last row back, two frames apart */
        if (list->rowCount > 0) {
            for (i = 0; i < list->rowCount; i++) {
                if (i * 2 <= list->frame) {
                    uiSpriteAdvanceAnimation(&list->sprites[list->rowCount - i - 1 + SPRITE_ROW_BASE]);
                    uiSpriteAdvanceAnimation(&list->sprites[list->rowCount - i - 1 + SPRITE_ROW_COVER]);
                    if (i >= list->rowCount - 1) {
                        done = 1;
                    }
                }
            }
            if (!done) {
                break;
            }
        }
        for (i = 0; i < SPRITE_ROW_SPRITES; i++) {
            workSetStateByte(&list->sprites[i], 0);
        }
        list->angle = 0.0f;
        list->rowCount = 0;
        list->selectedRow = 0;
        list->state = SPRITE_ROW_STATE_IDLE;
        list->frame = 0;
        break;

    case SPRITE_ROW_STATE_BANNER_IN:
        if (uiSpriteAdvanceAnimation(banner)) {
            list->state = SPRITE_ROW_STATE_SHOWN;
            list->frame = 0;
        }
        break;

    case SPRITE_ROW_STATE_BANNER_OUT:
        if (uiSpriteAdvanceAnimation(banner)) {
            list->state = SPRITE_ROW_STATE_IDLE;
            list->frame = 0;
        }
        break;
    }

    /* a sprite that shrank or faded to nothing is no longer drawn */
    for (i = 0; i < SPRITE_ROW_SPRITES; i++) {
        if (list->sprites[i].scale[0] <= 0.0f) {
            workSetStateByte(&list->sprites[i], 0);
        }
        if (list->sprites[i].alpha <= 0.0f) {
            workSetStateByte(&list->sprites[i], 0);
        }
    }

    for (i = 0; i < SPRITE_ROW_MAX; i++) {
        if (list->flashFrames[i] < 0) {
            if (!uiSpriteGetCompletionState(&list->sprites[i + SPRITE_ROW_FLASH])) {
                uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_FLASH]);
            }
        } else {
            if (list->state == SPRITE_ROW_STATE_SHOWN || list->state == SPRITE_ROW_STATE_CHANGING) {
                if (list->flashFrames[i] < 15) {
                    if (list->flashFrames[i] == 1) {
                        spriteStartAnimationByIndex(&list->sprites[i + SPRITE_ROW_FLASH], 11);
                    }
                    if (list->flashFrames[i] == 0) {
                        if (list->alternate == 0) {
                            pairSetFirstResetSecond(&list->sprites[i + SPRITE_ROW_BASE], 4000);
                        } else {
                            pairSetFirstResetSecond(&list->sprites[i + SPRITE_ROW_BASE], 4001);
                        }
                    }
                } else if (list->flashFrames[i] == 15) {
                    if (list->alternate == 0) {
                        pairSetFirstResetSecond(&list->sprites[i + SPRITE_ROW_BASE], 0);
                    } else {
                        pairSetFirstResetSecond(&list->sprites[i + SPRITE_ROW_BASE], 1);
                    }
                }
                uiSpriteAdvanceAnimation(&list->sprites[i + SPRITE_ROW_FLASH]);
            } else {
                list->flashFrames[i] = -1;
            }
            list->flashFrames[i]++;
            if (list->flashFrames[i] > 31) {
                list->flashFrames[i] = 0;
            }
        }
    }
    list->frame++;
}

} /* extern "C" */
