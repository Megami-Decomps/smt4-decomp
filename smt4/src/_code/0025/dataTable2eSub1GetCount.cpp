#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2eSub1GetCount(void)
{
    dataTableGet(0x2e, 1);
    dataTableGetCount();
}

} /* extern "C" */
