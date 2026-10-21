#include "common.h"

struct HalfwordAppendList {
    u8 unk000[0x146];
    u16 values[24]; // 0x146
    u16 unk176;
    s32 count; // 0x178
};

extern "C" {
// Append nonzero entries from an eight-value group and retain a trailing zero when space remains.
void halfwordListAppendGroup(HalfwordAppendList *list, u32 mode, const u16 *values)
{
    for (s32 index = 0; index < 8; ++index) {
        u16 value = values[index];
        if (value != 0) {
            list->values[list->count] = value;
            ++list->count;
        }
    }
    if (list->count < 24) {
        list->values[list->count] = 0;
    }
}
}
