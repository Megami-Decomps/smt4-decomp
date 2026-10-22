/* NON_MATCHING: source/output index increments and paired-byte stores are scheduled differently. */
#include "common.h"

extern "C" {
extern u8 DAT_004e0d88[];
extern const u8 DAT_00409f58[];

u8 *FUN_002bcfc0(const u8 *source, u8 *output)
{
    if (!output) {
        output = DAT_004e0d88;
    }
    u32 sourceIndex = 0;
    u32 outputIndex = 0;
    for (;;) {
        u8 code = source[sourceIndex++];
        if (!code) {
            output[outputIndex] = 0;
            return &output[outputIndex];
        }
        if (code & 0x80) {
            output[outputIndex++] = code;
            output[outputIndex++] = source[sourceIndex++];
        } else if (code == '\n') {
            output[outputIndex++] = 0xf8;
            output[outputIndex++] = 0xff;
        } else {
            output[outputIndex++] = DAT_00409f58[code * 2];
            output[outputIndex++] = DAT_00409f58[code * 2 + 1];
        }
    }
}
}
