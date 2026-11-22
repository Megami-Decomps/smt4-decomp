/* NON_MATCHING: same calls, branches, frame size and instruction count as retail (687 rows). What differs: the
 * spill slots (retail: record 152, pressed 164, colour 168, name 184; here 148, 156, 184, 176), the second
 * draw's depth constant (retail keeps 106 in r4 until the store, here r0 stores it at once), the registers of the
 * cursor row's name position sums, one operand order (the cursor row's player icon x), and the "no skills"
 * notice, where retail computes and converts x before y and here y comes first. */
#include <stdio.h>
#include "camp/CampStateA.h"
#include "camp/CampSkillList.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code003d_Smt4a.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "ui/AnimatedMessage.h"
#include "camp/CampMenuEntry.h"
#include "code/Code0022_Smt4a.h"
#include "code/Code0026_Smt4a.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002c_Smt4a.h"
#include "code/Code004b_Smt4a.h"

extern "C" {

/* Draws formatted text right-aligned in a field of `digits` characters. */
void numberFontDrawFormatted(s32 font, s32 x, s32 y, s32 align, s32 digits, s32 layer, const char *format, ...);
/* The list's scroll bar. */
void FUN_0023d150(GridNavigation *grid, s32 x, s32 y, s32 mode);
/* Whether `target` (a unit slot, negative for the player) can use the skill from the camp. */
u32 FUN_002684d0(s32 skillId, s32 target);
/* The skill's affinity icon. */
void FUN_00185e84(u32 id, s32 x, s32 y, s32 depth, s32 showUpgrade, s32 adjustment);
void statDrawClampedDelta(void *owner, u32 stat, s32 x, s32 y, s32 depth, s32 delta);
void drawSetColorFromRGBA8(u32 packed);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint);

/* Draws the camp's skill list page at (x, y): the eleven visible rows (name, MP cost, affinity icon, the cost's
 * change and the owner's icon), the scroll bar, the cursor row on top when `selected`, and the "no skills" notice
 * when the list is empty. A name is greyed when its owner cannot use the skill now. */
