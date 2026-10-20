#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2fSub1GetCount(void)
{
    dataTableGet(0x2f, 1);
    dataTableGetCount();
}

} /* extern "C" */
