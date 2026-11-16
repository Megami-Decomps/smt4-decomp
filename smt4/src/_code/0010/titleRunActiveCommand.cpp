#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

int processDispatchFinishedNodes(void);
int gxIsStereoscopic3dEnabled(void);

s32 titleRunActiveCommand(void)
{
    if (gxIsStereoscopic3dEnabled() == 1) {
        if (g_titleFlags.commandActive != 0 && g_titleFlags.disabled == 0) {
            processDispatchFinishedNodes();
        }
    }
    return 0;
}

} /* extern "C" */
