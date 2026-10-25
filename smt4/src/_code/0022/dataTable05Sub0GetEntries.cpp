#include "common.h"
#include "battle/btlHelp.h"

extern "C" {

int dataTableGetEntries(void);
int dataTableGet(int id, int index);

const u8 *dataTable05Sub0GetEntries(void)
{
    dataTableGet(5, 0);
    dataTableGetEntries();
}

} /* extern "C" */
