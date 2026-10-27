/* NON_MATCHING: retail reuses R1 for the range index multiplication; compiled code saves R4 as an extra address temporary. */
#include "common.h"

struct SelectionRange {
    u32 first; // 0x00
    u32 last;  // 0x04
    u32 unk08; // 0x08
};
struct RangeSelection {
    u8 unk00[0x24];       // 0x00
    u32 current[3];       // 0x24
    u8 unk30[0x34];       // 0x30
    SelectionRange* ranges; // 0x64
    s16 index;            // 0x68
    u16 step;             // 0x6a
    u8 reverse;           // 0x6c
    u8 unk6d[0x1b];       // 0x6d
    u8 flag88;            // 0x88
    u8 unk89;             // 0x89
    u8 flag8a;            // 0x8a
};

// Selects a range endpoint and resets its progress flags.
extern "C" void FUN_0019e330(RangeSelection* selection, s32 index, s32 reverse)
{
    if (selection->ranges != NULL) {
        selection->index = index;
        selection->step = 0;
        selection->flag88 = 0;
        SelectionRange* range = &selection->ranges[index];
        selection->flag8a = 0;
        selection->reverse = reverse;
        u32 endpoint = reverse != 0 ? range->last : range->first;
        selection->current[0] = endpoint;
        selection->current[1] = endpoint;
        selection->current[2] = endpoint;
    }
}
