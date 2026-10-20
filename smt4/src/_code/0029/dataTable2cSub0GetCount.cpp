#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2cSub0GetCount(void)
{
    dataTableGet(0x2c, 0);
    dataTableGetCount();
}

} /* extern "C" */
