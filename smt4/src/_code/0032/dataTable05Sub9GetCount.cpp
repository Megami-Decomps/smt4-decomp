#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable05Sub9GetCount(void)
{
    dataTableGet(5, 9);
    dataTableGetCount();
}

} /* extern "C" */
