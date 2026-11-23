/* NON_MATCHING: the IV twin of Apocalypse's btlUiStepNumberPopupsAndMarkers, written from it and retail's listing
 * (173 raw / 103 shape rows, 334 rows against retail's 335); control flow, calls and fields are retail's. Left,
 * as in the twin: the number popup's arguments (retail reads small, alt, anchored and the number first, then the
 * three coordinates in one vldmia), the order of the marker request's loads (x and y as a pair, z on its own),
 * where the "no request left" arm of the number queue sits (retail: right after the popup start, sharing its last
 * byte store), the registers of `timer = 0; active = 0;` and of the marker's first stores, and r0/r1 in the
 * conversions for FUN_002963ec. */
#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlMainAccess.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiTexturePlacement.h"
#include "code/Code0015.h"

extern "C" {

s32 btlScriptUnitIsIncapacitated(BtlMainState *battle);
void cameraProjectToScreen(f32 *screen, s32 display, u32 camera, const f32 *world);
void FUN_002963ec(UiSpriteState *sprite, s16 x, s16 y);
void btlUiStartNumberPopup(u32 unused1, s32 slot, s32 value, u32 unused2, s32 negative, s32 kind, s32 stereo,
                  f32 x, f32 y, f32 z);

enum {
    kMarkerFadeOutKey = 12,     /* the opacity key that fades a popup or marker out */
    kMarkerTextureTable = 21,
    kMarkerCenterEntry = 0x416,
    kMarkerAppearAnim = 10
};

/* Steps the sixteen number popups and position markers: fades a finished one out, and starts the slot's next
 * queued request once the slot is free. */
void btlUiStepNumberPopupsAndMarkers(BtlUi *ui)
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
            if (ui->objD.numberRequests.cursors[i] < ui->objD.numberRequests.counts[i]) {
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
                uiSpriteAdvanceAnimation(&ui->objD.numbers.slots[i].digitSprites[j]);
                ui->objD.numbers.slots[i].digitTimers[j]++;
            }
            uiSpriteAdvanceAnimation(&ui->objD.numbers.slots[i].labelSprites[0]);
            uiSpriteAdvanceAnimation(&ui->objD.numbers.slots[i].labelSprites[1]);
        }
        if (ui->objD.numbers.slots[i].active == 0) {
            if (ui->objD.numberRequests.cursors[i] < ui->objD.numberRequests.counts[i]) {
                s32 cursor = ui->objD.numberRequests.cursors[i];
                if (ui->objD.numberRequests.rows[i].entries[cursor].delay > 0) {
                    ui->objD.numberRequests.rows[i].entries[cursor].delay--;
                } else {
                    btlUiStartNumberPopup((u32)ui, i, ui->objD.numberRequests.rows[i].entries[cursor].number, cursor,
                                          ui->objD.numberRequests.rows[i].entries[cursor].small,
                                          ui->objD.numberRequests.rows[i].entries[cursor].alt,
                                          ui->objD.numberRequests.rows[i].entries[cursor].anchored,
                                          ui->objD.numberRequests.rows[i].entries[cursor].x,
                                          ui->objD.numberRequests.rows[i].entries[cursor].y,
                                          ui->objD.numberRequests.rows[i].entries[cursor].z);
                    ui->objD.numberRequests.rows[i].entries[cursor].active = 0;
                    ui->objD.numberRequests.cursors[i]++;
                }
            } else {
                ui->objD.numberRequests.cursors[i] = 0;
                ui->objD.numberRequests.counts[i] = 0;
            }
        }

        if (ui->objD.positionMarkers.markers[i].active != 0) {
            if (ui->objD.positionRequests.cursors[i] < ui->objD.positionRequests.counts[i]) {
                /* Another marker is waiting: cut this one short. */
                if (ui->objD.positionMarkers.markers[i].timer > 10) {
                    ui->objD.positionMarkers.markers[i].active = 0;
                }
            } else if (btlScriptUnitIsIncapacitated(btlGetMainState()) == 0
                           ? ui->objD.positionMarkers.markers[i].timer >= 18
                           : ui->objD.positionMarkers.markers[i].timer >= 12) {
                if (uiSpriteGetMode(&ui->objD.positionMarkers.markers[i].sprite) != kMarkerFadeOutKey) {
                    uiSpriteSetImageKeyframe(&ui->objD.positionMarkers.markers[i].sprite, kMarkerFadeOutKey, 0);
                } else if (uiSpriteGetCompletionState(&ui->objD.positionMarkers.markers[i].sprite) != 0) {
                    ui->objD.positionMarkers.markers[i].timer = 0;
                    ui->objD.positionMarkers.markers[i].active = 0;
                }
            }
            if (ui->objD.positionMarkers.markers[i].timer >= 3) {
                uiSpriteAdvanceAnimation(&ui->objD.positionMarkers.markers[i].sprite);
            }
            ui->objD.positionMarkers.markers[i].timer++;
        }
        if (ui->objD.positionMarkers.markers[i].active == 0) {
            if (ui->objD.positionRequests.cursors[i] < ui->objD.positionRequests.counts[i]) {
                s32 cursor = ui->objD.positionRequests.cursors[i];
                /* Starts the marker as btlUiStartNumberPopup starts a number, on the module's UI block and with the
                 * request read before the first call. */
                {
                    BtlUi *shared = g_btlUi.ui;
                    f32 x = ui->objD.positionRequests.rows[i].entries[cursor].x;
                    f32 y = ui->objD.positionRequests.rows[i].entries[cursor].y;
                    f32 z = ui->objD.positionRequests.rows[i].entries[cursor].z;
                    s8 anchored = ui->objD.positionRequests.rows[i].entries[cursor].mode;
                    u8 kind = ui->objD.positionRequests.rows[i].entries[cursor].flags;

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
                    s32 image = 0;
                    if (kind == 0) {
                        image = 0x3EE;
                    } else if (kind == 1) {
                        image = 0x3EF;
                    } else if (kind == 2) {
                        image = 0x3F0;
                    } else if (kind == 3) {
                        image = 0x3F1;
                    }
                    pairSetFirstResetSecond(&shared->objD.positionMarkers.markers[i].sprite, image);
                    uiStoreTextureEntryCenter((PointDeltaWork *)&shared->objD.positionMarkers.markers[i].sprite, kMarkerTextureTable,
                                              kMarkerCenterEntry);
                    FUN_002963ec(&shared->objD.positionMarkers.markers[i].sprite,
                                 (s16)shared->objD.positionMarkers.markers[i].position.x,
                                 (s16)shared->objD.positionMarkers.markers[i].position.y);
                    spriteStartAnimationByIndex(&shared->objD.positionMarkers.markers[i].sprite, kMarkerAppearAnim);
                }
                ui->objD.positionRequests.rows[i].entries[cursor].active = 0;
                ui->objD.positionRequests.cursors[i]++;
            } else {
                ui->objD.positionRequests.cursors[i] = 0;
                ui->objD.positionRequests.counts[i] = 0;
            }
        }
    }
}

} /* extern "C" */
