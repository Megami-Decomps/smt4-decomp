/* NON_MATCHING: the entry lookup helper restores retail's `mov r1, r0`; only the scratch register of the index*11 product differs (retail r2, here r0). */
#include "common.h"
#include "gamedata/CampCecTable.h"
extern "C" {

/* The value field of title row `index` (CampCecTable.tbb table 0). */
u16 dataTableGetEntryValue(u32 index)
{
    CampCecRecord *entry = campCecRecordAt(index);
    if (entry != NULL) {
        return entry->value;
    }
    return 0;
}
}
