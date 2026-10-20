#include "common.h"

extern "C" {

extern const u8 DAT_00558630[];  /* vtable */
const void **FUN_002ea6e8(void);

/* Stores the vtable at 0x00558630 into the object returned by FUN_002ea6e8. */
void initVtable00558630(void)
{
    const void **object = FUN_002ea6e8();
    *object = DAT_00558630;
}

} /* extern "C" */
