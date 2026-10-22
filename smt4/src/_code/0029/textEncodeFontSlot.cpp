#include "common.h"

extern "C" {
void memClearWords(void *buffer, u32 size);
extern s8 DAT_004def48[][0x60];
extern s8 DAT_004e0d88[];
extern const u8 DAT_004095f8[][2];

// Expand single-byte characters to font codes while preserving multibyte characters.
void textEncodeFontSlot(s32 slot, const u8 *text)
{
    s8 *output = DAT_004def48[slot];
    memClearWords(output, 0x60);
    if (output == NULL) {
        output = DAT_004e0d88;
    }
    s32 written = 0;
    s32 read = 0;
    for (;;) {
        u8 character = text[read++];
        if (character == 0) {
            output[written] = 0;
            output[written + 1] = 0;
            return;
        }
        if (character & 0x80) {
            output[written] = character;
            output[written + 1] = text[read++];
        } else if (character == '\n') {
            output[written] = -8;
            output[written + 1] = 1;
        } else {
            output[written] = DAT_004095f8[character][0];
            output[written + 1] = DAT_004095f8[character][1];
        }
        written += 2;
    }
}
}
