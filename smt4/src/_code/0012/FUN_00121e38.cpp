#include "common.h"

extern "C" {

extern u8 DAT_00422110;
extern void **FUN_001314fc(void);

void FUN_00121e38(void)
{
    void **slot = FUN_001314fc();

    *slot = &DAT_00422110;
}

} /* extern "C" */
