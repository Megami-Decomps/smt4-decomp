#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2eSub2GetCount(void)
{
    dataTableGet(0x2e, 2);
    dataTableGetCount();
}

} /* extern "C" */
