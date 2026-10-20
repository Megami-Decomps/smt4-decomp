#include "common.h"

extern "C" {

void FUN_00109f7e(void);
void FUN_002f310e(u32 object);

/* Calls FUN_00109f7e, then FUN_002f310e on the object. */
void FUN_00109f6e(u32 object)
{
    FUN_00109f7e();
    FUN_002f310e(object);
}

} /* extern "C" */
