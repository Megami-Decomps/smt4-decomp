#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2eSub0GetCount(void)
{
    dataTableGet(0x2e, 0);
    dataTableGetCount();
}

} /* extern "C" */
