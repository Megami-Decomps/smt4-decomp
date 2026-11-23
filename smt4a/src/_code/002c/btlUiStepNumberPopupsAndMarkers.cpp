/* NON_MATCHING: 81 lines (366 vs 365 rows), complete. What differs: the number popup's `anchored` argument (retail
 * loads it signed and btlUiStartNumberPopup reads it as a word, so the parameter is 32 bits wide; that function is 14
 * lines worse with it, so the shared prototype stays), the order of the marker request's loads, r0/r1 in the marker's
 * `timer = 0; active = 0;`, and which arm keeps the loop's last cross-jumped store. */
#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers_VariantB.h"
#include "ui/UiSpriteApi.h"
#include "code/Code0015.h"

extern "C" {

void cameraProjectToScreen(f32 *screen, s32 display, u32 camera, const f32 *world);
void uiStoreTextureEntryCenter(void *sprite, u32 kind, u32 index);
void FUN_00358e94(void *sprite, s16 x, s16 y);
void btlUiStartNumberPopup(u32 handle, s32 slot, s32 number, u32 unused, f32 x, f32 y, f32 z, s32 small, s32 alt, u8 anchored);

enum {
    kMarkerFadeOutKey = 12,     /* the opacity key that fades a popup or marker out */
    kMarkerTextureTable = 13,
    kMarkerCenterEntry = 0x416,
    kMarkerAppearAnim = 9
};

/* Steps the sixteen number popups and position markers: fades a finished one out, and starts the slot's next
 * queued request once the slot is free. */
void btlUiStepNumberPopupsAndMarkers(BtlUiA *ui)
{
    for (s32 i = 0; i < 16; i++) {
        if (ui->objD.numbers.slots[i].active != 0) {
            s32 digits;
            if (ui->objD.numbers.slots[i].number >= 10000) {
                digits = 5;
            } else if (ui->objD.numbers.slots[i].number >= 1000) {
                digits = 4;
            } else if (ui->objD.numbers.slots[i].number >= 100) {
                digits = 3;
            } else if (ui->objD.numbers.slots[i].number >= 10) {
                digits = 2;
            } else {
                digits = 1;
            }

            s32 j;
            if (ui->requestCounts.cursors[i] < ui->requestCounts.counts[i]) {
                /* Another number is waiting: cut this one short. */
                if (ui->objD.numbers.slots[i].digitTimers[0] > 10) {
                    ui->objD.numbers.slots[i].active = 0;
                }
            } else if (ui->objD.numbers.slots[i].digitTimers[0] >= 18) {
                if (uiSpriteGetMode(&ui->objD.numbers.slots[i].labelSprites[0]) != kMarkerFadeOutKey) {
                    for (j = 0; j < digits; j++) {
                        uiSpriteSetImageKeyframe(&ui->objD.numbers.slots[i].digitSprites[j], kMarkerFadeOutKey, 0);
                    }
                    uiSpriteSetImageKeyframe(&ui->objD.numbers.slots[i].labelSprites[0], kMarkerFadeOutKey, 0);
                    uiSpriteSetImageKeyframe(&ui->objD.numbers.slots[i].labelSprites[1], kMarkerFadeOutKey, 0);
                } else if (uiSpriteGetCompletionState(&ui->objD.numbers.slots[i].digitSprites[0]) != 0) {
                    ui->objD.numbers.slots[i].active = 0;
                }
                if (uiSpriteGetMode(&ui->objD.numbers.slots[i].digitSprites[0]) == kMarkerFadeOutKey &&
                    ui->objD.numbers.slots[i].digitSprites[0].alphaKeys != NULL &&
                    ui->objD.numbers.slots[i].digitSprites[0].alphaFrame >=
                        ui->objD.numbers.slots[i].digitSprites[0].alphaKeys->duration - 4) {
                    ui->objD.numbers.slots[i].disabled = 1;
                }
            }
            for (j = 0; j < digits; j++) {
                uiSpriteAdvanceAnimation(&ui->objD.numbers.slots[i].digitSprites[j], 1.0f);
                ui->objD.numbers.slots[i].digitTimers[j]++;
            }
            uiSpriteAdvanceAnimation(&ui->objD.numbers.slots[i].labelSprites[0], 1.0f);
            uiSpriteAdvanceAnimation(&ui->objD.numbers.slots[i].labelSprites[1], 1.0f);
        }
        if (ui->objD.numbers.slots[i].active == 0) {
            if (ui->requestCounts.cursors[i] < ui->requestCounts.counts[i]) {
                s32 cursor = ui->requestCounts.cursors[i];
                if (ui->objD.numberRequests.rows[i].entries[cursor].delay > 0) {
                    ui->objD.numberRequests.rows[i].entries[cursor].delay--;
                } else {
                    btlUiStartNumberPopup((u32)ui, i, ui->objD.numberRequests.rows[i].entries[cursor].number, cursor,
                                          ui->objD.numberRequests.rows[i].entries[cursor].x,
                                          ui->objD.numberRequests.rows[i].entries[cursor].y,
                                          ui->objD.numberRequests.rows[i].entries[cursor].z,
                                          ui->objD.numberRequests.rows[i].entries[cursor].small,
                                          ui->objD.numberRequests.rows[i].entries[cursor].alt,
                                          ui->objD.numberRequests.rows[i].entries[cursor].anchored);
                    ui->objD.numberRequests.rows[i].entries[cursor].active = 0;
                    ui->requestCounts.cursors[i]++;
                }
            } else {
                ui->requestCounts.cursors[i] = 0;
                ui->requestCounts.counts[i] = 0;
            }
        }

        if (ui->objD.positionMarkers.markers[i].active != 0) {
            if (ui->positionRequests.cursors[i] < ui->positionRequests.counts[i]) {
                /* Another marker is waiting: cut this one short. */
                if (ui->objD.positionMarkers.markers[i].timer > 10) {
                    ui->objD.positionMarkers.markers[i].active = 0;
                }
            } else if (btlScriptUnitHasFlags(btlGetMainState()) == 0 ? ui->objD.positionMarkers.markers[i].timer >= 18
                                                                     : ui->objD.positionMarkers.markers[i].timer >= 12) {
                if (uiSpriteGetMode(&ui->objD.positionMarkers.markers[i].sprite) != kMarkerFadeOutKey) {
                    uiSpriteSetImageKeyframe(&ui->objD.positionMarkers.markers[i].sprite, kMarkerFadeOutKey, 0);
                } else if (uiSpriteGetCompletionState(&ui->objD.positionMarkers.markers[i].sprite) != 0) {
                    ui->objD.positionMarkers.markers[i].timer = 0;
                    ui->objD.positionMarkers.markers[i].active = 0;
                }
            }
            if (ui->objD.positionMarkers.markers[i].timer >= 3) {
                uiSpriteAdvanceAnimation(&ui->objD.positionMarkers.markers[i].sprite, 1.0f);
            }
            ui->objD.positionMarkers.markers[i].timer++;
        }
        if (ui->objD.positionMarkers.markers[i].active == 0) {
            if (ui->positionRequests.cursors[i] < ui->positionRequests.counts[i]) {
                s32 cursor = ui->positionRequests.cursors[i];
                /* Starts the marker as btlUiStartNumberPopup starts a number, on the module's UI block and with the
                 * request read before the first call. The block scope is retail's: `pos` is at [sp], in the slots of
                 * btlUiStartNumberPopup's stack arguments (an inlined helper's local gets a slot of its own). */
                {
                    BtlUiA *shared = g_btlUi.ui;
                    f32 x = ui->positionRequests.rows[i].entries[cursor].x;
                    f32 y = ui->positionRequests.rows[i].entries[cursor].y;
                    f32 z = ui->positionRequests.rows[i].entries[cursor].z;
                    s8 anchored = ui->positionRequests.rows[i].entries[cursor].mode;
                    u8 kind = ui->positionRequests.rows[i].entries[cursor].flags;
                    s32 image = 0;
                    s32 secondaryImage = -1;
                    if (kind == 0) {
                        secondaryImage = 15;
                    }
                    if (kind == 1) {
                        image = 0x3EF;
                    }
                    if (kind == 2) {
                        image = 0x3F0;
                    }
                    if (kind == 3) {
                        image = 0x3F1;
                    }
                    if (secondaryImage > 0) {
                        pairSetSecondResetFirst(&shared->objD.positionMarkers.markers[i].sprite, secondaryImage);
                    } else {
                        pairSetFirstResetSecond(&shared->objD.positionMarkers.markers[i].sprite, image);
                    }

                    f32 pos[3];
                    pos[0] = x;
                    pos[1] = y;
                    pos[2] = z;
                    if (anchored != 0) {
                        cameraProjectToScreen(pos, 0, asdCameraGetSavedRenderPairs(), pos);
                    }
                    shared->objD.positionMarkers.markers[i].active = 1;
                    shared->objD.positionMarkers.markers[i].anchored = anchored;
                    shared->objD.positionMarkers.markers[i].timer = 0;
                    shared->objD.positionMarkers.markers[i].position.x = pos[0];
                    shared->objD.positionMarkers.markers[i].position.y = pos[1];
                    shared->objD.positionMarkers.markers[i].position.z = pos[2];
                    uiStoreTextureEntryCenter(&shared->objD.positionMarkers.markers[i].sprite, kMarkerTextureTable,
                                              kMarkerCenterEntry);
                    FUN_00358e94(&shared->objD.positionMarkers.markers[i].sprite,
                                 (s16)shared->objD.positionMarkers.markers[i].position.x,
                                 (s16)shared->objD.positionMarkers.markers[i].position.y);
                    uiSpriteSelectAnim(&shared->objD.positionMarkers.markers[i].sprite, kMarkerAppearAnim);
                }
                ui->positionRequests.rows[i].entries[cursor].active = 0;
                ui->positionRequests.cursors[i]++;
            } else {
                ui->positionRequests.cursors[i] = 0;
                ui->positionRequests.counts[i] = 0;
            }
        }
    }
}

} /* extern "C" */

