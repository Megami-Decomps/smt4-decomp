#include "battle/BtlStatusAilments.h"

extern "C" {
// Report whether any of the selected status bits is present.
s32 btlStatusFlagsHaveAilment(u32 flags)
{
    if (statusFlagsHaveAilment(flags))
        return 1;
    return 0;
}
}
