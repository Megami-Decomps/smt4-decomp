#include "common.h"

extern "C" {

extern const u8 DAT_00558510[];  /* vtable */
const void **FUN_0010d134(void);

/* Stores the vtable at 0x558510 into the object returned by FUN_0010d134. */
void initVtable00558510(void)
{
    const void **object = FUN_0010d134();
    *object = DAT_00558510;
}

} /* extern "C" */
