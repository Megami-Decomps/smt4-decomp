/* NON_MATCHING: indexed byte loads replace retail's post-increment input pointer and alter truncation branch layout. */
#include "common.h"

extern "C" {
// Decode a one-to-four-byte, most-significant-group-first variable-length integer.
u32 FUN_003b0190(const u8 *bytes, u32 *value, s32 *position, s32 end)
{
    if (*position == end)
        return 0;
    u8 byte = bytes[0];
    ++*position;
    if (!(byte & 0x80)) {
        *value = byte;
    } else {
        if (*position == end)
            return 0;
        *value = byte & 0x7f;
        byte = bytes[1];
        ++*position;
        if (!(byte & 0x80)) {
            *value = (*value << 7) | byte;
            return 1;
        }
        if (*position == end)
            return 0;
        *value = (*value << 7) | (byte & 0x7f);
        byte = bytes[2];
        ++*position;
        if (byte & 0x80) {
            if (*position == end)
                return 0;
            *value = (*value << 7) | (byte & 0x7f);
            *value = (*value << 7) + bytes[3];
            ++*position;
            return 1;
        }
        *value = (*value << 7) | byte;
    }
    return 1;
}
}
