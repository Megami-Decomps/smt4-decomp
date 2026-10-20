#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable03Sub0GetCount(void)
{
    dataTableGet(3, 0);
    dataTableGetCount();
}

} /* extern "C" */
