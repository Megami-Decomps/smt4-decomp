/* NON_MATCHING: packed-result zero test, pair address folding and shared success-return allocation differ from retail. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/Shard0032.h"

// The packed pair uses a 64-bit allocation unit. Keep this view local so its
// alignment does not change the published, partial UniteWork layout.
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
extern UniteWork *g_unite;
UnitRecord *slotRecordFindById(u32 id);
void unitRecordBuild(s32 id, UnitRecord *out);
void rt_memcpy_w(void *out, const void *source, u32 size);
void FUN_004da6e0(void *context, UnitRecord *first, UnitRecord *second,
                  s32 option, UnitRecord *out);
void FUN_0028a538(u32 resultId, UnitRecord *first, UnitRecord *second);
s32 arrayContainsU16(const u16 *skills, s32 count, u16 skill);
s32 getUnlockedSlotCount(UnitRecord *unit);
void FUN_004bcd90(UnitRecord *unit);

u32 FUN_002f3bc4(UnitRecord *out, s32 index, s32 mode, u32)
{
    UniteWork *work = g_unite;
    FusionResultPairView *pair = (FusionResultPairView *)&work->resultPairsA.pairs[index];
    if (mode == 0) {
        if (pair->resultId == 0)
            return 0;
        unitRecordBuild(pair->resultId, out);
        UnitRecord *first = slotRecordFindById(pair->firstId);
        UnitRecord *second = slotRecordFindById(pair->secondId);
        if (!first || !second)
            return 0;
        FUN_004da6e0(work->context, first, second, 0, out);
        FUN_0028a538(pair->resultId, first, second);
        for (s32 i = 0; i < 24; ++i) {
            if (work->inheritanceA.skills[i] != 0 &&
                !arrayContainsU16(out->skillList.skills, 8, work->inheritanceA.skills[i])) {
                s32 count = getUnlockedSlotCount(out);
                for (s32 slot = 0; slot < count; ++slot) {
                    if (out->skillList.skills[slot] == 0) {
                        out->skillList.skills[slot] = work->inheritanceA.skills[i];
                        break;
                    }
                }
            }
        }
        FUN_004bcd90(out);
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
        rt_memcpy_w(out, source, sizeof(UnitRecord));
    }
    return 1;
}
}
