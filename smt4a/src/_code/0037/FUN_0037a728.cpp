/* NON_MATCHING: encoded newline constants and shared output-store lowering differ. */
#include "common.h"

extern "C" {
extern const u8 DAT_0053d2e8[][2];

// Expand single-byte glyphs and preserve multibyte characters in the game encoding.
void FUN_0037a728(const u8 *source, u8 *destination, s32 capacity)
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
            destination[written] = 0xf8;
            destination[written + 1] = 1;
        } else {
            destination[written] = DAT_0053d2e8[character][0];
            destination[written + 1] = DAT_0053d2e8[character][1];
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
