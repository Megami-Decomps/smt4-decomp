/* NON_MATCHING: the calls, constants, switch tables and stack variables (the texture table at sp+16, white at
 * sp+24) follow retail; the allocation does not. Retail keeps x in r5 and the panel entry in r6 (here r6 and r5),
 * stores the stat rows' depth and y with two str where the build pairs them (strd/stm), sums the HP panel's x
 * through r3, forms the highlight sprite's address before testing the three touch flags, and leaves the touched
 * arm's calls unpadded (no nop {0}). */
#include "shard/X14_EngineUnits.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess.h"
#include "camp/RenderCtxA.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "code/Code002a_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void drawSetColorFromRGBA8(u32 color);
void FUN_00180310(s32 layer, s32 x, s32 y, s32 z, s32 scale, s32 depth, const char *format, ...);

enum {
    STAT_GREY = 0x9B9B9BFF,
    STAT_GAIN = 0x72E027FF,
    STAT_ARROW_TOUCHED = 0xF5FF9FFF,
    STAT_ARROW_IDLE = 0x9FE7FFFF
};

/* Whether touch region `region` is being pressed or was just released. */
static __inline bool statRegionIsTouched(s32 region)
{
    s32 mode = recordGetModeForId(region);
    return mode == 1 || mode == 2 || mode == 6;
}

/* Draw the level-up stat screen at (x, y): the points left and given, the HP and MP panels, the
 * four stat rows the cursor is not on and then the cursor's row with its highlight and arrows.
 * Each panel shows the unit's value before the level-up and the player's current one. */
