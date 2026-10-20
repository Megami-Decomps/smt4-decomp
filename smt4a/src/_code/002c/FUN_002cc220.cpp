#include "common.h"

extern "C" {

void dataTableFree(s32 code);

/* Calls dataTableFree with 0x16. */
void FUN_002cc220(void)
{
    dataTableFree(0x16);
}

} /* extern "C" */
