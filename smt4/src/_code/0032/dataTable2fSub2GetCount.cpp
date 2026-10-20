#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2fSub2GetCount(void)
{
    dataTableGet(0x2f, 2);
    dataTableGetCount();
}

} /* extern "C" */
