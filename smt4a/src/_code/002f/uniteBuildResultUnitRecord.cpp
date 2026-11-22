#include "camp/Unite/UniteGlobals.h"
#include "shard/Shard0032.h"
#include "util/BitsAndBytes_VariantB.h"
#include "gamedata/SaveSlotRecord.h"

/* unit-local: UniteWorkA's result pair list read as IV's 64-bit bitfield entries, which would change the shared
 * work block's alignment and its 32-bit packed-pair view. */
struct FusionResultPairsView {
    /* 0x0000 */ u8 unk0000[0x9078];
    /* 0x9078 */ UnitePairEntryIV pairs[1];
};

extern "C" {
void unitRecordBuild(s32 id, UnitRecord *out);
void recordMergeByteMasks(void *context, UnitRecord *first, UnitRecord *second,
                  s32 option, UnitRecord *out);
void uniteCollectInheritableSkills(u32 resultId, UnitRecord *first, UnitRecord *second);
void unitRecomputeDerivedStats(UnitRecord *unit);

/* Builds the result record of fusion pair `index` into `out` (mode 0: the fused demon with its inherited skills;
 * 1 and 2: a copy of the first or second ingredient). Returns 1 on success. */
u32 uniteBuildResultUnitRecord(UnitRecord *out, s32 index, s32 mode, u32)
{
    UniteWorkA *work = g_unite;
    FusionResultPairsView *list = (FusionResultPairsView *)work;
    u32 result = 0;
    if (mode == 0) {
        if (list->pairs[index].resultId) {
            unitRecordBuild(list->pairs[index].resultId, out);
            UnitRecord *first = slotRecordFindById(list->pairs[index].firstId);
            UnitRecord *second = slotRecordFindById(list->pairs[index].secondId);
            if (first && second) {
                recordMergeByteMasks(work->context, first, second, 0, out);
                uniteCollectInheritableSkills(list->pairs[index].resultId, first, second);
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
                result = 1;
            }
        }
    } else if (mode == 1) {
        UnitRecord *source = slotRecordFindById(list->pairs[index].firstId);
        if (source) {
            *out = *source;
            result = 1;
        }
    } else if (mode == 2) {
        UnitRecord *source = slotRecordFindById(list->pairs[index].secondId);
        if (source) {
            *out = *source;
            result = 1;
        }
    }
    return result;
}
}
