#include "common.h"

extern "C" {

void FUN_002ea43c(u32 object);
void FUN_002faf62(void);

/* Runs FUN_002faf62, then FUN_002ea43c on the object. */
void FUN_002fa6e8(u32 object)
{
    FUN_002faf62();
    FUN_002ea43c(object);
}

} /* extern "C" */
