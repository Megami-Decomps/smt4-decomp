#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2bSub1GetCount(void)
{
    dataTableGet(0x2b, 1);
    dataTableGetCount();
}

} /* extern "C" */
