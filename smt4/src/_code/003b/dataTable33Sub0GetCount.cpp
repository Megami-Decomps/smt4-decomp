#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable33Sub0GetCount(void)
{
    dataTableGet(0x33, 0);
    dataTableGetCount();
}

} /* extern "C" */
