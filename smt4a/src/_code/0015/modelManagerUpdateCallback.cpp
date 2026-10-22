#include "common.h"

extern "C" void FUN_00162a50(void);

/* Run the model manager callback and report success. */
extern "C" s32 modelManagerUpdateCallback(void)
{
    FUN_00162a50();
    return 0;
}
