#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

void asdProcessRunAuxiliaryPass(void);
s32 gxIsStereoscopic3dEnabled(void);

/* When gxIsStereoscopic3dEnabled reports 1 and the request flag is set without the blocked flag, runs asdProcessRunAuxiliaryPass; always returns 0. */
u32 titleRunActiveCommand(void)
{
    if (gxIsStereoscopic3dEnabled() == 1) {
        if (g_titleFlags.commandActive != 0 && g_titleFlags.disabled == 0) {
            asdProcessRunAuxiliaryPass();
        }
    }
    return 0;
}

} /* extern "C" */
