#ifndef BATTLE_WEIGHTEDENCOUNTER_H
#define BATTLE_WEIGHTEDENCOUNTER_H
#include "common.h"
#include <stddef.h>
struct WeightedEncounterEntry { u16 id; u16 weight; };
struct WeightedEncounterTable { WeightedEncounterEntry entries[30]; };
struct WeightedEncounterGroup { u8 prefix[0x14]; u16 members[6]; };
typedef char WeightedEncounterOffsets[sizeof(WeightedEncounterTable) == 0x78 && offsetof(WeightedEncounterGroup, members) == 0x14 ? 1 : -1];
#endif
