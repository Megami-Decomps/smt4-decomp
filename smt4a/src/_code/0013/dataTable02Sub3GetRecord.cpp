#include "gamedata/EncountData.h"

extern "C" {

void weightedTableRollNextValue(s32 first, s32 second, s32 flag);

/* Runs weightedTableRollNextValue on every (map, area) with an encounter roll state (EncountData.tbb table 3). */
void dataTable02Sub3GetRecord(void)
{
    void *table;
    EncountAreaKey *entries;
    s32 count;
    s32 i;

    table = dataTableGet(2, 3);
    entries = encountAreaKeys(table);
    count = dataTableGetCount(table);
    for (i = 0; i < count; i++) {
        weightedTableRollNextValue(entries[i].map, entries[i].area, 0);
    }
}

} /* extern "C" */
