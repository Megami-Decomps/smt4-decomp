/* NON_MATCHING: same calls, constants, switch tables and stack slots as retail (693 vs 691 rows). Retail saves x before y
 * on entry; it picks other scratch registers or load orders for the argument blocks of five of the eight number draws and
 * of the second render-state change; and in the stat loop it writes the sprite-158 draw's stack arguments with two str
 * (here strd) and gives the 165 and 166 draws each other's store form. */
#include "result/Result.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "code/Code0029_VariantB.h"
#include "gamedata/GamePlayerData.h"
#include "gfx/SpritePartDraw.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

void FUN_002bdf94(s32 layer, s32 x, s32 y, s32 align, s32 digits, s32 depth, const char *format, ...);
void drawSetColorFromRGBA8(u32 color);
void gxResetColorQuadToWhite(void); // declcheck: local (the only shared declaration is in Apocalypse's ui/AnimatedMessage.h)

/* Draws the level-up panel at (x, y): the level gain and the points left, the maximum HP and MP before and
 * after, the four stat rows the cursor is not on and, above them, the highlighted row. */
void resultDrawLevelUpPanel(ResultWork *work, s32 x, s32 y)
{
    u32 table = 40;
    s32 after;
    s32 before;
    TextureTableEntryIV *entry;
    TextureTableEntryIV *offset;

    texDrawCompositeSprite(2, table, 4, x, y, 101);
    entry = asdTMTexTableEntryAt(table, 135);
    drawSetColorFromRGBA8(0x7a4c00ff);
    s32 gained = (gameGetPlayerData()->level - work->startLevel) * 5;
    FUN_002bdf94(0, entry->x + x, entry->y + y, 0, 0, 106, "%d", gained);
    entry = asdTMTexTableEntryAt(table, 136);
    FUN_002bdf94(0, entry->x + x, entry->y + y, 0, 0, 106, "/");
    entry = asdTMTexTableEntryAt(table, 138);
    drawSetColorFromRGBA8(0x000000ff);
    FUN_002bdf94(0, entry->x + x, entry->y + y, 0, 0, 106, "%d", work->remainingPoints);
    gxResetColorQuadToWhite();

    after = gameGetPlayerData()->maxHp;
    before = work->entries[work->current].maxHp;
    entry = asdTMTexTableEntryAt(table, 154);
    texDrawCompositeSprite(2, table, 5, entry->x + x, entry->y + y, 101);
    texDrawTableEntryAtStoredOrigin(2, table, 143, entry->x + x, entry->y + y, 106);
    texDrawTableEntryAtStoredOrigin(2, table, 145, entry->x + x, entry->y + y, 106);
    offset = asdTMTexTableEntryAt(table, 149);
    FUN_002bdf94(0, entry->x + offset->x + x, entry->y + offset->y + y, 1, 4, 106, "%d", before);
    offset = asdTMTexTableEntryAt(table, 153);
    drawSetColorFromRGBA8(0x72e027ff);
    FUN_002bdf94(0, entry->x + offset->x + x, entry->y + offset->y + y, 1, 4, 106, "%d", after);
    gxResetColorQuadToWhite();

    after = gameGetPlayerData()->maxMp;
    before = work->entries[work->current].maxMp;
    entry = asdTMTexTableEntryAt(table, 155);
    texDrawCompositeSprite(2, table, 5, entry->x + x, entry->y + y, 101);
    texDrawTableEntryAtStoredOrigin(2, table, 144, entry->x + x, entry->y + y, 106);
    texDrawTableEntryAtStoredOrigin(2, table, 145, entry->x + x, entry->y + y, 106);
    offset = asdTMTexTableEntryAt(table, 149);
    FUN_002bdf94(0, entry->x + offset->x + x, entry->y + offset->y + y, 1, 4, 106, "%d", before);
    offset = asdTMTexTableEntryAt(table, 153);
    drawSetColorFromRGBA8(0x72e027ff);
    FUN_002bdf94(0, entry->x + offset->x + x, entry->y + offset->y + y, 1, 4, 106, "%d", after);
    gxResetColorQuadToWhite();

    for (s32 i = 0; i < 5; ++i) {
        if (listCursorGetRowIfUnblocked(&work->statCursor) == i)
            continue;
        switch (i) {
        case 0:
            after = gameGetPlayerData()->stats[0];
            before = work->entries[work->current].stats[0];
            break;
        case 1:
            after = gameGetPlayerData()->stats[1];
            before = work->entries[work->current].stats[1];
            break;
        case 2:
            after = gameGetPlayerData()->stats[2];
            before = work->entries[work->current].stats[2];
            break;
        case 3:
            after = gameGetPlayerData()->stats[3];
            before = work->entries[work->current].stats[3];
            break;
        case 4:
            after = gameGetPlayerData()->stats[4];
            before = work->entries[work->current].stats[4];
            break;
        }
        entry = asdTMTexTableEntryAt(table, i + 186);
        texDrawCompositeSprite(2, table, 6, entry->x + x, entry->y + y, 101);
        texDrawTableEntryAtStoredOrigin(2, table, i + 158, entry->x + x, entry->y + y, 106);
        offset = asdTMTexTableEntryAt(table, 182);
        drawSetColorFromRGBA8(0x5a5a5aff);
        FUN_002bdf94(0, entry->x + offset->x + x, entry->y + offset->y + y, 1, 3, 106, "%d", before);
        gxResetColorQuadToWhite();
        offset = asdTMTexTableEntryAt(table, 185);
        if (after > before) {
            texDrawTableEntryAtStoredOrigin(2, table, 164, entry->x + x, entry->y + y, 106);
            drawSetColorFromRGBA8(0x008400ff);
        } else {
            texDrawTableEntryAtStoredOrigin(2, table, 163, entry->x + x, entry->y + y, 106);
            drawSetColorFromRGBA8(0x5a5a5aff);
        }
        FUN_002bdf94(0, entry->x + offset->x + x, entry->y + offset->y + y, 1, 3, 106, "%d", after);
        gxResetColorQuadToWhite();
        texDrawTableEntryAtStoredOrigin(2, table, 165, entry->x + x, entry->y + y, 106);
        texDrawTableEntryAtStoredOrigin(2, table, 166, entry->x + x, entry->y + y, 106);
    }

    s32 row = listCursorGetRowIfUnblocked(&work->statCursor);
    entry = asdTMTexTableEntryAt(table, row + 186);
    switch (row) {
    case 0:
        after = gameGetPlayerData()->stats[0];
        before = work->entries[work->current].stats[0];
        break;
    case 1:
        after = gameGetPlayerData()->stats[1];
        before = work->entries[work->current].stats[1];
        break;
    case 2:
        after = gameGetPlayerData()->stats[2];
        before = work->entries[work->current].stats[2];
        break;
    case 3:
        after = gameGetPlayerData()->stats[3];
        before = work->entries[work->current].stats[3];
        break;
    case 4:
        after = gameGetPlayerData()->stats[4];
        before = work->entries[work->current].stats[4];
        break;
    }
    efctSetSpeed(vec2GetSpeed(&work->statHighlight.sprite));
    texDrawCompositeSprite(2, table, 7, entry->x + x, entry->y + y, 101);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, table, 169, entry->x + x, entry->y + y, 106);
    texDrawTableEntryAtStoredOrigin(2, table, row + 170, entry->x + x, entry->y + y, 106);
    offset = asdTMTexTableEntryAt(table, 182);
    FUN_002bdf94(0, entry->x + offset->x + x, entry->y + offset->y + y, 1, 3, 111, "%d", before);
    offset = asdTMTexTableEntryAt(table, 185);
    drawSetColorFromRGBA8(after > before ? 0x72e027ff : 0xffffffff);
    FUN_002bdf94(0, entry->x + offset->x + x, entry->y + offset->y + y, 1, 3, 111, "%d", after);
    gxResetColorQuadToWhite();
    texDrawTableEntryAtStoredOrigin(2, table, 175, entry->x + x, entry->y + y, 111);
    texDrawTableEntryAtStoredOrigin(2, table, 178, entry->x + x, entry->y + y, 111);
    texDrawTableEntryAtStoredOrigin(2, table, 179, entry->x + x, entry->y + y, 111);
    efctSetSpeed(vec2GetSpeed(&work->statHighlight.sprite));
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, table, 176, entry->x + x, entry->y + y, 116);
    texDrawTableEntryAtStoredOrigin(2, table, 177, entry->x + x, entry->y + y, 116);
    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    efctSetSpeed(1.0f);
}

} /* extern "C" */
