/* NON_MATCHING: 34 lines; same instructions and frame (116 bytes, with the retail slots). Two differences: the entry
 * block is scheduled differently (this build zeroes fp and r9 before the vpush; retail after loading the panel's
 * origin, with the vpush right behind the push), and the hidden large panel's empty-frame draw shares its call with
 * the large layout's last overlay where retail shares the small layout's (so the two `nop`s after that call sit in
 * the other layout and the branches between them move by 8 bytes). */
#include "common.h"
#include <stdio.h>
#include "status/StatusStrip.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "shard/W6_W6Match6_CecMessageBox.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiControl.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess.h"
#include "battle/BtlEntry.h"
#include "code/Code0028.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "gfx/SpritePartDraw.h"
#include "util/BitsAndBytes.h"

extern "C" {

s32 btlLinkGetMaxHp(BtlUnitLink *record);
u8 isLowThreshold(s32 current, s16 max);
void drawSetColorFromRGBA8(u32 packed);
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
void gxResetColorQuadToWhite(void); // declcheck: local (ui/AnimatedMessage.h redeclares texDrawCompositeSprite)
s32 FUN_0025765c(s32 element, u32 phase);
/* Draws an HP gauge (and its pending change) from the sprites of texture table `table`. */
void FUN_002be90c(s32 value, s32 max, s32 change, u32 base, u32 table, u32 frame, u32 fill, u32 gain,
                  u32 loss, s32 x, s32 y, u32 layer, u32 flags);
/* Draws an MP gauge, likewise. */
void FUN_002888a8(s32 value, s32 max, s32 change, u32 base, u32 table, u32 fill, u32 gain, u32 loss,
                  s32 x, s32 y, u32 layer, u32 flags);
/* Draws a number string with digit sprites (`digits` wide). */
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 layer, const char *text);
void statusStripDrawAilments(StatusStrip *strip, s32 x, s32 y);

/* Draws one party member's status panel (large or small layout): frame, icon, level, HP/MP gauges and numbers,
 * ailment icons and the element tint. */
