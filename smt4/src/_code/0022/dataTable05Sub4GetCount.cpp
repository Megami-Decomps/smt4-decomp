#include "common.h"
#include "battle/btlHelp.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

u32 dataTable05Sub4GetCount(void)
{
    dataTableGet(5, 4);
    dataTableGetCount();
}

} /* extern "C" */
