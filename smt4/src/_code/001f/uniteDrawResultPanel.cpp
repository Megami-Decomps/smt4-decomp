/* NON_MATCHING: same calls, constants, frame and row count as retail (990); 150 rows differ, registers and
 * scheduling. Retail keeps 1.0 in s16 and 0.0 in s17 (built: the other way round, which alone touches every
 * text draw and both efctSetSpeed(1.0f) calls); it loads the position halfwords of three FUN_002580d4 icon sums
 * and of the two centred race labels in another order; the header label's y and x sums stay in r0/r1 (built:
 * r1/r0); the "no candidates" label's sums go through s0/s2 (built: straight into s1/s0); the selected row's
 * "new" mark stores its y and depth with two `str`s (built: `strd`); and the cursor's first blend-state change
 * takes r2/r1 for the slot address and previous state (built: r1/r2).
 * `centre` is one variable assigned in both blocks: retail keeps the halved width difference in its own register
 * at both of those draws (`asr r1, r0, #1`) and folds it into the add only where the expression is written inline
 * (the row's race label). */
#include "common.h"
#include <stdio.h>
#include "camp/CampStateQueries.h"
#include "camp/RenderCtxTitle.h"
#include "camp/Unite/UniteWork.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "gamedata/NkmBaseRecord.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
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
u32 FUN_0029dde0(void);

#define UNITE_TEXTURES 0x24   /* the fusion screen's texture table */
#define TEXT_WHITE 0xFFFFFFFF
#define TEXT_BLACK 0x000000FF
#define TEXT_BROWN 0x7A4C00FF
#define TEXT_GREY 0x323232FF

/* Draws the fusion search's result panel at (x, y): the "Fusion Possible:" count, the three result rows
 * (two ingredient icons, the result's icon, name, race and level, or "There are no candidates.") except row
 * `selected`, which is drawn enlarged over them with the scrolling highlight and the cursor on ingredient
 * `cursorSlot` (0: result, 1: first, 2: second); `region` is the touch region of the selected row. */
