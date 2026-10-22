#include "common.h"

extern "C" {

extern const u8 DAT_00559814[];  /* vtable */
const void **_ZN9Obj5593b8C1Ev(void);

/* Stores the vtable at 0x00559814 into the object returned by _ZN9Obj5593b8C1Ev. */
void initVtable00559814(void)
{
    const void **object = _ZN9Obj5593b8C1Ev();
    *object = DAT_00559814;
}

} /* extern "C" */
