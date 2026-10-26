#include "common.h"

extern "C" {
extern s8 DAT_004e0d88[];
extern const u8 DAT_004095f8[];

/* Converts a text string to two-byte glyph codes: bytes with the high bit set are copied as a pair,
 * a newline becomes the line-break pair, and every other byte is looked up in the glyph table. The
 * output (default buffer when none is given) is terminated with two zero bytes. Returns the
 * default buffer. */
s8 *textConvertToGlyphPairs(const u8 *source, s8 *output)
{
    if (!output) {
        output = DAT_004e0d88;
    }
    u32 outputIndex = 0;
    u32 sourceIndex = 0;
    for (;;) {
        u8 code = source[sourceIndex++];
        if (!code) {
            output[outputIndex] = 0;
            output[outputIndex + 1] = 0;
            return DAT_004e0d88;
        }
        if (code & 0x80) {
            output[outputIndex] = code;
            output[outputIndex + 1] = source[sourceIndex++];
        } else if (code == '\n') {
            output[outputIndex] = 0xf8;
            output[outputIndex + 1] = 1;
        } else {
            output[outputIndex] = DAT_004095f8[code * 2];
            output[outputIndex + 1] = DAT_004095f8[code * 2 + 1];
        }
        outputIndex += 2;
    }
}
}
