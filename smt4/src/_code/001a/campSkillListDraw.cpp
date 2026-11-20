/* NON_MATCHING: draws the camp skill list: the eleven visible rows (name, cost, icon, owner), the cursor row and the
 * "no skills" notice. Same calls, branches and 184-byte frame as retail. What differs: the spilled list pointer,
 * name and owner flag sit four bytes lower (152, 164, 168 for retail's 156, 168, 172), the cursor row keeps its
 * name part in sl and the colour in r9 (retail the other way round), a few x/y sums load or add their operands
 * in the other order, and the "no skills" notice converts y before x, with one more row than retail. */
#include <stdio.h>
#include "camp/CampState.h"
#include "camp/CampSkillList.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "code/Code0028.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gfx/SpritePartDraw.h"
#include "text/TextDraw.h"
#include "status/StatusCamera.h"
#include "addon/AocSystem_Smt4.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
void FUN_0028f870(u32 list, s32 x, s32 y, s32 wide);
s32 FUN_002987d8(s32 unit, s32 skill);
s32 FUN_00298848(u32 skill, s32 unit);
void FUN_002b6c34(s32 skill, s32 x, s32 y, s32 depth, s32 player, s32 highlight);
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 depth, const char *text);
void drawSetColorFromRGBA8(u32 packed);
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
void gxResetColorQuadToWhite(void); // declcheck: local (ui/AnimatedMessage.h redeclares texDrawCompositeSprite)

void campSkillListDraw(s32 x, s32 y, s32 drawCursor)
{
    char text[128];
    CampState *camp = g_camp;
    GridNavigation *grid = &camp->grids[3];
    const char *name;
    s32 player;

    texDrawCompositeSprite(2, 0x1d, 0, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x439, x, y, 0x6a);
    for (s32 i = 0; i < 11; i++) {
        if ((s32)(resourceRunOperationIfUnblocked(grid) + i) >= (s32)gridNavigationGetItemCount(grid)) {
            break;
        }
        u32 skill = camp->skills[resourceRunOperationIfUnblocked(grid) + i].skill;
        s32 unit = camp->skills[resourceRunOperationIfUnblocked(grid) + i].unit;
        player = unit < 0;
        TextureTableEntryIV *row = asdTMTexTableEntryAt(0x1d, i + 0x40d);

        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x43a, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x43b, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x43c, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x43d, row->x + x, row->y + y, 0x6f);

        TextureTableEntryIV *part = asdTMTexTableEntryAt(0x1d, 0x440);
        name = (const char *)aocIndexValueOrDefault(skill);
        if (name != NULL) {
            u32 color = 0xff;
            if (!(FUN_00298848(skill, (s16)camp->skills[resourceRunOperationIfUnblocked(grid) + i].unit) && FUN_002987d8(unit, skill) &&
                  campSkillUserCanAct(&camp->skills[resourceRunOperationIfUnblocked(grid) + i]))) {
                color = 0x5a5a5aff;
            }
            textDrawString(row->x + part->x + x, row->y + part->y + y, 0.55f, 2, 0.0f, color, 1.0f, name);
        }

        part = asdTMTexTableEntryAt(0x1d, 0x444);
        if (unit < 0) {
            sprintf(text, "%d", skillGetDiscountedCost(skill, 1));
        } else {
            sprintf(text, "%d", appGetRemainingCapacity(skill));
        }
        FUN_002bdf94(0, row->x + part->x + x, part->y + row->y + y, 1, 4, 0x6f, text);

        part = asdTMTexTableEntryAt(0x1d, 0x43f);
        FUN_002b6c34((s16)skill, part->x + row->x + x, row->y + part->y + y, 0x6f, player, 0);

        part = asdTMTexTableEntryAt(0x1d, 0x43e);
        if (unit < 0) {
            drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
            uiDrawDemonIcon(-1, row->x + part->x + x, row->y + part->y + y, 0x6f, 0);
        } else {
            StatBlock *record = gameGetUnitRecord(unit);
            if (record != NULL) {
                drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
                uiDrawDemonIcon((s16)record->id, row->x + part->x + x, row->y + part->y + y, 0x6f, 0);
            }
        }
        gxResetColorQuadToWhite();
    }
    FUN_0028f870((u32)grid, x, y, 1);

    if (drawCursor && (s32)gridNavigationGetItemCount(&camp->grids[3]) > 0) {
        u32 skill = camp->skills[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)].skill;
        s32 unit = camp->skills[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)].unit;
        player = unit < 0;
        TextureTableEntryIV *row = asdTMTexTableEntryAt(0x1d, listCursorGetRowIfUnblocked(grid) + 0x42e);

        FUN_0028f694(row->x + x, row->y + y, camp->touch.rowRegions[listCursorGetRowIfUnblocked(grid)]);

        TextureTableEntryIV *part = asdTMTexTableEntryAt(0x1d, 0x449);
        name = (const char *)aocIndexValueOrDefault(skill);
        if (name != NULL) {
            u32 color = 0xffffffff;
            if (!(FUN_00298848(skill, (s16)camp->skills[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)].unit) &&
                FUN_002987d8(unit, skill) &&
                  campSkillUserCanAct(&camp->skills[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)]))) {
                color = 0x5a5a5aff;
            }
            textDrawString(row->x + part->x + x, row->y + part->y + y, 0.5f, 3, 0.0f, color, 1.0f, name);
        }
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x446, row->x + x, row->y + y, 0x83);

        part = asdTMTexTableEntryAt(0x1d, 0x44d);
        if (unit < 0) {
            sprintf(text, "%d", skillGetDiscountedCost(skill, 1));
        } else {
            sprintf(text, "%d", appGetRemainingCapacity(skill));
        }
        FUN_002bdf94(0, row->x + part->x + x, part->y + row->y + y, 1, 4, 0x83, text);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x445, row->x + x, row->y + y, 0x83);

        part = asdTMTexTableEntryAt(0x1d, 0x448);
        FUN_002b6c34((s16)skill, part->x + row->x + x, row->y + part->y + y, 0x88, player, 0);

        part = asdTMTexTableEntryAt(0x1d, 0x447);
        if (unit < 0) {
            drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
            uiDrawDemonIcon(-1, part->x + row->x + x, row->y + part->y + y, 0x88, 0);
        } else {
            StatBlock *record = gameGetUnitRecord(unit);
            if (record != NULL) {
                drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
                uiDrawDemonIcon((s16)record->id, row->x + part->x + x, row->y + part->y + y, 0x88, 0);
            }
        }
        gxResetColorQuadToWhite();
    }

    if ((s32)gridNavigationGetItemCount(&camp->grids[3]) <= 0) {
        texDrawCompositeSprite(2, 0x1a, 0x1b, x, y, 0xdd);
        TextureTableEntryIV *box = asdTMTexTableEntryAt(0x1a, 0x544);
        /* "No skills are available." in full-width characters */
        sprintf(text, "\x82\x6d\x82\x8f\x81\x40\x82\x93\x82\x8b\x82\x89\x82\x8c\x82\x8c\x82\x93\x81\x40\x82\x81\x82\x92\x82\x85"
                               "\x81\x40\x82\x81\x82\x96\x82\x81\x82\x89\x82\x8c\x82\x81\x82\x82\x82\x8c\x82\x85\x81\x44");
        s32 width = fontMeasureLineAdvance(text, 2);
        textDrawString(x + (box->x + (box->placement->width - width) / 2), box->y + y, 0.12890625f, 2, 0.0f, 0xffffffff, 1.0f, text);
    }
}

} /* extern "C" */
