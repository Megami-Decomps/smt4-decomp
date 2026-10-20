#include "common.h"

extern "C" {

void FUN_00104952(void);
void FUN_002eb46c(u32 object, s32 flag);

/* Calls FUN_00104952, then FUN_002eb46c(object, 0). */
void FUN_00104fc6(u32 object)
{
    FUN_00104952();
    FUN_002eb46c(object, 0);
}

} /* extern "C" */
