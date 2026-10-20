#include "common.h"

extern "C" {

int dataTableGet(int arg0, int arg1);
int dataTableGetEntries(void);

/* Selects table entry (24, 0), then returns the table's entries. */
int FUN_00192780(void)
{
    dataTableGet(24, 0);
    return dataTableGetEntries();
}

} /* extern "C" */
