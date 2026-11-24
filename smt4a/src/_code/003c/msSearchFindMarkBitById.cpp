/* NON_MATCHING: 7 lines: the loop latch loads g_aocSystem straight into r0 where retail keeps it in r3 (`ldr r3, [r8];
 * mov r5, r0; ...; mov r0, r3`). Precomputing the base count and the first combined count into two single-use locals
 * before a guarded do/while is IDENTICAL, but the same guard without those locals is 15 lines (wave 91 review:
 * steering); written as its siblings' loop over msSearchCount. */
#include "gamedata/MsSearchTableA.h"

extern "C" {

/* Finds a map search mark by ID and returns its bit, or -1 when absent. */
s32 msSearchFindMarkBitById(s32 key)
{
    for (s32 index = 0; index < msSearchCount(); ++index) {
        MsSearchRecord *record = msSearchGetRecord(index);
        if (record->id == key) {
            return record->markBit;
        }
    }
    return -1;
}
} /* extern "C" */
