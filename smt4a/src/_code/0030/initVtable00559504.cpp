#include "common.h"

extern "C" {

extern const u8 DAT_00559504[];  /* vtable */
const void **_ZN9Obj559eccC1Ev(void);

/* Stores the vtable at 0x00559504 into the object returned by _ZN9Obj559eccC1Ev. */
void initVtable00559504(void)
{
    const void **object = _ZN9Obj559eccC1Ev();
    *object = DAT_00559504;
}

} /* extern "C" */
