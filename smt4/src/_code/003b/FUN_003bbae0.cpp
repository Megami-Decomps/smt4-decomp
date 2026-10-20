#include "common.h"

extern "C" {

int dataTableGetEntries(void);
int dataTableGet(int id);

void FUN_003bbae0(void)
{
    dataTableGet(0x33);
    dataTableGetEntries();
}

} /* extern "C" */
