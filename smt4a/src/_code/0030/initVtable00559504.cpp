#include "common.h"

extern "C" {

extern const u8 DAT_00559504[];  /* vtable */
const void **FUN_002fd284(void);

/* Stores the vtable at 0x00559504 into the object returned by FUN_002fd284. */
void initVtable00559504(void)
{
    const void **object = FUN_002fd284();
    *object = DAT_00559504;
}

} /* extern "C" */
