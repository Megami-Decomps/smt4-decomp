/* NON_MATCHING: same calls, constants and branches as retail; 144 raw / 146 shape rows differ. The saved record
 * and the text sit where retail has them ([sp,#16], [sp,#72]), but retail's frame is 172 bytes with the sources
 * at [sp,#136] and its three spilled values at [sp,#68], [sp,#160] and [sp,#164]; this build leaves 16 unused
 * bytes after the text and its frame is 196. The two scissor changes hold the new state and the previous one in
 * r0/r1 the other way round, the blend-state changes inside the ingredient loop take r1/r2 for the slot address
 * and the previous state the other way round, the list-value compare and the centred race label schedule their
 * loads differently, and the ingredient colour stores its white before the compare. */
#include "common.h"
#include <stdio.h>
#include "camp/CampStateQueries.h"
#include "camp/RenderCtxTitle.h"
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UniteDraw.h"
#include "code/Code001c_Smt4.h"
#include "code/Code0029_VariantB.h"
#include "gamedata/DataTableAccess_Smt4.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantB_RecordValue.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SavedUnitInitialization.h"
#include "gamedata/SaveSlotTableIV.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "shard/W6_W6Match3_ContentWordList.h"
#include "shard/W6_W6Match3_RotationY.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 depth, const char *format, ...);
void drawSetColorFromRGBA8(u32 packed);
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
u8 ifTouchGetSelectionModeForRegion(int id);
u32 fusionPlayerLevelCapGet(void);
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
u32 partyClassifyRequestedSources(UniteCtrl *ctrl, u32 listId, u16 *sources);

enum {
    UNITE_TEXTURES = 0x24   /* the fusion screen's texture table */
};

/* text and number colours (RGBA) */
enum {
    TEXT_WHITE = 0xFFFFFFFF,
    TEXT_GREY = 0x5A5A5AFF,     /* cannot be made, or already in the party */
    TEXT_RED = 0xDC0F14FF,      /* above the level cap, or too expensive */
    TEXT_GREEN = 0x72E027FF,    /* under the cursor */
    TEXT_ORANGE = 0xF49800FF    /* race names */
};

/* Draws the special fusion panel at (x, y): the result of the recipe the list cursor is on (name, race
 * and level, greyed when it cannot be made), the "fuse" button with its scrolling highlight and the
 * price, then one row for each ingredient (name or "???", race, level, icon), with the cursor on the
 * result or on one of the ingredients. */
