#include <stdio.h>
#include "status/StatusDown.h"
#include "status/StatusCamera.h"
#include "camp/Unite/UniteWork.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "text/TextDraw.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"
#include "code/Code0029.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "gamedata/SkillDataLookup.h"
#include "addon/AocSystem_Smt4.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

extern "C" {

void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
void FUN_002b6c34(s32 skill, s32 x, s32 y, s32 depth, s32 player, s32 highlight);
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 depth, const char *format, ...);

enum {
    STATUS_SPRITES = 0x1A,       /* the status screen's sprite table */
    COLOR_WHITE = 0xFFFFFFFF,
    COLOR_GREEN = 0x72E027FF,
    COLOR_RED = 0xDC0F14FF,
    COLOR_GRAY = 0x5A5A5AFF
};

/* Draws the status screen's skill row under the cursor at (x, y): the plate, the clipped shine, the
 * skill's name and icon and, unless the skill is `concealed`, its cost (its price when `priced`). */
void statusDownDrawSkillRow(s32 x, s32 y, u32 skill, s32 rowId, s32 player, s32 concealed, s32 priced, s32 highlight)
{
    char text[64];
    StatusDownState *work = g_statusDown;
    const TextureTableEntryIV *row = asdTMTexTableEntryAt(STATUS_SPRITES, rowId);
    ScrollSelection *list = &work->list;
    s32 cursor = listCursorGetRowIfUnblocked(list);
    u32 cost = 0;
    const TextureTableEntryIV *part;

    efctSetSpeed(vec2GetSpeed(&work->sprites[1]));
    texDrawCompositeSprite(2, STATUS_SPRITES, 8, row->x + x, row->y + y, 0xBF);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, STATUS_SPRITES, 0x41F, row->x + x, row->y + y, 0xC4);

    s32 plate = 0x420;
    if (work->unk418 == 0 && work->unk41C == 0 && work->unk420 == 0 && work->indicatorFirst == 0 &&
        work->indicatorSecond == 0 && work->unk414 >= 0) {
        plate = 0x421;
    }
    texDrawTableEntryAtStoredOrigin(2, STATUS_SPRITES, plate, row->x + x, row->y + y, 0xC4);

    /* The shine slides across the row, clipped to the plate. */
    part = asdTMTexTableEntryAt(STATUS_SPRITES, 0x420);
    renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 3);
    gxSetMirroredClippedScissor(row->x + part->x + x, row->y + part->y + y, part->placement->width,
                                part->placement->height, 1);
    s32 shineY = vec2GetYInt(&work->sprites[3]) + y + row->y;
    s32 shineX = vec2GetXInt(&work->sprites[3]) + x + row->x;
    texDrawTableEntryAtStoredOrigin(2, STATUS_SPRITES, 0x422, shineX, shineY, 0xC9);
    renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);

    u32 color = COLOR_WHITE;
    if (highlight == 1) {
        color = COLOR_GREEN;
    } else if (highlight == 2) {
        color = COLOR_RED;
    }
    if (work->track.state == 0xB || work->track.state == 0xE) {
        /* Picking a skill to replace: the picked row and the last row stay lit. */
        if (work->selection == cursor || (s32)gridNavigationGetItemCount(list) - 1 == cursor) {
            color = COLOR_GREEN;
        } else {
            color = COLOR_GRAY;
        }
    } else if (work->track.state != 6 && work->track.state != 9 && work->dirty != 0 && work->markedRow == cursor) {
        color = COLOR_GREEN;
    }

    part = asdTMTexTableEntryAt(STATUS_SPRITES, 0x42B);
    if (priced != 0 && skill == 0) {
        /* Full-width "New registration possible!" */
        sprintf(text, "\x82\x6D\x82\x85\x82\x97\x81\x40\x82\x92\x82\x85\x82\x87\x82\x89\x82\x93\x82\x94\x82\x92\x82\x81"
                      "\x82\x94\x82\x89\x82\x8F\x82\x8E\x81\x40\x82\x90\x82\x8F\x82\x93\x82\x93\x82\x89\x82\x82\x82\x8C"
                      "\x82\x85\x81\x49");
        color = COLOR_GRAY;
    } else if (concealed != 0) {
        /* Full-width "???" */
        sprintf(text, "\x81\x48\x81\x48\x81\x48");
    } else {
        sprintf(text, "%s", aocIndexValueOrDefault(skill));
    }
    textDrawString(row->x + part->x + x, row->y + part->y + y, 0.2f, 3, 0.0f, color, 1.0f, text);

    if (priced == 0 || skill != 0) {
        texDrawTableEntryAtStoredOrigin(2, STATUS_SPRITES, 0x425, row->x + x, row->y + y, 0xC4);
        part = asdTMTexTableEntryAt(STATUS_SPRITES, 0x42A);
        FUN_002b6c34((s16)skill, part->x + row->x + x, row->y + part->y + y, 0xC9, player, 0);
    }
    if (concealed != 0) {
        return;
    }
    if (priced != 0) {
        texDrawTableEntryAtStoredOrigin(2, STATUS_SPRITES, 0x522, row->x + x, row->y + y, 0xC4);
        part = asdTMTexTableEntryAt(STATUS_SPRITES, 0x52A);
        if (skill != 0) {
            FUN_002bdf94(0, row->x + part->x + x, row->y + part->y + y, 1, 8, 0xC9, "%d", FUN_0028d1f4(skill));
        } else {
            sprintf(text, "---");
            FUN_002bdf94(0, row->x + part->x + x, row->y + part->y + y, 1, 8, 0xC9, text);
        }
    } else {
        texDrawTableEntryAtStoredOrigin(2, STATUS_SPRITES, 0x423, row->x + x, row->y + y, 0xC4);
        if (work->selectedEntry < 0) {
            cost = skillGetDiscountedCost(skill, 1);
        } else if (FUN_0029ac94() != 6) {
            cost = appGetRemainingCapacity(skill);
        } else {
            const SkillDataRecord *record = skillDataFindById(skill);
            if (record != NULL) {
                cost = record->cost.baseCost;
            }
        }
        part = asdTMTexTableEntryAt(STATUS_SPRITES, 0x429);
        FUN_002bdf94(0, part->x + row->x + x, row->y + part->y + y, 1, 4, 0xC9, "%d", cost);
    }
}

} /* extern "C" */
