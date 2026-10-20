#include "common.h"

extern "C" {

void rc4KeySetup(void);
void FUN_002f310e(u32 object);

/* Calls rc4KeySetup, then FUN_002f310e on the object. */
void FUN_00109f6e(u32 object)
{
    rc4KeySetup();
    FUN_002f310e(object);
}

} /* extern "C" */
