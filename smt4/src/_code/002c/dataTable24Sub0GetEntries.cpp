/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void *dataTableGet(u32 table, u32 index);
void dataTableGetEntries(void *table);

void dataTable24Sub0GetEntries(void)
{
    dataTableGetEntries(dataTableGet(24, 0));
}

}
