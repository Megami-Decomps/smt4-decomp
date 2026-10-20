#include "common.h"

extern "C" {

void dataTableFree(s32 code);

/* Calls dataTableFree with 0x36. */
void FUN_002c1648(void)
{
    dataTableFree(0x36);
}

} /* extern "C" */
