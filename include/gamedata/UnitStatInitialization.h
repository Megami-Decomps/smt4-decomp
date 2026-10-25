#ifndef GAMEDATA_UNITSTATINITIALIZATION_H
#define GAMEDATA_UNITSTATINITIALIZATION_H
#include "common.h"
#include <stddef.h>

// Apocalypse's category entry exposes seven base statistics.
struct CategoryUnitStatsA {
    u8 unk00[8];
    u16 sortKey;
    u8 unk0A[0xE];
    u16 stats[7];
};
struct InitializedUnitStatsA {
    u16 base[7];
    u16 current[7];
    u16 maximum[7];
    u16 health;
    u16 mana;
    u8 unk2E[0x34];
    u16 id;
    u16 sortKey;
    u8 unk66[0xC6];
    u16 categoryId;
    u16 variant;
    u16 unk130;
    u16 partyCategories[3];
};
typedef char CategoryUnitStatsALayoutCheck[
    offsetof(CategoryUnitStatsA, stats) == 0x18 && sizeof(CategoryUnitStatsA) == 0x26 ? 1 : -1];
typedef char InitializedUnitStatsALayoutCheck[
    offsetof(InitializedUnitStatsA, id) == 0x62 &&
    offsetof(InitializedUnitStatsA, categoryId) == 0x12C &&
    offsetof(InitializedUnitStatsA, partyCategories) == 0x132 &&
    sizeof(InitializedUnitStatsA) == 0x138 ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void *dataTableGetCategoryEntry(s32 category, u32 index);
#ifdef __cplusplus
}
#endif

#endif