void campSkillListDraw(s32 x, s32 y, s32 selected, f32 alpha)
{
    char text[128];
    CampStateA *camp = g_camp;
    s32 pressed = 0;
    SlotRecordA *record = NULL;
    GridNavigation *grid = &camp->grids[3];
    const char *name;
    s32 player;

    texDrawCompositeSprite(2, 20, 0, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 20, 0x439, x, y, 0x6a);
    for (s32 i = 0; i < 11; i++) {
        if (resourceRunOperationIfUnblocked((Object *)grid) + i >= gridNavigationGetItemCount((Object *)grid)) {
            break;
        }
        u32 skill = camp->entries[resourceRunOperationIfUnblocked((Object *)grid) + i].id;
        s32 unit = camp->entries[resourceRunOperationIfUnblocked((Object *)grid) + i].unit;
        if (unit >= 0) {
            record = gameGetSlotRecord(unit);
        }
        player = unit < 0;
        TextureTableEntryIV *row = asdTMTexTableEntryAt(20, i + 0x40d);

        texDrawTableEntryAtStoredOrigin(2, 20, 0x43a, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x43b, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x43c, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x43d, row->x + x, row->y + y, 0x6f);

        TextureTableEntryIV *part = asdTMTexTableEntryAt(20, 0x440);
        name = (const char *)aocIndexValueOrDefault(skill);
        if (name != NULL) {
            u32 color = 0xffffffff;
            if (!(FUN_002684d0(skill, (s16)camp->entries[resourceRunOperationIfUnblocked((Object *)grid) + i].unit) &&
                  FUN_0022a030(unit, skill) &&
                  campSkillUserCanAct(&camp->entries[resourceRunOperationIfUnblocked((Object *)grid) + i]))) {
                color = 0x9b9b9bff;
            }
            textDrawString(row->x + part->x + x, row->y + part->y + y, 0.55f, 2, 0.0f, color, alpha, name);
        }

        part = asdTMTexTableEntryAt(20, 0x444);
        if (unit < 0) {
            sprintf(text, "%d", skillGetCostWithRankReduction(skill, 1));
        } else {
            sprintf(text, "%d", skillGetAdjustedCost(record, skill));
        }
        numberFontDrawFormatted(0, row->x + part->x + x, row->y + part->y + y, 1, 4, 0x6f, text);

        part = asdTMTexTableEntryAt(20, 0x43f);
        FUN_00185e84((s16)skill, row->x + part->x + x, row->y + part->y + y, 0x6f, player, 0);
        if (unit >= 0) {
            statDrawClampedDelta(record, (s16)skill, row->x + part->x + x, row->y + part->y + y, 0x88, 0);
        }

        part = asdTMTexTableEntryAt(20, 0x43e);
        if (unit < 0) {
            drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
            uiDrawItemOrStatusIcon(-1, row->x + part->x + x, row->y + part->y + y, 0x6f, 0);
        } else if (record != NULL) {
            drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
            uiDrawItemOrStatusIcon((s16)record->id, row->x + part->x + x, row->y + part->y + y, 0x6f, 0);
        }
        gxResetColorQuadToWhite();
    }
    FUN_0023d150(grid, x, y, 1);

    if (selected && gridNavigationGetItemCount((Object *)&camp->grids[3]) > 0) {
        u32 skill = camp->entries[resourceRunOperationIfUnblocked((Object *)grid) + listCursorGetRowIfUnblocked(grid)].id;
        s32 unit = camp->entries[resourceRunOperationIfUnblocked((Object *)grid) + listCursorGetRowIfUnblocked(grid)].unit;
        if (unit >= 0) {
            record = gameGetSlotRecord(unit);
        }
        player = unit < 0;
        s32 mode = recordGetModeForId(camp->touch.rowRegions[listCursorGetRowIfUnblocked(grid)]);
        u32 color = 0x9fe7ffff;
        if (mode == 1 || mode == 2 || mode == 6) {
            color = 0xf5ff9fff;
            pressed = 1;
        }
        TextureTableEntryIV *row = asdTMTexTableEntryAt(20, listCursorGetRowIfUnblocked(grid) + 0x42e);
        FUN_0026ec00(row->x + x, row->y + y, pressed);

        TextureTableEntryIV *part = asdTMTexTableEntryAt(20, 0x449);
        name = (const char *)aocIndexValueOrDefault(skill);
        if (name != NULL) {
            if (!(FUN_002684d0(skill, (s16)camp->entries[resourceRunOperationIfUnblocked((Object *)grid) +
                                                          listCursorGetRowIfUnblocked(grid)].unit) &&
                  FUN_0022a030(unit, skill) &&
                  campSkillUserCanAct(&camp->entries[resourceRunOperationIfUnblocked((Object *)grid) +
                                                     listCursorGetRowIfUnblocked(grid)]))) {
                color = 0x9b9b9bff;
            }
            textDrawString(row->x + part->x + x, row->y + part->y + y, 0.5f, 3, 0.0f, color, alpha, name);
        }
        texDrawTableEntryAtStoredOrigin(2, 20, 0x446, row->x + x, row->y + y, 0x83);

        part = asdTMTexTableEntryAt(20, 0x44d);
        if (unit < 0) {
            sprintf(text, "%d", skillGetCostWithRankReduction(skill, 1));
        } else {
            sprintf(text, "%d", skillGetAdjustedCost(record, skill));
        }
        numberFontDrawFormatted(0, row->x + part->x + x, row->y + part->y + y, 1, 4, 0x83, text);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x445, row->x + x, row->y + y, 0x83);

        part = asdTMTexTableEntryAt(20, 0x448);
        FUN_00185e84((s16)skill, row->x + part->x + x, row->y + part->y + y, 0x88, player, 0);
        if (unit >= 0) {
            statDrawClampedDelta(record, (s16)skill, row->x + part->x + x, part->y + row->y + y, 0x88, 0);
        }

        part = asdTMTexTableEntryAt(20, 0x447);
        if (unit < 0) {
            drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
            uiDrawItemOrStatusIcon(-1, part->x + row->x + x, row->y + part->y + y, 0x88, 0);
        } else {
            SlotRecordA *owner = gameGetSlotRecord(unit);
            if (owner != NULL) {
                drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
                uiDrawItemOrStatusIcon((s16)owner->id, row->x + part->x + x, row->y + part->y + y, 0x88, 0);
            }
        }
        gxResetColorQuadToWhite();
    }

    if (gridNavigationGetItemCount((Object *)&camp->grids[3]) <= 0) {
        texDrawCompositeSprite(2, 18, 0x1b, x, y, 0xdd);
        TextureTableEntryIV *box = asdTMTexTableEntryAt(18, 0x544);
        /* "No skills available." in full-width characters */
        sprintf(text, "\x82\x6d\x82\x8f\x81\x40\x82\x93\x82\x8b\x82\x89\x82\x8c\x82\x8c\x82\x93\x81\x40"
                      "\x82\x81\x82\x96\x82\x81\x82\x89\x82\x8c\x82\x81\x82\x82\x82\x8c\x82\x85\x81\x44");
        s32 width = fontMeasureLineAdvance(text, 2);
        textDrawString(box->x + (box->placement->width - width) / 2 + x, box->y + y, 0.12890625f, 2, 0.0f, 0xffffffff,
                       alpha, text);
    }
}

} /* extern "C" */
