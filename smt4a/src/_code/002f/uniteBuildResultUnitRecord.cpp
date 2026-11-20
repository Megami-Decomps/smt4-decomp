/* NON_MATCHING: packed-result zero test, pair address folding and shared success-return allocation differ from retail. */
#include "camp/Unite/UniteGlobals.h"
#include "shard/Shard0032.h"
#include "util/BitsAndBytes_VariantB.h"
#include "gamedata/SaveSlotRecord.h"

// The packed pair uses a 64-bit allocation unit. Keep this view local so its
// alignment does not change the published, partial UniteWorkA layout.
struct FusionResultPairView {
    u64 firstId : 15;
    u64 secondId : 15;
    u64 firstType : 2;
    u64 secondType : 2;
    u64 resultId : 15;
    u64 reserved : 15;
};
typedef char FusionResultPairViewSizeCheck[sizeof(FusionResultPairView) == 8 ? 1 : -1];

extern "C" {
void unitRecordBuild(s32 id, UnitRecord *out);
void __aeabi_memcpy4(void *out, const void *source, u32 size);
void recordMergeByteMasks(void *context, UnitRecord *first, UnitRecord *second,
                  s32 option, UnitRecord *out);
void FUN_0028a538(u32 resultId, UnitRecord *first, UnitRecord *second);
void unitRecomputeDerivedStats(UnitRecord *unit);

u32 uniteBuildResultUnitRecord(UnitRecord *out, s32 index, s32 mode, u32)
{
    UniteWorkA *work = g_unite;
    FusionResultPairView *pair = (FusionResultPairView *)&work->resultPairsA.pairs[index];
    if (mode == 0) {
        if (pair->resultId == 0)
            return 0;
        unitRecordBuild(pair->resultId, out);
        UnitRecord *first = slotRecordFindById(pair->firstId);
        UnitRecord *second = slotRecordFindById(pair->secondId);
        if (!first || !second)
            return 0;
        recordMergeByteMasks(work->context, first, second, 0, out);
        FUN_0028a538(pair->resultId, first, second);
        for (s32 i = 0; i < 24; ++i) {
            if (work->inheritanceA.skills[i] != 0 &&
                !arrayContainsU16(out->skills, 8, work->inheritanceA.skills[i])) {
                s32 count = getUnlockedSlotCount(out);
                for (s32 slot = 0; slot < count; ++slot) {
                    if (out->skills[slot] == 0) {
                        out->skills[slot] = work->inheritanceA.skills[i];
                        break;
                    }
                }
            }
        }
        unitRecomputeDerivedStats(out);
    } else {
        UnitRecord *source;
        if (mode == 1)
            source = slotRecordFindById(pair->firstId);
        else if (mode == 2)
            source = slotRecordFindById(pair->secondId);
        else
            return 0;
        if (!source)
            return 0;
        __aeabi_memcpy4(out, source, sizeof(UnitRecord));
    }
    return 1;
}
}
