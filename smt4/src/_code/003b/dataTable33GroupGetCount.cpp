#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void dataTable33GroupGetCount(u32 unused, int group)
{
    dataTableGet(0x33, group + 1);
    dataTableGetCount();
}

} /* extern "C" */
