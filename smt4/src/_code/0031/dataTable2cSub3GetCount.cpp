#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2cSub3GetCount(void)
{
    dataTableGet(0x2c, 3);
    dataTableGetCount();
}

} /* extern "C" */
