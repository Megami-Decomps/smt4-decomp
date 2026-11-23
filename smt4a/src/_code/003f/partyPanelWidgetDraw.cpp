/* NON_MATCHING: the branches, calls and constants match; 157 rows of allocation remain. Retail's frame is 8 bytes
 * smaller with the name above the level text and its spilled values elsewhere, it keeps HP, MP and max HP in
 * r8, fp and r9 (built: r9, r8, fp), loads the origin pair with one ldrd, reloads the id (-1) it passes for
 * the protagonist where this build passes the constant, and orders the bar calls' stack arguments differently. */
#include "shard/W6_W6Match6_PartyPanel.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "util/BitsAndBytes.h"
#include "addon/LookupRecord.h"
#include "camp/RenderCtxA.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess.h"
#include "ui/UiControl.h"
#include "ui/AnimatedMessage.h"
#include "gamedata/SaveSlotRecord.h"
#include "code/Code0025_Smt4a.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

SlotRecordA *btlMainGetUnk14(void);
s32 btlUnitMaxHp(SlotRecordA *unit);
s32 btlPlayerMaxHp(PlayerDataA *player);
u32 heldAmountLessThan(s32 amount, u32 id);
u8 valueAtMostFifthOfTotal(s32 value, s32 total);
void drawSetColorFromRGBA8(u32 packed);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint);
void numberFontDrawFormatted(s32 font, s32 x, s32 y, s32 align, s32 digits, s32 z, const char *text);
void FUN_00183788(s32 value, s32 maximum, s32 shown, s32 mode, u32 table, u32 frame, u32 fill, u32 low, u32 change,
                  s32 x, s32 y, s32 z, s32 flags);
void FUN_0025e704(s32 value, s32 maximum, s32 shown, s32 mode, u32 table, u32 frame, u32 fill, u32 change, s32 x,
                  s32 y, s32 z, s32 flags);
s32 FUN_003a6404(s32 kind, s32 level);
void partyPanelWidgetDrawAilments(PartyPanelWidget *widget, s32 x, s32 y);
void FUN_003f3d90(void *context, u32 x, u32 y, s32 enabled, f32 speed);

enum {
    PANEL_SPRITES = 0x11,
    PANEL_TOP_LAYER = 0x79
};

/* Starts the widget's tint overlay: the overlay blend and the colour of its tint kind and level. */
static __inline void beginTintOverlay(PartyPanelWidget *widget, f32 alpha)
{
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    drawSetColorFromRGBA8(FUN_003a6404(widget->tintKind, widget->tintLevel));
    efctSetSpeed(alpha);
}

/* Back to white and the normal blend. */
static __inline void endTintOverlay(void)
{
    gxResetColorQuadToWhite();
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
}

/* Draws a party panel widget at (x, y): the large card of the selected row (name icon, level, HP and
 * MP bars) or the small one (bars and numbers), each with its ailment icons, marks, tint overlay and
 * effects, or the plate that stands for an empty, tagged, marked or unavailable slot. */
