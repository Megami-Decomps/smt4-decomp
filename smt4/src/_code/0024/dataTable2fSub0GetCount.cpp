#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable2fSub0GetCount(void)
{
    dataTableGet(0x2f, 0);
    dataTableGetCount();
}

} /* extern "C" */
