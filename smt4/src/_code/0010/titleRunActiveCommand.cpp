#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

int asdProcessRunAuxiliaryPass(void);
int gxIsStereoscopic3dEnabled(void);

s32 titleRunActiveCommand(void)
{
    if (gxIsStereoscopic3dEnabled() == 1) {
        if (g_titleFlags.commandActive != 0 && g_titleFlags.disabled == 0) {
            asdProcessRunAuxiliaryPass();
        }
    }
    return 0;
}

} /* extern "C" */
