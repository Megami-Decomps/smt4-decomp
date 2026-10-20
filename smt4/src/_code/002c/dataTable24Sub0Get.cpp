#include "common.h"

extern "C" {

int dataTableGet(int arg0, int arg1);
int dataTableGetCount(void);

/* Selects table entry (24, 0), then returns the table's count. */
int dataTable24Sub0Get(void)
{
    dataTableGet(24, 0);
    return dataTableGetCount();
}

} /* extern "C" */
