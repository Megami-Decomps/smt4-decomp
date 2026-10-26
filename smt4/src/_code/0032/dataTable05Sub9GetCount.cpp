#include "common.h"
#include "gamedata/DataTableAccess.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

u32 dataTable05Sub9GetCount(void)
{
    dataTableGet(5, 9);
    dataTableGetCount();
}

} /* extern "C" */
