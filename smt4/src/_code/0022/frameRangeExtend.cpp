#include "common.h"
#include <stddef.h>

struct FrameRange {
    u16 begin;
    u16 end;
    u8 unk04[6];
};
struct FrameRangeBlock {
    u8 unk000[0xd0];
    FrameRange ranges[1];
};
struct FrameRangeOwner {
    u8 unk000[0x900];
    FrameRangeBlock block;
};

typedef char FrameRangeLayoutCheck[
    sizeof(FrameRange) == 0xa &&
    offsetof(FrameRangeBlock, ranges) == 0xd0 &&
    offsetof(FrameRangeOwner, block) == 0x900 &&
    sizeof(FrameRangeOwner) == 0x9da ? 1 : -1];

extern "C" {
// Extend the selected frame interval using nonnegative offsets from its clamped base.
void frameRangeExtend(u32 context, FrameRangeOwner *owner, u32 index, s32 base,
                  s32 beginOffset, s32 endOffset)
{
    if (base < owner->block.ranges[index].begin) {
        base = owner->block.ranges[index].begin;
    }
    if (beginOffset >= 0 && base + beginOffset > owner->block.ranges[index].begin) {
        owner->block.ranges[index].begin = base + beginOffset;
    }
    if (endOffset >= 0) {
        if (owner->block.ranges[index].end < base + endOffset) {
            owner->block.ranges[index].end = base + endOffset;
        }
        if (owner->block.ranges[index].end < owner->block.ranges[index].begin) {
            owner->block.ranges[index].end = owner->block.ranges[index].begin;
        }
    }
}
}
