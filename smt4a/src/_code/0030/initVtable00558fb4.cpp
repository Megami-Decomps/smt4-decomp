#include "common.h"

extern "C" {

extern const u8 DAT_00558fb4[];  /* vtable */
const void **FUN_002f4f3c(void);

/* Stores the vtable at 0x00558fb4 into the object returned by FUN_002f4f3c. */
void initVtable00558fb4(void)
{
    const void **object = FUN_002f4f3c();
    *object = DAT_00558fb4;
}

} /* extern "C" */
