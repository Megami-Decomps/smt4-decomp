#ifndef SHARD_W6_W6MATCH2_RANGE_PRESETS_H
#define SHARD_W6_W6MATCH2_RANGE_PRESETS_H

#include "common.h"

struct RangeSet;

struct RangePresetGroup {
    s32 first; // 0x00
    s32 count; // 0x04
};

struct RangePreset {
    u16 first; // 0x00
    u16 last;  // 0x02
};

#endif
