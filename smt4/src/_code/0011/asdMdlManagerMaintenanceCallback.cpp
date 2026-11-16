#include "common.h"

extern "C" void FUN_001247f0();

// Run model-manager maintenance and acknowledge the callback.
extern "C" s32 asdMdlManagerMaintenanceCallback()
{
    FUN_001247f0();
    return 0;
}
