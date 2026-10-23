#include "common.h"

struct TextMeasureGlyphMetrics {
    u8 unk00[6];
    s8 advance;
    u8 unk07[0x15];
};

struct TextMeasureCell {
    u16 code;                        /* 0x00 */
    u8 unk02[2];                     /* 0x02 */
    TextMeasureGlyphMetrics metrics; /* 0x04 */
};

struct TextMeasureState {
    TextMeasureCell *cells;   /* 0x00 */
    u8 unk04[8];             /* 0x04 */
    s32 start;               /* 0x0c */
    s32 count;               /* 0x10 */
    s32 active;              /* 0x14 */
    f32 spacing;             /* 0x18 */
};

extern "C" {
u8 FUN_0019be8c(s32 code);
u32 sentinelLookupGetValue(u32 code);

/* Skip control-code parameters to the requested line, then sum glyph advances. */
s32 textMeasureLineWidth(TextMeasureState *text, s32 line)
{
    s32 currentLine = 0;
    if (!text->active)
        return 0;

    s32 position = text->start;
    do {
        u32 code = text->cells[position].code;
        if (code == 0xffff)
            break;
        if (code == 0xf813) {
            position += sentinelLookupGetValue(code);
        } else {
            if (currentLine == line)
                break;
            if (FUN_0019be8c(code)) {
                switch (code) {
                case 0xf801:
                    ++currentLine;
                    break;
                case 0xf802:
                    goto measure;
                default:
                    position += sentinelLookupGetValue(code);
                    break;
                }
            }
        }
        ++position;
    } while (position < text->start + 999);

measure:
    s32 width = 0;
    for (;;) {
        u32 code = text->cells[position].code;
        if (code == 0 || code == 0xf801)
            break;
        const TextMeasureGlyphMetrics *glyph = &text->cells[position++].metrics;
        width = (s32)(text->spacing + ((f32)glyph->advance + (f32)width));
    }
    return width;
}
}