void statusStripDraw(StatusStrip *panel, s32 x, s32 y, f32 opacity)
{
    char name[32];
    s16 demon = 0;
    s32 level = 0;
    s32 mp = 0;
    s32 hp = 0;
    s32 maxHp = 0;
    s32 maxMp = 0;
    s32 boosted;
    char text[32];
    TextureTableEntryIV *entry;

    x += panel->originX;
    y += panel->originY;
    if (panel->member < 0) {
        PlayerDataIV *player = gameGetPlayerData();
        sprintf(name, "%s", gameGetPlayerName());
        level = player->level;
        demon = -1;
        hp = player->hp;
        mp = player->mp;
        maxHp = btlSourceGetMaxHp((const BtlUnitSource *)player);
        maxMp = gameGetPlayerData()->maxMp;
        boosted = FUN_00288ddc((s16)maxHp, demon);
    } else {
        StatBlock *unit = gameGetUnitRecord(panel->member);
        if (unit != NULL) {
            sprintf(name, "%s", FUN_002bd068(unit->id));
            level = unit->level;
            hp = unit->hp;
            mp = unit->mp;
            demon = (s16)unit->id;
            maxHp = btlLinkGetMaxHp((BtlUnitLink *)unit);
            maxMp = unit->maxMp;
            boosted = FUN_00288ddc((s16)maxHp, demon);
        }
    }

    efctSetSpeed(opacity);
    if (panel->isPlayerVariant) {
        if (panel->selected || panel->targeted) {
            texDrawTableEntryAtStoredOrigin(2, 0x19, 0x3e, x, y, 0x65);
        }
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, 0x19, 0x3d, x, y, 0x6a);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        if (panel->hidden) {
            if (panel->emptyFrame) {
                texDrawTableEntryAtStoredOrigin(2, 0x19, 0x4d, x, y, 0x6f);
            }
        } else {
            u32 color = 0xffffffff;
            if (!panel->dimmed) {
                u16 ailments;
                if (panel->member < 0) {
                    ailments = gameGetPlayerData()->ailments;
                } else {
                    ailments = gameGetUnitRecord(panel->member)->ailments;
                }
                s32 count = 0;
                for (s32 bit = 1; bit < 11; bit++) {
                    if (ailments & (1 << bit)) {
                        if (panel->cursor == count) {
                            color = categoryGetColor((s16)bit);
                            break;
                        }
                        count++;
                    }
                }
            }
            drawSetColorFromRGBA8(color);
            if (panel->dimmed) {
                efctSetSpeed(0.32f);
            }
            entry = asdTMTexTableEntryAt(0x19, 0x51);
            uiDrawDemonIcon(demon, entry->x + x, entry->y + y, 0x6a, 0);
            gxResetColorQuadToWhite();
            efctSetSpeed(opacity);
            texDrawTableEntryAtStoredOrigin(2, 0x19, 0x40, x, y, 0x6f);
            if (panel->unk28) {
                texDrawTableEntryAtStoredOrigin(2, 0x19, 0x95, x, y, 0x79);
            } else if (panel->dimmed) {
                texDrawTableEntryAtStoredOrigin(2, 0x19, 0x4b, x, y, 0x79);
            } else if (panel->unk24) {
                texDrawTableEntryAtStoredOrigin(2, 0x19, 0x4c, x, y, 0x79);
            } else if (panel->unk29) {
                texDrawTableEntryAtStoredOrigin(2, 0x19, 0x97, x, y, 0x79);
            } else {
                texDrawTableEntryAtStoredOrigin(2, 0x19, 0x3f, x, y, 0x6f);
                drawSetColorFromRGBA8(0x292929ff);
                sprintf(text, "%d", level);
                entry = asdTMTexTableEntryAt(0x19, 0x53);
                FUN_002bdf94(1, entry->x + x, entry->y + y, 1, 2, 0x79, text);
                gxResetColorQuadToWhite();
                texDrawCompositeSprite(2, 0x19, 2, x, y, 0x6f);
                FUN_002be90c(hp, maxHp, panel->hpChange, 0, 0x19, 0x44, 0x47, 0x45, 0x46, x, y, 0x74, 0);
                FUN_002888a8(mp, maxMp, panel->mpChange, 0, 0x19, 0x48, 0x4a, 0x49, x, y, 0x75, 0);
                statusStripDrawAilments(panel, x, y);
                if (panel->tinted) {
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                    drawSetColorFromRGBA8(FUN_0025765c(panel->tintElement, panel->tintPhase));
                    texDrawTableEntryAtStoredOrigin(2, 0x19, 0x7d1, x, y, 0x79);
                    gxResetColorQuadToWhite();
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                }
            }
        }
    } else if (!panel->hidden) {
        if (panel->unk28) {
            texDrawTableEntryAtStoredOrigin(2, 0x19, 0x94, x, y, 0x79);
        } else if (panel->dimmed) {
            texDrawTableEntryAtStoredOrigin(2, 0x19, 0xc, x, y, 0x79);
        } else if (panel->unk24) {
            texDrawTableEntryAtStoredOrigin(2, 0x19, 0xd, x, y, 0x79);
        } else if (panel->unk29) {
            texDrawTableEntryAtStoredOrigin(2, 0x19, 0x96, x, y, 0x79);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x19, 4, x, y, 0x6f);
            FUN_002be90c(hp, maxHp, panel->hpChange, 0, 0x19, 5, 8, 6, 7, x, y, 0x74, 0);
            FUN_002888a8(mp, maxMp, panel->mpChange, 0, 0x19, 9, 0xb, 10, x, y, 0x75, 0);
            if (isLowThreshold((s16)hp, (s16)maxHp)) {
                drawSetColorFromRGBA8(0xdc0f14ff);
            } else if (boosted) {
                drawSetColorFromRGBA8(0x6ef0ffff);
            }
            sprintf(text, "%d", hp);
            entry = asdTMTexTableEntryAt(0x19, 0x19);
            FUN_002bdf94(2, entry->x + x, entry->y + y, 1, 4, 0x79, text);
            gxResetColorQuadToWhite();
            sprintf(text, "%d", mp);
            entry = asdTMTexTableEntryAt(0x19, 0x1d);
            FUN_002bdf94(2, entry->x + x, entry->y + y, 1, 4, 0x79, text);
            statusStripDrawAilments(panel, x, y);
            if (panel->tinted) {
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                drawSetColorFromRGBA8(FUN_0025765c(panel->tintElement, panel->tintPhase));
                texDrawTableEntryAtStoredOrigin(2, 0x19, 2000, x, y, 0x79);
                gxResetColorQuadToWhite();
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
            }
        }
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
