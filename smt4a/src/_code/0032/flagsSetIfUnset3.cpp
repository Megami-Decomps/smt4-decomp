#include "map/InteractionFlags.h"
#include "shard/Shard0032.h"

extern "C" {

void saveSetFlagRow(s32 group, u32 bit, s32 set);

/* Sets each (group, bit) flag that is given (non-zero pair) and not yet set. */
void flagsSetIfUnset3(s32 group0, s32 bit0, s32 group1, s32 bit1, s32 group2, s32 bit2)
{
    if ((group0 != 0 || bit0 != 0) && interactionVariantIsEnabled(group0, bit0) == 0) {
        saveSetFlagRow(group0, bit0, 1);
    }
    if ((group1 != 0 || bit1 != 0) && interactionVariantIsEnabled(group1, bit1) == 0) {
        saveSetFlagRow(group1, bit1, 1);
    }
    if ((group2 != 0 || bit2 != 0) && interactionVariantIsEnabled(group2, bit2) == 0) {
        saveSetFlagRow(group2, bit2, 1);
    }
}

} /* extern "C" */
