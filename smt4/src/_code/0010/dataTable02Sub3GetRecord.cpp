#include "gamedata/EncountData.h"

extern "C" {

int weightedTableRollNextValue(int a, int b, int c);

/* Runs weightedTableRollNextValue on every (map, area) with an encounter roll state (EncountData.tbb table 3). */
void dataTable02Sub3GetRecord(void)
{
    void *table = dataTableGet(2, 3);
    EncountAreaKey *entries = encountAreaKeys(table);
    s32 count = dataTableGetCount(table);
    s32 i;

    for (i = 0; i < count; i++) {
        weightedTableRollNextValue(entries[i].map, entries[i].area, 0);
    }
}

} /* extern "C" */
