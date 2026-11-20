#include "common.h"

extern "C" void asdMdlManagerUpdate();

// Run model-manager maintenance and acknowledge the callback.
extern "C" s32 asdMdlManagerMaintenanceCallback()
{
    asdMdlManagerUpdate();
    return 0;
}
