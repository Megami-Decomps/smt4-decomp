#include "common.h"

extern "C" {
extern const u8 g_singleByteGlyphTable[][2];

// Expand single-byte glyphs and preserve multibyte characters in the game encoding.
void textExpandSingleByteGlyphs(const u8 *source, s8 *destination, s32 capacity)
{
    s32 written = 0;
    s32 read = 0;
    for (;;) {
        u8 character = source[read++];
        if (character == 0) {
            destination[written] = 0;
            destination[written + 1] = 0;
            return;
        }
        if (character & 0x80) {
            destination[written] = character;
            destination[written + 1] = source[read++];
        } else if (character == '\n') {
            destination[written] = -8;
            destination[written + 1] = 1;
        } else {
            destination[written] = g_singleByteGlyphTable[character][0];
            destination[written + 1] = g_singleByteGlyphTable[character][1];
        }
        written += 2;
        if (written >= capacity) {
            destination[capacity - 2] = 0;
            destination[capacity - 1] = 0;
            return;
        }
    }
}
}
