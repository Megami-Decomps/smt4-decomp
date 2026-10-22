#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GfxTargetParameters g_asdGfxContext;

/* Sets either target parameter or both, according to the selector. */
void asdGfxSetTargetParameter(u32 selector, u32 value)
{
    switch (selector) {
    case 0x400:
        g_asdGfxContext.first = value;
        break;
    case 0x401:
        g_asdGfxContext.second = value;
        break;
    case 0x402:
        g_asdGfxContext.first = value;
        g_asdGfxContext.second = value;
        break;
    }
}

} /* extern "C" */
