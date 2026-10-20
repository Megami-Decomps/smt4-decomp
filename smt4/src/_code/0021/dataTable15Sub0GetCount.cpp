#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable15Sub0GetCount(void)
{
    dataTableGet(0x15, 0);
    dataTableGetCount();
}

} /* extern "C" */