void uniteDrawResultPanel(s32 x, s32 y, u32 selected, s32 cursorSlot, s32 region)
{
    UniteWork *work = (UniteWork *)uniteGetWork();
    char text[64];
    s32 centre;

    if (work == NULL) {
        return;
    }
    if ((x >= 0 ? x : -x) >= 320) {
        return;
    }
    texDrawCompositeSprite(2, UNITE_TEXTURES, 0, x, y, 201);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 92, x, y, 201);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 93, x, y, 201);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 94, x, y, 201);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 95, x, y, 201);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 96, x, y, 201);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 97, x, y, 201);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 98, x, y, 201);
    texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 74, x, y, 201);

    TextureTableEntryIV *part = asdTMTexTableEntryAt(UNITE_TEXTURES, 73);
    sprintf(text, "\202\145\202\225\202\223\202\211\202\217\202\216\201\100\202\157\202\217\202\223\202\223\202\211\202\202\202\214\202\205\201\106");
    textDrawString(part->x + x, part->y + y, 0.0f, 2, 0.0f, TEXT_WHITE, 1.0f, text);
    part = asdTMTexTableEntryAt(UNITE_TEXTURES, 76);
    FUN_002bdf94(0, part->x + x, part->y + y, 1, 2, 201, "%d", FUN_0029dde0());
    if (work->blocked) {
        return;
    }

    for (s32 i = 0; i < 3; i++) {
        if (i == selected) {
            continue;
        }
        TextureTableEntryIV *row = asdTMTexTableEntryAt(UNITE_TEXTURES, i + 115);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 99, row->x + x, row->y + y, 201);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 100, row->x + x, row->y + y, 201);
        if (work->resultPairsIV.pairs[i].resultId) {
            UnitePairEntryIV *pair = &work->resultPairsIV.pairs[i];
            NkmBaseRecord *demon = nkmBaseGetRecord(pair->resultId);
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 101, row->x + x, row->y + y, 201);
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 102, row->x + x, row->y + y, 201);
            TextureTableEntryIV *slot = asdTMTexTableEntryAt(UNITE_TEXTURES, 106);
            uiDrawDemonIcon((s16)pair->firstId, row->x + slot->x + x, row->y + slot->y + y, 201, 1);
            FUN_002580d4(pair->firstId, row->x + slot->x + x, row->y + slot->y + y, 206);
            slot = asdTMTexTableEntryAt(UNITE_TEXTURES, 107);
            uiDrawDemonIcon((s16)pair->secondId, row->x + slot->x + x, row->y + slot->y + y, 201, 1);
            FUN_002580d4(pair->secondId, row->x + slot->x + x, row->y + slot->y + y, 206);
            slot = asdTMTexTableEntryAt(UNITE_TEXTURES, 108);
            uiDrawDemonIcon((s16)pair->resultId, row->x + slot->x + x, row->y + slot->y + y, 201, 0);
            FUN_002580d4(pair->resultId, slot->x + row->x + x, row->y + slot->y + y, 206);
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 103, row->x + x, row->y + y, 201);
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 104, row->x + x, row->y + y, 201);
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 105, row->x + x, row->y + y, 201);
            TextureTableEntryIV *label = asdTMTexTableEntryAt(UNITE_TEXTURES, 110);
            sprintf(text, "%s", FUN_002bd068(demon->id));
            textDrawString(row->x + label->x + x, row->y + label->y + y, 0.2f, 2, 0.0f, TEXT_BLACK, 1.0f, text);
            label = asdTMTexTableEntryAt(UNITE_TEXTURES, 111);
            sprintf(text, "%s", demonGetRaceLabel(demon->id, 0));
            s32 width = fontMeasureLineAdvance(text, 2);
            textDrawString(x + (label->placement->width - width) / 2 + (row->x + label->x), label->y + row->y + y, 0.2f, 2,
                           0.0f, TEXT_BROWN, 1.0f, text);
            drawSetColorFromRGBA8(TEXT_BLACK);
            label = asdTMTexTableEntryAt(UNITE_TEXTURES, 113);
            FUN_002bdf94(0, row->x + label->x + x, row->y + label->y + y, 1, 2, 206, "%d", demon->level);
            gxResetColorQuadToWhite();
            if (!itemGetFlagBit1(demon->id)) {
                label = asdTMTexTableEntryAt(UNITE_TEXTURES, 109);
                texDrawCompositeSprite(2, UNITE_TEXTURES, 8, row->x + label->x + x, label->y + row->y + y, 211);
            }
        } else {
            sprintf(text, "\202\163\202\210\202\205\202\222\202\205\201\100\202\201\202\222\202\205\201\100\202\216\202\217\201\100\202\203\202\201\202\216\202\204\202\211\202\204\202\201\202\224\202\205\202\223\201\104");
            TextureTableEntryIV *label = asdTMTexTableEntryAt(UNITE_TEXTURES, 114);
            s32 width = fontMeasureLineAdvance(text, 2);
            centre = (label->placement->width - width) / 2;
            textDrawString(row->x + label->x + (x + centre), label->y + row->y + y, 0.2f, 2,
                           0.0f, TEXT_GREY, 1.0f, text);
        }
    }

    if (selected < 3) {
        UnitePairEntryIV *pair = &work->resultPairsIV.pairs[selected];
        NkmBaseRecord *demon = nkmBaseGetRecord(pair->resultId);
        TextureTableEntryIV *panel = asdTMTexTableEntryAt(UNITE_TEXTURES, selected + 135);

        efctSetSpeed(vec2GetSpeed(&work->sprites.fade));
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 118, panel->x + x, panel->y + y, 201);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 119, panel->x + x, panel->y + y, 201);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 120, panel->x + x, panel->y + y, 201);
        efctSetSpeed(1.0f);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 121, panel->x + x, panel->y + y, 201);
        u8 touch = ifTouchGetSelectionModeForRegion(region);
        if (touch == 1 || touch == 2 || touch == 6) {
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 123, panel->x + x, panel->y + y, 201);
        } else {
            texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 122, panel->x + x, panel->y + y, 201);
        }
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 125, panel->x + x, panel->y + y, 201);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 126, panel->x + x, panel->y + y, 201);

        /* The highlight scrolls inside the button's rectangle. */
        TextureTableEntryIV *clip = asdTMTexTableEntryAt(UNITE_TEXTURES, 122);
        renderStackSetCounted(&g_titleScene->scissor, 3);
        gxSetMirroredClippedScissor(panel->x + clip->x + x, panel->y + clip->y + y, clip->placement->width,
                                    clip->placement->height, 1);
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 124,
                                        vec2GetXInt(&work->sprites.slide) + x + panel->x,
                                        vec2GetYInt(&work->sprites.slide) + y + panel->y, 206);
        renderStackSetCounted(&g_titleScene->scissor, 0);

        TextureTableEntryIV *slot = asdTMTexTableEntryAt(UNITE_TEXTURES, 127);
        uiDrawDemonIcon((s16)pair->firstId, panel->x + slot->x + x, panel->y + slot->y + y, 201, 1);
        FUN_002580d4(pair->firstId, slot->x + panel->x + x, slot->y + panel->y + y, 226);
        slot = asdTMTexTableEntryAt(UNITE_TEXTURES, 128);
        uiDrawDemonIcon((s16)pair->secondId, panel->x + slot->x + x, panel->y + slot->y + y, 201, 1);
        FUN_002580d4(pair->secondId, panel->x + slot->x + x, panel->y + slot->y + y, 226);
        slot = asdTMTexTableEntryAt(UNITE_TEXTURES, 129);
        uiDrawDemonIcon((s16)pair->resultId, panel->x + slot->x + x, panel->y + slot->y + y, 201, 0);
        FUN_002580d4(pair->resultId, panel->x + slot->x + x, panel->y + slot->y + y, 226);

        part = asdTMTexTableEntryAt(UNITE_TEXTURES, 131);
        sprintf(text, "%s", FUN_002bd068(demon->id));
        textDrawString(panel->x + part->x + x, panel->y + part->y + y, 0.2f, 3, 0.0f, TEXT_WHITE, 1.0f, text);
        part = asdTMTexTableEntryAt(UNITE_TEXTURES, 132);
        sprintf(text, "%s", demonGetRaceLabel(demon->id, 0));
        s32 width = fontMeasureLineAdvance(text, 3);
        centre = (part->placement->width - width) / 2;
        textDrawString(part->x + panel->x + (centre + x), part->y + panel->y + y, 0.2f, 3,
                       0.0f, TEXT_WHITE, 1.0f, text);
        part = asdTMTexTableEntryAt(UNITE_TEXTURES, 134);
        FUN_002bdf94(0, panel->x + part->x + x, panel->y + part->y + y, 1, 2, 206, "%d", demon->level);
        if (!itemGetFlagBit1(demon->id)) {
            part = asdTMTexTableEntryAt(UNITE_TEXTURES, 130);
            texDrawCompositeSprite(2, UNITE_TEXTURES, 8, panel->x + part->x + x, part->y + panel->y + y, 211);
        }

        /* The cursor, on the ingredient or result it points at. */
        if (cursorSlot == 0) {
            part = asdTMTexTableEntryAt(UNITE_TEXTURES, 129);
        } else if (cursorSlot == 1) {
            part = asdTMTexTableEntryAt(UNITE_TEXTURES, 127);
        } else if (cursorSlot == 2) {
            part = asdTMTexTableEntryAt(UNITE_TEXTURES, 128);
        }
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 88, panel->x + part->x + x, panel->y + part->y + y, 221);
        efctSetSpeed(vec2GetSpeed(&work->sprites.pulse));
        texDrawTableEntryAtStoredOrigin(2, UNITE_TEXTURES, 89, panel->x + part->x + x, panel->y + part->y + y, 221);
        efctSetSpeed(1.0f);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    }
}

} /* extern "C" */
