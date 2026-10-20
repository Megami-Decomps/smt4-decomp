#include "common.h"

extern "C" {

int dataTableGet(int id, int index);
extern int dataTableGetEntries(void);

/* Address of record `index` (100-byte records) of data table 0x15/0 (no range check). */
int dataTable15Sub0GetEntries(int index)
{
    int entries;

    dataTableGet(0x15, 0);
    entries = dataTableGetEntries();
    return entries + index * 100;
}

} /* extern "C" */
