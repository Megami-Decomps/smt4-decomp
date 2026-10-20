#include "common.h"

extern "C" {

extern const u8 DAT_005593b0[];  /* vtable */
const void **FUN_00116934(void);

/* Stores the vtable at 0x005593b0 into the object returned by FUN_00116934. */
void initVtable005593b0(void)
{
    const void **object = FUN_00116934();
    *object = DAT_005593b0;
}

} /* extern "C" */
