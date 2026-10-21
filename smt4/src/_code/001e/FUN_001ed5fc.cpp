#include "common.h"

extern "C" {

int workCommandRefreshActiveSlots(void);

u32 FUN_001ed5fc(void)
{
    workCommandRefreshActiveSlots();
    return 1;
}

} /* extern "C" */
