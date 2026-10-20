#include "common.h"

extern "C" {

extern const u8 DAT_0055a580[];  /* vtable */
const void **FUN_0030723c(void);

/* Stores the vtable at 0x0055a580 into the object returned by FUN_0030723c. */
void initVtable0055a580(void)
{
    const void **object = FUN_0030723c();
    *object = DAT_0055a580;
}

} /* extern "C" */