void partyPanelWidgetDraw(PartyPanelWidget *widget, s32 x, s32 y, f32 alpha)
{
    s32 hp = 0;
    s32 mp = 0;
    s32 id = 0;
    s32 level = 0;
    s32 maxHp = 0;
    char name[64];

    x = widget->origin.x + x;
    y = y + widget->origin.y;

    s32 maxMp = 0;
    u32 effects = 0;
    u32 hpBelowMaximum;

    if (widget->slot == -1) {
        PlayerDataA *player = gameGetPlayerData();

        __2sprintf(name, "%s", gameGetPlayerName());
        id = -1;
        level = player->level;
        hp = player->hp;
        mp = player->mp;
        maxHp = btlPlayerMaxHp(player);
        maxMp = gameGetPlayerData()->maxMp;
        hpBelowMaximum = heldAmountLessThan((s16)maxHp, id);
    } else {
        SlotRecordA *unit;

        if (widget->slot == -2) {
            unit = btlMainGetUnk14();
        } else {
            unit = gameGetSlotRecord(widget->slot);
        }
        if (unit != NULL) {
            __2sprintf(name, "%s", table01RecordLookupForContent(unit->id));
            id = (s16)unit->id;
            level = unit->level;
            hp = unit->hp;
            mp = unit->mp;
            maxHp = btlUnitMaxHp(unit);
            maxMp = unit->maxMp;
            if (widget->slot == -2) {
                hpBelowMaximum = maxHp > hp;
            } else {
                hpBelowMaximum = heldAmountLessThan((s16)maxHp, id);
            }
            effects = FUN_0025e684(reinterpret_cast<Holder *>(unit));
        }
    }

    efctSetSpeed(alpha);
    if (widget->largeCard != 0) {
        /* The large card. */
        if (widget->transitionActive != 0 || widget->transitionPending != 0) {
            texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x3e, x, y, 0x65);
        }
        texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x3d, x, y, 0x6a);
        if (widget->empty != 0) {
            if (widget->isCharacter != 0) {
                texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x4d, x, y, 0x6f);
            }
        } else {
            /* The icon takes the colour of the ailment the strip is showing. */
            u32 color = 0xffffffff;
            u32 ailments = 0;

            if (widget->hasTag == 0) {
                if (widget->slot == -1) {
                    ailments = gameGetPlayerData()->ailments;
                } else if (widget->slot == -2) {
                    SlotRecordA *unit = btlMainGetUnk14();
                    if (unit != NULL) {
                        ailments = unit->ailments;
                    }
                } else if (widget->slot >= 0) {
                    ailments = gameGetSlotRecord(widget->slot)->ailments;
                }
                s32 count = 0;
                for (s32 bit = 1; bit < 14; bit++) {
                    if (bit == 2) {
                        bit = 3;
                    }
                    if ((ailments & (1 << bit)) != 0) {
                        if (widget->ailmentCursor == count) {
                            color = markerKindGetColor((s16)bit);
                            break;
                        }
                        count++;
                    }
                }
            }
            drawSetColorFromRGBA8(color);
            if (widget->hasTag != 0) {
                efctSetSpeed(alpha * 0.32f);
            }
            TextureTableEntryIV *icon = asdTMTexTableEntryAt(PANEL_SPRITES, 0x51);
            uiDrawItemOrStatusIcon(id, icon->x + x, icon->y + y, 0x6a, 0);
            gxResetColorQuadToWhite();
            efctSetSpeed(alpha);
            texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x40, x, y, 0x6f);
            if (widget->marked != 0) {
                texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x95, x, y, PANEL_TOP_LAYER);
            } else if (widget->hasTag != 0) {
                texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x4b, x, y, PANEL_TOP_LAYER);
            } else if (widget->flagA != 0) {
                texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x4c, x, y, PANEL_TOP_LAYER);
                if (widget->flagB != 0) {
                    TextureTableEntryIV *mark = asdTMTexTableEntryAt(PANEL_SPRITES, 0xc5);
                    texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0xbb, mark->x + x, mark->y + y, PANEL_TOP_LAYER);
                }
            } else {
                texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x3f, x, y, 0x6f);
                drawSetColorFromRGBA8(0x292929ff);
                efctSetSpeed(alpha);
                char number[76];
                __2sprintf(number, "%d", level);
                if (level > 99) {
                    TextureTableEntryIV *slot = asdTMTexTableEntryAt(PANEL_SPRITES, 0x80);
                    numberFontDrawFormatted(1, slot->x + x, slot->y + y, 1, 3, PANEL_TOP_LAYER, number);
                } else {
                    TextureTableEntryIV *slot = asdTMTexTableEntryAt(PANEL_SPRITES, 0x53);
                    numberFontDrawFormatted(1, slot->x + x, slot->y + y, 1, 2, PANEL_TOP_LAYER, number);
                }
                gxResetColorQuadToWhite();
                efctSetSpeed(alpha);
                texDrawCompositeSprite(2, PANEL_SPRITES, 2, x, y, 0x6f);
                FUN_00183788(hp, maxHp, widget->result, 0, PANEL_SPRITES, 0x44, 0x47, 0x45, 0x46, x, y, 0x74, 0);
                FUN_0025e704(mp, maxMp, widget->value, 0, PANEL_SPRITES, 0x48, 0x4a, 0x49, x, y, 0x75, 0);
                partyPanelWidgetDrawAilments(widget, x, y);
                if (widget->flagB != 0) {
                    TextureTableEntryIV *mark = asdTMTexTableEntryAt(PANEL_SPRITES, 0xbd);
                    texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0xbb, mark->x + x, mark->y + y, PANEL_TOP_LAYER);
                }
                if (widget->tinted != 0) {
                    beginTintOverlay(widget, alpha);
                    texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x7d1, x, y, PANEL_TOP_LAYER);
                    endTintOverlay();
                }
                efctSetSpeed(alpha);
                TextureTableEntryIV *origin = asdTMTexTableEntryAt(PANEL_SPRITES, 0xb7);
                FUN_003f3d90(widget, origin->x + x, origin->y + y, effects, alpha * 1.6f);
            }
        }
    } else if (widget->empty == 0) {
        /* The small card. */
        efctSetSpeed(alpha);
        if (widget->marked != 0) {
            texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x94, x, y, PANEL_TOP_LAYER);
        } else if (widget->hasTag != 0) {
            texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0xc, x, y, PANEL_TOP_LAYER);
        } else if (widget->flagA != 0) {
            texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0xd, x, y, PANEL_TOP_LAYER);
            if (widget->flagB != 0) {
                TextureTableEntryIV *mark = asdTMTexTableEntryAt(PANEL_SPRITES, 0xbc);
                texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0xbb, mark->x + x, mark->y + y, PANEL_TOP_LAYER);
            }
        } else {
            texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 4, x, y, 0x6f);
            texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x75, x, y, 0x74);
            texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0x76, x, y, 0x75);
            FUN_00183788(hp, maxHp, widget->result, 0, PANEL_SPRITES, 5, 8, 6, 7, x, y, 0x74, 0);
            FUN_0025e704(mp, maxMp, widget->value, 0, PANEL_SPRITES, 9, 0xb, 10, x, y, 0x75, 0);
            /* HP in red at a fifth or less, in blue below the maximum. */
            if (valueAtMostFifthOfTotal(hp, maxHp) != 0) {
                drawSetColorFromRGBA8(0xdc0f14ff);
            } else if (hpBelowMaximum != 0) {
                drawSetColorFromRGBA8(0x6ef0ffff);
            }
            efctSetSpeed(alpha);
            char number[76];
            if (hp > 9999) {
                __2sprintf(number, "%d", 9999);
            } else {
                __2sprintf(number, "%d", hp);
            }
            TextureTableEntryIV *hpSlot = asdTMTexTableEntryAt(PANEL_SPRITES, 0x19);
            numberFontDrawFormatted(10, hpSlot->x + x, hpSlot->y + y, 1, 4, PANEL_TOP_LAYER, number);
            gxResetColorQuadToWhite();
            s32 shownMp = 9999;
            if (mp <= 9999) {
                shownMp = mp;
            }
            __2sprintf(number, "%d", shownMp);
            TextureTableEntryIV *mpSlot = asdTMTexTableEntryAt(PANEL_SPRITES, 0x1d);
            numberFontDrawFormatted(10, mpSlot->x + x, mpSlot->y + y, 1, 4, PANEL_TOP_LAYER, number);
            partyPanelWidgetDrawAilments(widget, x, y);
            if (widget->flagB != 0) {
                TextureTableEntryIV *mark = asdTMTexTableEntryAt(PANEL_SPRITES, 0xbc);
                texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 0xbb, mark->x + x, mark->y + y, PANEL_TOP_LAYER);
            }
            if (widget->tinted != 0) {
                beginTintOverlay(widget, alpha);
                texDrawTableEntryAtStoredOrigin(2, PANEL_SPRITES, 2000, x, y, PANEL_TOP_LAYER);
                endTintOverlay();
            }
            efctSetSpeed(alpha);
            TextureTableEntryIV *origin = asdTMTexTableEntryAt(PANEL_SPRITES, 0xb6);
            FUN_003f3d90(widget, origin->x + x, origin->y + y, effects, alpha * 1.6f);
        }
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
