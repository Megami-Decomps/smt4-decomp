/* NON_MATCHING: draws the camp skill list: the eleven visible rows (name, cost, icon, owner), the cursor row and the
 * "no skills" notice. Same calls, branches and instruction count as retail; what differs is allocation: retail's
 * frame is 184 bytes (here 176) with the list pointer, name, owner flag and colour spilled to [sp,#156..176] and the
 * text buffer at sp+16, it keeps the row's skill id in fp and the part entries in sl (here swapped), loads g_camp
 * before the first call's constants, and adds some of the x/y sums with their operands in the other order. */
#include "camp/CampState.h"
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
    s32 i;
    u32 skill;
    s32 unit;
    s32 player;
    TextureTableEntryIV *row;
    TextureTableEntryIV *part;
    const char *name;
    u32 color;
    s32 owner;
    StatBlock *record;

    texDrawCompositeSprite(2, 0x1d, 0, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x439, x, y, 0x6a);
    for (i = 0; i < 11; i++) {
        if ((s32)(resourceRunOperationIfUnblocked(grid) + i) >= (s32)FUN_0029ee54(grid)) {
            break;
        }
        skill = camp->skills[resourceRunOperationIfUnblocked(grid) + i].skill;
        unit = camp->skills[resourceRunOperationIfUnblocked(grid) + i].unit;
        player = unit < 0;
        row = asdTMTexTableEntryAt(0x1d, i + 0x40d);

        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x43a, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x43b, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x43c, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x43d, row->x + x, row->y + y, 0x6f);

        part = asdTMTexTableEntryAt(0x1d, 0x440);
        name = (const char *)aocIndexValueOrDefault(skill);
        if (name != NULL) {
            color = 0xff;
            if (FUN_00298848(skill, (s16)camp->skills[resourceRunOperationIfUnblocked(grid) + i].unit) && FUN_002987d8(unit, skill)) {
                owner = camp->skills[resourceRunOperationIfUnblocked(grid) + i].unit;
                if (owner < 0) {
                    if (gameGetPlayerData()->ailments & 2) {
                        color = 0x5a5a5aff;
                    }
                } else {
                    record = gameGetUnitRecord(owner);
                    if (record == NULL || (record->ailments & 2) || (record->ailments & 0x400) || (record->ailments & 4)) {
                        color = 0x5a5a5aff;
                    }
                }
            } else {
                color = 0x5a5a5aff;
            }
            textDrawString(2, color, name, row->x + part->x + x, row->y + part->y + y, 0.55f, 0.0f, 1.0f);
        }

        part = asdTMTexTableEntryAt(0x1d, 0x444);
        if (unit < 0) {
            textFormatBuffer(text, "%d", FUN_0029a9d4(skill, 1));
        } else {
            textFormatBuffer(text, "%d", appGetRemainingCapacity(skill));
        }
        FUN_002bdf94(0, row->x + part->x + x, part->y + row->y + y, 1, 4, 0x6f, text);

        part = asdTMTexTableEntryAt(0x1d, 0x43f);
        FUN_002b6c34((s16)skill, part->x + row->x + x, row->y + part->y + y, 0x6f, player, 0);

        part = asdTMTexTableEntryAt(0x1d, 0x43e);
        if (unit < 0) {
            drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
            uiDrawDemonIcon(-1, row->x + part->x + x, row->y + part->y + y, 0x6f, 0);
        } else {
            record = gameGetUnitRecord(unit);
            if (record != NULL) {
                drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
                uiDrawDemonIcon((s16)record->id, row->x + part->x + x, part->y + row->y + y, 0x6f, 0);
            }
        }
        gxResetColorQuadToWhite();
    }
    FUN_0028f870((u32)grid, x, y, 1);

    if (drawCursor && (s32)FUN_0029ee54(&camp->grids[3]) > 0) {
        skill = camp->skills[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)].skill;
        unit = camp->skills[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)].unit;
        player = unit < 0;
        row = asdTMTexTableEntryAt(0x1d, listCursorGetRowIfUnblocked(grid) + 0x42e);

        FUN_0028f694(row->x + x, row->y + y, camp->touch.rowRegions[listCursorGetRowIfUnblocked(grid)]);

        part = asdTMTexTableEntryAt(0x1d, 0x449);
        name = (const char *)aocIndexValueOrDefault(skill);
        if (name != NULL) {
            color = 0xffffffff;
            if (FUN_00298848(skill, (s16)camp->skills[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)].unit) &&
                FUN_002987d8(unit, skill)) {
                owner = camp->skills[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)].unit;
                if (owner < 0) {
                    if (gameGetPlayerData()->ailments & 2) {
                        color = 0x5a5a5aff;
                    }
                } else {
                    record = gameGetUnitRecord(owner);
                    if (record == NULL || (record->ailments & 2) || (record->ailments & 0x400) || (record->ailments & 4)) {
                        color = 0x5a5a5aff;
                    }
                }
            } else {
                color = 0x5a5a5aff;
            }
            textDrawString(3, color, name, row->x + part->x + x, row->y + part->y + y, 0.5f, 0.0f, 1.0f);
        }
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x446, row->x + x, row->y + y, 0x83);

        part = asdTMTexTableEntryAt(0x1d, 0x44d);
        if (unit < 0) {
            textFormatBuffer(text, "%d", FUN_0029a9d4(skill, 1));
        } else {
            textFormatBuffer(text, "%d", appGetRemainingCapacity(skill));
        }
        FUN_002bdf94(0, row->x + part->x + x, part->y + row->y + y, 1, 4, 0x83, text);
        texDrawTableEntryAtStoredOrigin(2, 0x1d, 0x445, row->x + x, row->y + y, 0x83);

        part = asdTMTexTableEntryAt(0x1d, 0x448);
        FUN_002b6c34((s16)skill, part->x + row->x + x, row->y + part->y + y, 0x88, player, 0);

        part = asdTMTexTableEntryAt(0x1d, 0x447);
        if (unit < 0) {
            drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
            uiDrawDemonIcon(-1, row->x + part->x + x, part->y + row->y + y, 0x88, 0);
        } else {
            record = gameGetUnitRecord(unit);
            if (record != NULL) {
                drawSetColorFromRGBA8(camp->categoryColors[unit + 1]);
                uiDrawDemonIcon((s16)record->id, row->x + part->x + x, part->y + row->y + y, 0x88, 0);
            }
        }
        gxResetColorQuadToWhite();
    }

    if ((s32)FUN_0029ee54(&camp->grids[3]) <= 0) {
        texDrawCompositeSprite(2, 0x1a, 0x1b, x, y, 0xdd);
        TextureTableEntryIV *box = asdTMTexTableEntryAt(0x1a, 0x544);
        /* "No skills are available." in full-width characters */
        textFormatBuffer(text, "\x82\x6d\x82\x8f\x81\x40\x82\x93\x82\x8b\x82\x89\x82\x8c\x82\x8c\x81\x40\x82\x93\x82\x81\x82\x92\x82\x85"
                               "\x81\x40\x82\x81\x82\x96\x82\x81\x82\x89\x82\x8c\x82\x81\x82\x82\x82\x8c\x82\x85\x81\x44");
        s32 width = fontMeasureLineAdvance(text, 2);
        textDrawString(2, 0xffffffff, text, x + (box->x + (box->placement->width - width) / 2), box->y + y, 0.12890625f, 0.0f, 1.0f);
    }
}

} /* extern "C" */
