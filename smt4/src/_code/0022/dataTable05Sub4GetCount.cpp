#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable05Sub4GetCount(void)
{
    dataTableGet(5, 4);
    dataTableGetCount();
}

} /* extern "C" */
