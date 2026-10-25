/* NON_MATCHING: readable rewrite from retail disassembly compiles (214 vs 194 rows); retail interleaves the float conversions with the rect loads, repeats the parallax call per cell and unrolls the row/mark scans differently */
#include "common.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"

// Placement record of a sprite part: position and a pointer to its extra metrics.
struct SpriteRect {
    u8 unk00[8];
    s16 x;                  // 0x08
    s16 y;                  // 0x0a
    s16* extra;             // 0x0c
};

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

extern u8* g_renderCtx;
extern const char DAT_0052d134[];

void efctSetSpeed(f32 speed);
s32 libc_strcmp(const char* a, const char* b);
void gameGetPlayerData(void);
const char* gameGetPlayerName(void);
void textFormatBuffer(char* out, const char* format, ...);
s32 fontMeasureLineAdvance(const char* text, s32 font);
SpriteRect* asdTMTexTableEntryAt(s32 group, s32 index);
void FUN_00164168(u32 icon, s32 x, s32 y, s32 a, f32 speed, s32 b, s32 c);

// Draws the caption panel at (x, y): "<name>" and a second caption string side by side with
// their frame, then the eight value cells with their mark icons.
void FUN_00402ab8(CaptionPanel* panel, s32 x, s32 y, f32 speed)
{
    char text[64];
    s32 color = -1;
    renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(speed);
    const char* name = panel->record->name;
    if (libc_strcmp(name, DAT_0052d134) == 0) {
        gameGetPlayerData();
        name = gameGetPlayerName();
    }
    textFormatBuffer(text, "%s", name);
    s32 nameWidth = fontMeasureLineAdvance(text, 2);
    SpriteRect* frame = asdTMTexTableEntryAt(50, 9);
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    textDrawString(2, color, text, (f32)(frame->x - nameWidth + x + shift), (f32)(frame->y + y), 0.21484375f, 0.0f, speed);

    textFormatBuffer(text, "\x82\x60\x82\x95\x82\x94\x82\x88\x82\x8f\x82\x92");
    s32 suffixWidth = fontMeasureLineAdvance(text, 2);
    SpriteRect* suffix = asdTMTexTableEntryAt(50, 10);
    s32 suffixOffset = *suffix->extra;
    textDrawString(2, color, text, (f32)(frame->x - nameWidth - suffixOffset - suffixWidth + x + shift), (f32)(frame->y + y), 0.21484375f, 0.0f, speed);
    FUN_001835b4(2, 50, 10, frame->x - nameWidth - suffixOffset + x + shift, frame->y + y, 201);

    s32 baseX = shift + x;
    for (s32 i = 0; i < 8; i++) {
        s32 value = panel->value + i;
        s32 row;
        s32 offset = 0;
        bool found = false;
        for (row = 0; row < 6; row++) {
            if (panel->rows[row].low <= value && value < panel->rows[row].high) {
                offset = value - panel->rows[row].low;
                break;
            }
        }
        if (row == 6) continue;
        for (s32 j = 0; j < 10; j++) {
            u16 mark = panel->record->marks[j];
            if (mark != 0 && (s32)(mark - 1) == value) {
                found = true;
                break;
            }
        }
        SpriteRect* iconRect;
        s32 iconShift;
        if (found) {
            SpriteRect* markRect = asdTMTexTableEntryAt(50, 58 + i);
            FUN_001835b4(2, 50, 57, markRect->x + baseX, markRect->y + y, 201);
            iconRect = asdTMTexTableEntryAt(50, 66 + i);
            iconShift = 6;
        } else {
            iconRect = asdTMTexTableEntryAt(50, 18 + i);
            iconShift = 0;
        }
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        FUN_00164168(panel->icons[row], parallax + iconShift + iconRect->x + baseX, iconRect->y + y, 201, speed, 6, offset);
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
