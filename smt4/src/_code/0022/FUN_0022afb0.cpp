#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id);

void FUN_0022afb0(void)
{
    dataTableGet(0x33);
    dataTableGetCount();
}

} /* extern "C" */
