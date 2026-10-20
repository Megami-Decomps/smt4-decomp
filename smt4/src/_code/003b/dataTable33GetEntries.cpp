#include "common.h"

extern "C" {

int dataTableGetEntries(void);
int dataTableGet(int id);

void dataTable33GetEntries(void)
{
    dataTableGet(0x33);
    dataTableGetEntries();
}

} /* extern "C" */
