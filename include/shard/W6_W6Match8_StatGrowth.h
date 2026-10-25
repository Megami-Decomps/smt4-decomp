#ifndef SHARD_W6_W6MATCH8_STAT_GROWTH_H
#define SHARD_W6_W6MATCH8_STAT_GROWTH_H

#include "common.h"

struct LevelEntry {
    u16 level; // first level in the range
    u16 id;    // last level in the range (legacy table field name)
    u8 kind;
    u8 rateA;
    u8 rateB;
    u8 flags;
};
struct StatGrowthParameters {
    u8 stats[5];
    u8 reserved05;
    u16 baseHp; // 0x06
    u16 baseMp; // 0x08
    u8 hpGrowth; // 0x0a
    u8 mpGrowth; // 0x0b
    u16 hp; // 0x0c
    u16 mp; // 0x0e
    u8 kind; // 0x10
    u8 reserved11;
};

extern "C" u32 unitComputeMaximumHpAtLevel(s32 level, const StatGrowthParameters *parameters);

#ifdef __cplusplus
extern "C" {
#endif

u8 gameDataFlagTestBit(u32 bit);

#ifdef __cplusplus
}
#endif

#endif
