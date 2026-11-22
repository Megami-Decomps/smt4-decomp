/* NON_MATCHING: 43 lines (31 by shape); the build is one instruction short (300 rows against 301), which shifts
 * the switch table, the branch targets and the pool. Two differences: in the ailment-colour column retail copies
 * the unit index into r0 while testing its sign (`subs r0, fp, #0`) ahead of both record getters and addresses
 * the selection through r1, where the build tests fp and moves it in the unit arm only; and in the level column
 * retail stores the formatted value on its own (`str r1, [sp, #12]`, then `stm sp, {r2, r3, ip}`) where the
 * build uses one four-register `stm`. */
#include "common.h"
#include "code/Code003b_Smt4.h"
#include "result/Result.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiControl.h"
#include "ui/AnimatedMessage.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GamePlayerData.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
/* Sets the flat colour of the following draws from a packed RGBA8 value (the alpha byte is ignored). */
void drawSetColorFromRGBA8(u32 packed);
/* Draws a demon's icon at (x, y). */
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
/* Draws a formatted number at (x, y): `align` 1 right-aligns it in a field of `digits` digits. */
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 depth, const char *format, ...);

/* Draws texture `texture` of `table` at (x, y) with the given size (its definition takes y as a one-word
 * int/float union: the same argument slot). */
u32 uiDrawTableTextureSized(u32 id, u32 table, s32 texture, s32 x, s32 y, s32 width, s32 height, u32 tag);

/* Gives the following draws `color` unless they already have it. */
static __inline void setRowColor(u32 color)
{
    if (g_resultRowDrawState.color != color) {
        drawSetColorFromRGBA8(color);
        g_resultRowDrawState.color = color;
    }
}

/* Draws column `column` of one row of the level-up result list: the row of party unit `unit` at (x, y), `row`
 * being its position in the list. `gain` is the number of levels gained so far and `limit` the level the unit
 * started from; `width` is the filled width of the experience bar and `active` whether the row is animating. */
void resultDrawRowColumn(ResultWork *work, u32 column, s32 unit, s32 row, s32 x, s32 y, s32 width, s32 active, s32 gain,
                  s32 limit)
{
    StatBlock *record = gameGetUnitRecord(unit);
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x28, row + 0x68);

    switch (column) {
    case 0:
        texDrawTableEntryAtStoredOrigin(2, 0x28, 0x56, entry->x + x, entry->y + y, 0x65);
        break;
    case 1:
        if (gain > 0 || record->level > limit) {
            texDrawTableEntryAtStoredOrigin(2, 0x28, 0x58, entry->x + x, entry->y + y, 0x6A);
            texDrawTableEntryAtStoredOrigin(2, 0x28, 0x5A, entry->x + x, entry->y + y, 0x6F);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 0x28, 0x57, entry->x + x, entry->y + y, 0x6A);
            texDrawTableEntryAtStoredOrigin(2, 0x28, 0x59, entry->x + x, entry->y + y, 0x6F);
        }
        break;
    case 2: {
        u32 color = 0xFFFFFFFF;
        s32 selected = work->ailmentCycleIndex[unit + 1];
        u16 mask;
        if (unit < 0) {
            mask = gameGetPlayerData()->ailments;
        } else {
            mask = gameGetUnitRecord(unit)->ailments;
        }
        s32 owned = 0;
        for (s32 slot = 1; slot < 11; slot++) {
            if ((mask & (1 << slot)) != 0) {
                if (owned == selected) {
                    color = categoryGetColor((s16)slot);
                    break;
                }
                owned++;
            }
        }
        setRowColor(color);
        TextureTableEntryIV *column = g_resultRowDrawState.column;
        uiDrawDemonIcon((s16)record->id, entry->x + column->x + x, entry->y + column->y + y, 0x6A, 0);
        break;
    }
    case 3:
        texDrawTableEntryAtStoredOrigin(2, 0x28, 0x5B, entry->x + x, entry->y + y, 0x6F);
        texDrawTableEntryAtStoredOrigin(2, 0x28, 0x5C, entry->x + x, entry->y + y, 0x6F);
        texDrawTableEntryAtStoredOrigin(2, 0x28, 0x5D, entry->x + x, entry->y + y, 0x74);
        texDrawTableEntryAtStoredOrigin(2, 0x28, 0x5E, entry->x + x, entry->y + y, 0x79);
        break;
    case 4: {
        setRowColor(gain > 0 || record->level > limit ? 0xFF : 0xFFFFFFFF);
        TextureTableEntryIV *column = g_resultRowDrawState.column;
        FUN_002bdf94(6, entry->x + column->x + x, column->y + entry->y + y, 1, 2, 0x7E, "%d", record->level + gain);
        break;
    }
    case 5:
        resultDrawAilmentMarker(work, unit, entry->x + x, entry->y + y);
        break;
    case 6: {
        TextureTableEntryIV *column = g_resultRowDrawState.column;
        if (active != 0) {
            texDrawTableEntryAtStoredOrigin(2, 0x28, 0x60, entry->x + x, entry->y + y, 0x83);
        } else {
            uiDrawTableTextureSized(2, 0x28, 0x5F, entry->x + x, entry->y + y, width,
                                    column->placement->height, 0x83);
        }
        break;
    }
    case 7:
        if (active != 0) {
            if (gain < 8) {
                efctSetSpeed((f32)gain * 0.125f);
            }
            texDrawTableEntryAtStoredOrigin(2, 0x28, 0x61, entry->x + x, entry->y + y, 0x88);
            texDrawTableEntryAtStoredOrigin(2, 0x28, 0x61, entry->x + x, entry->y + y, 0x89);
        }
        break;
    }
}

} /* extern "C" */
