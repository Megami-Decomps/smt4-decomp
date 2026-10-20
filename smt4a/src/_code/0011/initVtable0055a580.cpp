#include "common.h"

extern "C" {

extern const u8 DAT_0055a580[];  /* vtable */
const void **_ZN9Obj559720C1Ei(void);

/* Stores the vtable at 0x0055a580 into the object returned by _ZN9Obj559720C1Ei. */
void initVtable0055a580(void)
{
    const void **object = _ZN9Obj559720C1Ei();
    *object = DAT_0055a580;
}

} /* extern "C" */
