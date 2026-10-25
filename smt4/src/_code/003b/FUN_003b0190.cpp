/* NON_MATCHING: post-increment reads and the shift-after-or accumulation now match; only the placement of the shared return-1 block differs. */
#include "common.h"

extern "C" {
// Decode a one-to-four-byte, most-significant-group-first variable-length integer.
u32 FUN_003b0190(const u8 *bytes, u32 *value, s32 *position, s32 end)
{
    if (*position == end)
        return 0;
    u8 byte = *bytes++;
    ++*position;
    if (!(byte & 0x80)) {
        *value = byte;
    } else {
        if (*position == end)
            return 0;
        *value = (byte & 0x7f) << 7;
        byte = *bytes++;
        ++*position;
        if (!(byte & 0x80)) {
            *value |= byte;
        } else {
            if (*position == end)
                return 0;
            *value = (*value | (byte & 0x7f)) << 7;
            byte = *bytes++;
            ++*position;
            if (!(byte & 0x80)) {
                *value |= byte;
            } else {
                if (*position == end)
                    return 0;
                *value = (*value | (byte & 0x7f)) << 7;
                *value |= *bytes++;
                ++*position;
            }
        }
    }
    return 1;
}
}
