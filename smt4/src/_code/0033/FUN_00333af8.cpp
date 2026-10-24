/* NON_MATCHING: only the argument uxth is predicated (uxthne before the beq) in retail */
#include "common.h"

struct QuestRecord {
    u8 unk000[0x1AA];  // 0x000
    u16 areaA;         // 0x1AA
    u16 areaB;         // 0x1AC
};

extern "C" {

QuestRecord *dataTable1bOr1cGetRecord(u16 id);
u8 *questGetRuntimeStatus(u16 id);

/* Collects the ids of all quests tied to `area` into `out`, optionally only those whose runtime status has bit 0 set. */
void FUN_00333af8(u32 area, u16 *out, s32 onlyActive)
{
    s32 count = 0;

    for (s32 id = 0; id < 400; id++) {
        QuestRecord *record = dataTable1bOr1cGetRecord(id);

        if (record != NULL && (record->areaA == area || record->areaB == area)) {
            if (onlyActive != 0) {
                if ((*questGetRuntimeStatus(id) & 1) == 0) {
                    continue;
                }
            }
            out[count++] = id;
        }
    }
}

} /* extern "C" */
