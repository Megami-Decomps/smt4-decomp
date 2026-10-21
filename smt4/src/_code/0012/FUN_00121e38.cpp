#include "common.h"

extern "C" {

extern u8 DAT_00422110;
extern void **_ZN9Obj422094C1Ev(void);

void FUN_00121e38(void)
{
    void **slot = _ZN9Obj422094C1Ev();

    *slot = &DAT_00422110;
}

} /* extern "C" */
