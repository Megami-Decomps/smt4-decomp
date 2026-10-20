#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable17Sub1GetCount(void)
{
    dataTableGet(0x17, 1);
    dataTableGetCount();
}

} /* extern "C" */
