#include "common.h"

extern "C" {

void dataTableFree(s32 code);

/* Calls dataTableFree with 0x15. */
void FUN_002e26a4(void)
{
    dataTableFree(0x15);
}

} /* extern "C" */
