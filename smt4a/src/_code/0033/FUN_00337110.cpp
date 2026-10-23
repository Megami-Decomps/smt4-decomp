/* NON_MATCHING: packed-ID load grouping and placement of the parent tie-break cold blocks differ. */
#include "shard/W5_W5Match2_UniteWork.h"
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
    const DevilRecordA *a = FUN_00184310(first->resultId);
    const DevilRecordA *b = FUN_00184310(second->resultId);
    s32 result = a->race - b->race;
    if (!result) {
        result = b->level - a->level;
        if (!result)
            result = first->resultId - second->resultId;
    }
    a = FUN_00184310(first->firstId);
    b = FUN_00184310(second->firstId);
    if (!result) {
        result = a->race - b->race;
        if (!result) {
            result = b->level - a->level;
            if (!result) {
                result = first->firstId - second->firstId;
                if (!result)
                    result = first->firstType - second->firstType;
            }
        }
    }
    a = FUN_00184310(first->secondId);
    b = FUN_00184310(second->secondId);
    if (!result) {
        result = a->race - b->race;
        if (!result) {
            result = b->level - a->level;
            if (!result) {
                result = first->secondId - second->secondId;
                if (!result)
                    result = first->secondType - second->secondType;
            }
        }
    }
    return result;
}
