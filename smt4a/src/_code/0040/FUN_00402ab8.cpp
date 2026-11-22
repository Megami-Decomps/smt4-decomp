/* NON_MATCHING: 247 lines (216 vs 211 rows). Retail spills the colour (-1) to [sp] and keeps 201 in r7, computes the cell offset before testing the row result, keeps the mark search's found flag as 1/0 in r0 (no jump threading), and reloads the suffix rect's placement width at the frame draw; the row search (-1 sentinel), the per-arm parallax calls and the single faded draw now follow retail's blocks. */
#include "common.h"
#include <stdio.h>
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include <string.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"

// A named record whose id marks are tested for the highlighted entries.
struct NameRecord {
    u8 unk00[0x36];
    char name[0x32];        // 0x36
    u16 marks[10];          // 0x68
};

// Range table row: values in [low, high) belong to this row.
struct RangeRow {
    s32 low;
    s32 high;
};

// Status caption panel: caption text, mark icons and the value strip.
struct CaptionPanel {
    u8 unk000[0x8c];
    s32 value;              // 0x08c
    u8 unk090[0x664 - 0x90];
    NameRecord* record;     // 0x664
    u8 unk668[4];
    u32 icons[7];           // 0x66c
    RangeRow rows[6];       // 0x688
};

extern "C" {

extern const char DAT_0052d134[];

void efctSetSpeed(f32 speed);
void gameGetPlayerData(void);
const char* gameGetPlayerName(void);
s32 fontMeasureLineAdvance(const char* text, s32 font);
void textDrawRangeFaded(u32 icon, s32 x, s32 y, s32 a, f32 speed, s32 b, s32 c);

// Draws the caption panel at (x, y): "<name>" and a second caption string side by side with
// their frame, then the eight value cells with their mark icons.
void FUN_00402ab8(CaptionPanel* panel, s32 x, s32 y, f32 speed)
{
    char text[64];
    s32 color = -1;
    renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(speed);
    const char* name = panel->record->name;
    if (strcmp(name, DAT_0052d134) == 0) {
        gameGetPlayerData();
        name = gameGetPlayerName();
    }
    sprintf(text, "%s", name);
    s32 nameWidth = fontMeasureLineAdvance(text, 2);
    TextureTableEntryIV* frame = asdTMTexTableEntryAt(50, 9);
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    textDrawString((f32)(frame->x - nameWidth + x + shift), (f32)(frame->y + y), 0.21484375f, 2, 0.0f, color, speed, text);

    sprintf(text, "\x82\x60\x82\x95\x82\x94\x82\x88\x82\x8f\x82\x92");
    s32 suffixWidth = fontMeasureLineAdvance(text, 2);
    TextureTableEntryIV* suffix = asdTMTexTableEntryAt(50, 10);
    s32 suffixOffset = suffix->placement->width;
    textDrawString((f32)(frame->x - nameWidth - suffixOffset - suffixWidth + x + shift), (f32)(frame->y + y), 0.21484375f, 2, 0.0f, color, speed, text);
    texDrawTableEntryAtStoredOrigin(2, 50, 10, frame->x - nameWidth - suffixOffset + x + shift, frame->y + y, 201);

    s32 baseX = shift + x;
    for (s32 i = 0; i < 8; i++) {
        s32 value = panel->value + i;
        s32 row = -1;
        for (s32 r = 0; r < 6; r++) {
            if (panel->rows[r].low <= value && value < panel->rows[r].high) {
                row = r;
                break;
            }
        }
        if (row < 0) continue;
        s32 offset = value - panel->rows[row].low;
        s32 j;
        for (j = 0; j < 10; j++) {
            u16 mark = panel->record->marks[j];
            if (mark != 0 && (s32)(mark - 1) == value) break;
        }
        bool found = j < 10;
        s32 iconShift = 0;
        TextureTableEntryIV* iconRect;
        s32 parallax;
        if (found) {
            TextureTableEntryIV* markRect = asdTMTexTableEntryAt(50, 58 + i);
            parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
            texDrawTableEntryAtStoredOrigin(2, 50, 57, markRect->x + parallax + baseX, markRect->y + y, 201);
            iconRect = asdTMTexTableEntryAt(50, 66 + i);
            parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
            iconShift = 6;
        } else {
            iconRect = asdTMTexTableEntryAt(50, 18 + i);
            parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        }
        textDrawRangeFaded(panel->icons[row], parallax + iconShift + iconRect->x + baseX, iconRect->y + y, 201, speed, 6, offset);
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
