#ifndef UI_NUMBERALIGNMENT_H
#define UI_NUMBERALIGNMENT_H
#include "common.h"
#include <stddef.h>
struct NumberAlignmentSlot {
    s32 value;
    u8 unk04[0x3FC];
};
struct NumberAlignmentWindow {
    u8 unk0000[0x79AC];
    NumberAlignmentSlot slots[1];
};
struct NumberAlignmentMetric {
    union {
        u8 unk00[0xC];
        struct {
            u8 prefix[0xA];
            /* 0x0A */ s16 y;
        } placement;
    };
    s16 *value;
};
typedef char NumberAlignmentOffsets[offsetof(NumberAlignmentWindow, slots) == 0x79AC && sizeof(NumberAlignmentSlot) == 0x400 && offsetof(NumberAlignmentMetric, value) == 0xC ? 1 : -1];
typedef char NumberAlignmentMetricPlacementCheck[
    offsetof(NumberAlignmentMetric, placement.y) == 0xA && sizeof(NumberAlignmentMetric) == 0x10 ? 1 : -1];
#endif
