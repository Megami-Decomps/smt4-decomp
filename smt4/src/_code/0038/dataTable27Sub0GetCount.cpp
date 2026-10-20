#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable27Sub0GetCount(void)
{
    dataTableGet(0x27, 0);
    dataTableGetCount();
}

} /* extern "C" */