void resultDrawStatAllocation(ResultWorkA *work, s32 x, s32 y)
{
    s32 textures = 29;
    s32 after;
    s32 before;

    texDrawCompositeSprite(2, textures, 4, x, y, 101);
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(textures, 135);
    drawSetColorFromRGBA8(0x1A5C72FF);
    FUN_00180310(0, entry->x + x, entry->y + y, 0, 0, 106, "%d", work->statPointsLeft);
    entry = asdTMTexTableEntryAt(textures, 136);
    FUN_00180310(0, entry->x + x, entry->y + y, 0, 0, 106, "/");
    entry = asdTMTexTableEntryAt(textures, 138);
    drawSetColorFromRGBA8(0xFF);
    FUN_00180310(0, entry->x + x, entry->y + y, 0, 0, 106, "%d", work->statPointTotal);
    gxResetColorQuadToWhite();

    /* HP */
    after = gameGetPlayerData()->maxHp;
    before = work->units[work->current].maxHp;
    entry = asdTMTexTableEntryAt(textures, 154);
    texDrawCompositeSprite(2, textures, 5, entry->x + x, entry->y + y, 101);
    texDrawTableEntryAtStoredOrigin(2, textures, 143, entry->x + x, entry->y + y, 106);
    texDrawTableEntryAtStoredOrigin(2, textures, 145, entry->x + x, entry->y + y, 106);
    TextureTableEntryIV *label = asdTMTexTableEntryAt(textures, 149);
    FUN_00180310(0, entry->x + label->x + x, entry->y + label->y + y, 1, 4, 106, "%d", before);
    label = asdTMTexTableEntryAt(textures, 153);
    drawSetColorFromRGBA8(STAT_GAIN);
    FUN_00180310(0, entry->x + label->x + x, entry->y + label->y + y, 1, 4, 106, "%d", after);
    gxResetColorQuadToWhite();

    /* MP */
    after = gameGetPlayerData()->maxMp;
    before = work->units[work->current].maxMp;
    entry = asdTMTexTableEntryAt(textures, 155);
    texDrawCompositeSprite(2, textures, 5, entry->x + x, entry->y + y, 101);
    texDrawTableEntryAtStoredOrigin(2, textures, 144, entry->x + x, entry->y + y, 106);
    texDrawTableEntryAtStoredOrigin(2, textures, 145, entry->x + x, entry->y + y, 106);
    label = asdTMTexTableEntryAt(textures, 149);
    FUN_00180310(0, label->x + entry->x + x, entry->y + label->y + y, 1, 4, 106, "%d", before);
    label = asdTMTexTableEntryAt(textures, 153);
    drawSetColorFromRGBA8(STAT_GAIN);
    FUN_00180310(0, label->x + entry->x + x, entry->y + label->y + y, 1, 4, 106, "%d", after);
    gxResetColorQuadToWhite();

    for (s32 row = 0; row < 5; row++) {
        if (listCursorGetRowIfUnblocked(&work->statList) == row) {
            continue;
        }
        switch (row) {
        case 0:
            after = gameGetPlayerData()->stats[0];
            before = work->units[work->current].stats[0];
            break;
        case 1:
            after = gameGetPlayerData()->stats[1];
            before = work->units[work->current].stats[1];
            break;
        case 2:
            after = gameGetPlayerData()->stats[2];
            before = work->units[work->current].stats[2];
            break;
        case 3:
            after = gameGetPlayerData()->stats[3];
            before = work->units[work->current].stats[3];
            break;
        case 4:
            after = gameGetPlayerData()->stats[4];
            before = work->units[work->current].stats[4];
            break;
        }
        entry = asdTMTexTableEntryAt(textures, row + 186);
        texDrawCompositeSprite(2, textures, 6, entry->x + x, entry->y + y, 101);
        texDrawTableEntryAtStoredOrigin(2, textures, row + 158, entry->x + x, entry->y + y, 106);
        label = asdTMTexTableEntryAt(textures, 182);
        drawSetColorFromRGBA8(STAT_GREY);
        FUN_00180310(0, entry->x + label->x + x, label->y + entry->y + y, 1, 3, 106, "%d", before);
        gxResetColorQuadToWhite();
        label = asdTMTexTableEntryAt(textures, 185);
        u32 color;
        if (after > before) {
            texDrawTableEntryAtStoredOrigin(2, textures, 164, entry->x + x, entry->y + y, 106);
            color = 0x008400FF;
        } else {
            texDrawTableEntryAtStoredOrigin(2, textures, 163, entry->x + x, entry->y + y, 106);
            color = STAT_GREY;
        }
        drawSetColorFromRGBA8(color);
        FUN_00180310(0, label->x + entry->x + x, entry->y + label->y + y, 1, 3, 106, "%d", after);
        gxResetColorQuadToWhite();
        texDrawTableEntryAtStoredOrigin(2, textures, 165, entry->x + x, entry->y + y, 106);
        texDrawTableEntryAtStoredOrigin(2, textures, 166, entry->x + x, entry->y + y, 106);
    }

    /* The cursor's row. */
    s32 cursor = listCursorGetRowIfUnblocked(&work->statList);
    entry = asdTMTexTableEntryAt(textures, cursor + 186);
    switch (cursor) {
    case 0:
        after = gameGetPlayerData()->stats[0];
        before = work->units[work->current].stats[0];
        break;
    case 1:
        after = gameGetPlayerData()->stats[1];
        before = work->units[work->current].stats[1];
        break;
    case 2:
        after = gameGetPlayerData()->stats[2];
        before = work->units[work->current].stats[2];
        break;
    case 3:
        after = gameGetPlayerData()->stats[3];
        before = work->units[work->current].stats[3];
        break;
    case 4:
        after = gameGetPlayerData()->stats[4];
        before = work->units[work->current].stats[4];
        break;
    }
    u32 white = 0xFFFFFFFF;
    bool rowTouched = statRegionIsTouched(work->statRowRegions[cursor]);
    bool firstTouched = statRegionIsTouched(work->statArrowRegions[cursor].first);
    bool secondTouched = statRegionIsTouched(work->statArrowRegions[cursor].second);
    UiSpriteState *highlight = &work->listSprites[9];
    if (rowTouched || firstTouched || secondTouched) {
        efctSetSpeed(vec2GetSpeed(highlight));
        texDrawCompositeSprite(2, textures, 12, entry->x + x, entry->y + y, 101);
        efctSetSpeed(1.0f);
        texDrawTableEntryAtStoredOrigin(2, textures, 169, entry->x + x, entry->y + y, 106);
        texDrawTableEntryAtStoredOrigin(2, textures, 398, entry->x + x, entry->y + y, 106);
        texDrawTableEntryAtStoredOrigin(2, textures, 399, entry->x + x, entry->y + y, 106);
        efctSetSpeed(vec2GetSpeed(highlight));
        texDrawTableEntryAtStoredOrigin(2, textures, 400, entry->x + x, entry->y + y, 106);
        texDrawTableEntryAtStoredOrigin(2, textures, 401, entry->x + x, entry->y + y, 106);
        efctSetSpeed(1.0f);
    } else {
        efctSetSpeed(vec2GetSpeed(highlight));
        texDrawCompositeSprite(2, textures, 7, entry->x + x, entry->y + y, 101);
        efctSetSpeed(1.0f);
        texDrawTableEntryAtStoredOrigin(2, textures, 169, entry->x + x, entry->y + y, 106);
        texDrawTableEntryAtStoredOrigin(2, textures, 392, entry->x + x, entry->y + y, 106);
        texDrawTableEntryAtStoredOrigin(2, textures, 393, entry->x + x, entry->y + y, 106);
        efctSetSpeed(vec2GetSpeed(highlight));
        texDrawTableEntryAtStoredOrigin(2, textures, 394, entry->x + x, entry->y + y, 106);
        texDrawTableEntryAtStoredOrigin(2, textures, 395, entry->x + x, entry->y + y, 106);
        efctSetSpeed(1.0f);
    }
    drawSetColorFromRGBA8(white);
    texDrawTableEntryAtStoredOrigin(2, textures, cursor + 170, entry->x + x, entry->y + y, 106);
    gxResetColorQuadToWhite();
    label = asdTMTexTableEntryAt(textures, 182);
    FUN_00180310(0, label->x + entry->x + x, entry->y + label->y + y, 1, 3, 111, "%d", before);
    label = asdTMTexTableEntryAt(textures, 185);
    drawSetColorFromRGBA8(after > before ? STAT_GAIN : 0xFFFFFFFF);
    FUN_00180310(0, label->x + entry->x + x, entry->y + label->y + y, 1, 3, 111, "%d", after);
    gxResetColorQuadToWhite();
    drawSetColorFromRGBA8(white);
    texDrawTableEntryAtStoredOrigin(2, textures, 175, entry->x + x, entry->y + y, 111);
    gxResetColorQuadToWhite();
    texDrawTableEntryAtStoredOrigin(2, textures, 178, entry->x + x, entry->y + y, 111);
    texDrawTableEntryAtStoredOrigin(2, textures, 179, entry->x + x, entry->y + y, 111);

    /* The arrows blend additively, lit while they are touched. */
    efctSetSpeed(vec2GetSpeed(&work->listSprites[8]));
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    drawSetColorFromRGBA8(firstTouched ? STAT_ARROW_TOUCHED : STAT_ARROW_IDLE);
    texDrawTableEntryAtStoredOrigin(2, textures, 176, entry->x + x, entry->y + y, 116);
    gxResetColorQuadToWhite();
    drawSetColorFromRGBA8(secondTouched ? STAT_ARROW_TOUCHED : STAT_ARROW_IDLE);
    texDrawTableEntryAtStoredOrigin(2, textures, 177, entry->x + x, entry->y + y, 116);
    gxResetColorQuadToWhite();
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    efctSetSpeed(1.0f);
}

} /* extern "C" */
