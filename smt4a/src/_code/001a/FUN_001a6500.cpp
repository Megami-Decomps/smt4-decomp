#include "common.h"

extern "C" {

void dataTableFree(s32 code);

/* Calls dataTableFree with 0x28. */
void FUN_001a6500(void)
{
    dataTableFree(0x28);
}

} /* extern "C" */