void uniteDrawSpecialFusionPanel(s32 x, s32 y)
{
    UniteWork *work = (UniteWork *)uniteGetWork();
    SavedUnitInitialization saved;
    char text[64];
    u16 sources[12];
    u32 recordId;
    s32 unknown;
    s32 i;

    if (work == NULL) {
        return;
    }

    /* the data table 54 record of the list row under the cursor */
    recordId = 0;
    unknown = 0;
    for (i = 0; i < work->specialFusionIV.recordCount; i++) {
        const Entry0035dd74 *record = (const Entry0035dd74 *)dataTable54FindById(work->specialFusionIV.recordIds[i]);

        if (work->specialFusionIV.listValues[resourceRunOperationIfUnblocked(&work->specialFusionIV.list) +
                                             listCursorGetRowIfUnblocked(&work->specialFusionIV.list)] == record->value) {
            recordId = work->specialFusionIV.recordIds[i];
            break;
        }
    }
    if (partyClassifyRequestedSources(work->sprites.ctrl, recordId, sources) == 0) {
        unknown = 1;
    }

    texDrawCompositeSprite(2, UNITE_TEXTURES, 6, x, y, 101);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 331, x, y, 106);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 332, x, y, 106);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 333, x, y, 106);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 79, x, y, 106);

    /* the result: name, race and level */
    NkmBaseRecord *demon = nkmBaseGetRecord(work->specialFusionIV.recipe.resultId);
    TextureTableEntryIV *part = asdTMTexTableEntryAt(UNITE_TEXTURES, 77);
    u32 nameColor = TEXT_WHITE;
    u32 levelColor = TEXT_WHITE;
    if (demon->level > fusionPlayerLevelCapGet()) {
        nameColor = TEXT_GREY;
        levelColor = TEXT_RED;
    } else if (partyMemberFindById(demon->id) != 0) {
        nameColor = TEXT_GREY;
    } else if (work->specialFusionIV.recipeCursor == 0) {
        nameColor = TEXT_GREEN;
    }
    if (unknown) {
        sprintf(text, "???");
    } else {
        sprintf(text, "%s", FUN_002bd068(demon->id));
    }
    textDrawString(part->x + x, part->y + y, 0.0f, 2, 0.0f, nameColor, 1.0f, text);
    part = asdTMTexTableEntryAt(UNITE_TEXTURES, 78);
    sprintf(text, "%s", demonGetRaceLabel(demon->id, 0));
    textDrawString(part->x + x, part->y + y, 0.0f, 2, 0.0f, TEXT_ORANGE, 1.0f, text);
    part = asdTMTexTableEntryAt(UNITE_TEXTURES, 81);
    drawSetColorFromRGBA8(levelColor);
    FUN_002bdf94(0, part->x + x, part->y + y, 1, 2, 111, "%d", demon->level);
    gxResetColorQuadToWhite();

    /* the cursor on the result */
    if (work->specialFusionIV.recipeCursor == 0) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 489, (s32)work->transition.frame / 4 % 3 + x, y, 121);
        efctSetSpeed(vec2GetSpeed(&work->sprites.fade));
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 490, x, y, 121);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(1.0f);
    }

    /* the fuse button */
    efctSetSpeed(vec2GetSpeed(&work->sprites.fade));
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 334, x, y, 121);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 335, x, y, 121);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 336, x, y, 121);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 337, x, y, 123);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 338, x, y, 124);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 339, x, y, 125);
    u8 touch = ifTouchGetSelectionModeForRegion(work->touchIV.rowRegions[0]);
    if (touch == 1 || touch == 2 || touch == 6) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 341, x, y, 126);
    } else {
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 340, x, y, 126);
    }

    /* The highlight scrolls inside the button's rectangle. */
    TextureTableEntryIV *clip = asdTMTexTableEntryAt(UNITE_TEXTURES, 340);
    renderStackSetCounted(g_titleScene->stacks + RENDER_STACK_SCISSOR, 3);
    gxSetMirroredClippedScissor(clip->x + x, clip->y + y, clip->placement->width, clip->placement->height, 1);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 342, vec2GetXInt(&work->sprites.slide) + x,
                                    vec2GetYInt(&work->sprites.slide) + y, 131);
    renderStackSetCounted(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);

    /* the price, red when the player cannot pay it */
    part = asdTMTexTableEntryAt(UNITE_TEXTURES, 354);
    s32 price = FUN_001ce224(&work->specialFusionIV.recipe);
    if (gameGetSlotTable()->money < price) {
        drawSetColorFromRGBA8(TEXT_RED);
    } else {
        drawSetColorFromRGBA8(TEXT_WHITE);
    }
    FUN_002bdf94(0, part->x + x, part->y + y, 1, 8, 141, "%d", FUN_001ce224(&work->specialFusionIV.recipe));
    gxResetColorQuadToWhite();

    /* the ingredients */
    for (i = 0; i < work->specialFusionIV.ingredientCount; i++) {
        TextureTableEntryIV *row = asdTMTexTableEntryAt(UNITE_TEXTURES, i + 343);
        NkmBaseRecord *ingredient = nkmBaseGetRecord(work->specialFusionIV.recipe.ids[i]);

        if ((i & 1) == 0) {
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 307, row->x + x, row->y + y, 131);
        } else {
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 308, row->x + x, row->y + y, 131);
        }
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 309, row->x + x, row->y + y, 136);

        part = asdTMTexTableEntryAt(UNITE_TEXTURES, 313);
        u32 color = TEXT_WHITE;
        if (work->specialFusionIV.recipeCursor == i + 1) {
            color = TEXT_GREEN;
        }
        if (work->specialFusionIV.recipe.kinds[i] == 0) {
            sprintf(text, "???");
        } else {
            sprintf(text, "%s", FUN_002bd068(ingredient->id));
        }
        textDrawString(part->x + row->x + x, row->y + part->y + y, 0.0f, 2, 0.0f, color, 1.0f, text);

        part = asdTMTexTableEntryAt(UNITE_TEXTURES, 314);
        sprintf(text, "%s", demonGetRaceLabel(ingredient->id, 0));
        s32 width = fontMeasureLineAdvance(text, 2);
        textDrawString(x + (part->placement->width - width) / 2 + (row->x + part->x), row->y + part->y + y, 0.0f, 2,
                       0.0f, TEXT_ORANGE, 1.0f, text);

        /* the level: the owned or registered demon's, else the base level */
        part = asdTMTexTableEntryAt(UNITE_TEXTURES, 312);
        if (work->specialFusionIV.recipe.kinds[i] == 0) {
            FUN_002bdf94(0, part->x + row->x + x, row->y + part->y + y, 1, 2, 141, "%d", ingredient->level);
        } else {
            u16 level;

            if (work->specialFusionIV.recipe.kinds[i] == 3) {
                gameRecordCopy(ingredient->id, &saved.record);
                level = saved.values.level;
            } else {
                level = ((const StatBlock *)partyMemberFindById(ingredient->id))->level;
            }
            FUN_002bdf94(0, row->x + part->x + x, row->y + part->y + y, 1, 2, 141, "%d", level);
        }

        part = asdTMTexTableEntryAt(UNITE_TEXTURES, 310);
        if (work->specialFusionIV.recipe.kinds[i] == 0) {
            uiDrawDemonIcon(0, row->x + part->x + x, row->y + part->y + y, 141, 0);
        } else {
            uiDrawDemonIcon((s16)ingredient->id, row->x + part->x + x, row->y + part->y + y, 141, 1);
        }

        /* the cursor on this ingredient */
        if (work->specialFusionIV.recipeCursor == i + 1) {
            renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 88, row->x + part->x + x, part->y + row->y + y, 151);
            efctSetSpeed(vec2GetSpeed(&work->sprites.pulse));
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 89, row->x + part->x + x, row->y + part->y + y, 151);
            efctSetSpeed(1.0f);
            renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        }
        FUN_002580d4(ingredient->id, row->x + part->x + x, row->y + part->y + y, 156);
    }
}

} /* extern "C" */
