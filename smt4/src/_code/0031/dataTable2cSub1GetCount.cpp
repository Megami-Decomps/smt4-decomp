#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2cSub1GetCount(void)
{
    dataTableGet(0x2c, 1);
    dataTableGetCount();
}

} /* extern "C" */
