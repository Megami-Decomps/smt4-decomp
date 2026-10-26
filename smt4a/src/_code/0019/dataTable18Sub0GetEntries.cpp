#include "common.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {

int dataTableGet(int arg0, int arg1);
int dataTableGetEntries(void);

/* Selects table entry (24, 0), then returns the table's entries. */
int dataTable18Sub0GetEntries(void)
{
    dataTableGet(24, 0);
    return dataTableGetEntries();
}

} /* extern "C" */
