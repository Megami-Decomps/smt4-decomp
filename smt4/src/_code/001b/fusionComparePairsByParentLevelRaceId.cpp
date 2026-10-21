/* NON_MATCHING: ID/record register roles and pair-word address formation differ; O2 may change allocation. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

namespace {
struct UnitePairListIV {
    /* 0x0000 */ u8 unk0000[0x1390];
    /* 0x1390 */ UnitePairEntry pairs[1]; // Prefix view of the variable-length pair storage.
};

inline s32 compareParent(u16 first, u16 second)
{
    const DevilSortRecord* a = devilGetRecord(first);
    const DevilSortRecord* b = devilGetRecord(second);
    s32 result = a->level - b->level;
    if (result != 0) {
        return result;
    }
    // Keep the fresh record queries used by the race/descending-level/id tie-breaker.
    a = devilGetRecord(first);
    b = devilGetRecord(second);
    result = a->race - b->race;
    if (result == 0) {
        result = b->level - a->level;
        if (result == 0) {
            result = a->id - b->id;
        }
    }
    return result;
}
}

extern "C" {
extern UniteWork* g_unite;

/* Sort pair-list indices by their first parent, then their second parent. */
s32 fusionComparePairsByParentLevelRaceId(const void* first, const void* second)
{
    const u16* a = static_cast<const u16*>(first);
    const u16* b = static_cast<const u16*>(second);
    const UnitePairListIV* work = reinterpret_cast<const UnitePairListIV*>(g_unite);
    u32 firstIds = work->pairs[*a].packedIds;
    u32 secondIds = work->pairs[*b].packedIds;
    const s32 result = compareParent(
        static_cast<u16>(firstIds & 0x7FFF), static_cast<u16>(secondIds & 0x7FFF));
    if (result != 0) {
        return result;
    }
    firstIds = work->pairs[*a].packedIds;
    secondIds = work->pairs[*b].packedIds;
    return compareParent(static_cast<u16>((firstIds & 0x3FFFFFFF) >> 15),
                         static_cast<u16>((secondIds & 0x3FFFFFFF) >> 15));
}
} // extern "C"
