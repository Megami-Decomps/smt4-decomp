#include "common.h"

extern "C" {

extern const u8 DAT_00559814[];  /* vtable */
const void **FUN_002e9f80(void);

/* Stores the vtable at 0x00559814 into the object returned by FUN_002e9f80. */
void initVtable00559814(void)
{
    const void **object = FUN_002e9f80();
    *object = DAT_00559814;
}

} /* extern "C" */
