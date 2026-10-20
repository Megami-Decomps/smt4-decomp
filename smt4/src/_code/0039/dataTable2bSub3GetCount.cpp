#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2bSub3GetCount(void)
{
    dataTableGet(0x2b, 3);
    dataTableGetCount();
}

} /* extern "C" */
