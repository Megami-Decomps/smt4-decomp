/* NON_MATCHING: chain comparison and g_unite load use a different prologue schedule. */
#include "camp/Unite/UniteGlobals.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {

/* Tests whether a selected fusion pair or chain contains a demon with ailment bit two. */
u32 fusionSelectionHasAilment(s32 selection, s32 chain)
{
    u32 result = 0;
    if (chain == 0) {
        UniteWorkA *work = g_unite;
        for (s32 component = 0; component < 2; ++component) {
            u32 id;
            if (component == 0) {
                id = work->pairList.pairs[selection].ids.firstId;
            } else {
                id = work->pairList.pairs[selection].ids.secondId;
            }
            if (id != 0) {
                SlotRecordA *record = slotRecordFindById(id);
                if (record != NULL && (record->ailments & 4) != 0) {
                    result = 1;
                    break;
                }
            }
        }
    } else {
        const UniteWorkA *work = g_unite;
        for (s32 index = 0; index < 12; ++index) {
            if (work->chains.groups[selection].ids[index] != 0) {
                SlotRecordA *record = slotRecordFindById(work->chains.groups[selection].ids[index]);
                if (record != NULL && (record->ailments & 4) != 0) {
                    result = 1;
                    break;
                }
            }
        }
    }
    return result;
}
} /* extern "C" */
