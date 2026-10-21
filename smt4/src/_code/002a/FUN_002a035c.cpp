/* NON_MATCHING: compiler reloads the unite global again for the final result store instead of reusing the checked pointer. */
#include "common.h"

namespace { struct Unite { u8 padding[0x430]; u8 active; u8 reserved[0x47]; u32 result; }; }

extern "C" {
extern Unite *g_unite;
s32 sys43e188GetState(void);
void FUN_00296e90(void);
void FUN_002a035c(void)
{
    if (g_unite != NULL) {
        if (g_unite->active != 0 && sys43e188GetState() == 0) { FUN_00296e90(); }
        if (g_unite != NULL) { g_unite->result = 0xffffffff; }
    }
}
}
