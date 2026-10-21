/* NON_MATCHING: range address uses add0x9d0 plus halfword offsets0/2 instead of retail add0x900 plus offsets0xd0/0xd2; all other instructions match. */
#include "common.h"

struct FrameRange {
    u16 begin;
    u16 end;
    u8 unk04[6];
};
struct FrameRangeOwner {
    u8 unk000[0x9d0];
    FrameRange ranges[1]; // 0x9d0, stride0x0a
};

extern "C" {
// Extend the selected frame interval using nonnegative offsets from its clamped base.
void FUN_002296f4(u32 context, FrameRangeOwner *owner, u32 index, s32 base,
                  s32 beginOffset, s32 endOffset)
{
    FrameRange *range = &owner->ranges[index];
    if (base < range->begin) {
        base = range->begin;
    }
    if (beginOffset >= 0 && base + beginOffset > range->begin) {
        range->begin = base + beginOffset;
    }
    if (endOffset >= 0) {
        if (range->end < base + endOffset) {
            range->end = base + endOffset;
        }
        if (range->end < range->begin) {
            range->end = range->begin;
        }
    }
}
}
