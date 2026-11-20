#include "common.h"

extern "C" {

int ipcServiceSessionRelease(void);
int cecServiceSendRequest7(void);
int FUN_0035ae34(void);
extern s8 g_archiveModuleState;

void resetFlag5891A4And65f8(void)
{
    if (g_archiveModuleState != 0) {
        FUN_0035ae34();
        g_archiveModuleState = 0;
        ipcServiceSessionRelease();
    }
    cecServiceSendRequest7();
}

} /* extern "C" */
