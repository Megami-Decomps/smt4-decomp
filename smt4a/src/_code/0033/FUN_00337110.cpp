/* NON_MATCHING: the block layout matches; the two tie-breaks that read both words of a pair (resultId, secondType) differ: retail loads the words one at a time, interleaved between the pairs, where the build loads a pair with ldm. */
#include "camp/Unite/UniteWork.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

/* A local wide-bitfield view avoids changing the shared pair type's four-byte alignment. */
struct WideFusionPairView {
    u64 firstId : 15;
    u64 secondId : 15;
    u64 firstType : 2;
    u64 secondType : 2;
    u64 resultId : 15;
    u64 unknown : 15;
};

extern "C" s32 FUN_00337110(const UnitePairEntryIV *firstPair, const UnitePairEntryIV *secondPair)
{
    const WideFusionPairView *first = (const WideFusionPairView *)firstPair;
    const WideFusionPairView *second = (const WideFusionPairView *)secondPair;
    const NkmBaseRecordA *a = nkmBaseGetRecord(first->resultId);
    const NkmBaseRecordA *b = nkmBaseGetRecord(second->resultId);
    s32 result = a->race - b->race;
    if (result == 0)
        result = b->level - a->level;
    if (result == 0)
        result = first->resultId - second->resultId;
    a = nkmBaseGetRecord(first->firstId);
    b = nkmBaseGetRecord(second->firstId);
    if (result == 0)
        result = a->race - b->race;
    if (result == 0)
        result = b->level - a->level;
    if (result == 0)
        result = first->firstId - second->firstId;
    if (result == 0)
        result = first->firstType - second->firstType;
    a = nkmBaseGetRecord(first->secondId);
    b = nkmBaseGetRecord(second->secondId);
    if (result == 0)
        result = a->race - b->race;
    if (result == 0)
        result = b->level - a->level;
    if (result == 0)
        result = first->secondId - second->secondId;
    if (result == 0)
        result = first->secondType - second->secondType;
    return result;
}
