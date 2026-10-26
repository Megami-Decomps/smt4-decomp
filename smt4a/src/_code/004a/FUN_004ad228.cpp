#include "common.h"

extern "C" {
// Decode a one-to-four-byte, most-significant-group-first variable-length integer.
u32 FUN_004ad228(const u8 *bytes, u32 *value, s32 *position, s32 end)
{
    if (*position == end)
        return 0;
    u8 byte = *bytes++;
    ++*position;
    if (!(byte & 0x80)) {
        *value = byte;
        return 1;
    }
    if (*position == end)
        return 0;
    *value = (byte & 0x7f) << 7;
    byte = *bytes++;
    ++*position;
    if (!(byte & 0x80)) {
        *value |= byte;
        return 1;
    }
    if (*position == end)
        return 0;
    *value = (*value | (byte & 0x7f)) << 7;
    byte = *bytes++;
    ++*position;
    if (!(byte & 0x80)) {
        *value |= byte;
        return 1;
    }
    if (*position == end)
        return 0;
    *value = (*value | (byte & 0x7f)) << 7;
    *value |= *bytes;
    ++*position;
    return 1;
}
}
