#include "gamedata/PlayLogTable.h"

extern "C" {

/* Looks up the play log table (0x37, 0), fetches its rows and counts them (results unused). */
void FUN_002ebda8(void)
{
    void *table;

    table = dataTableGet(0x37, 0);
    dataTableGetEntries(table);
    dataTableGetCount(table);
}

} /* extern "C" */
