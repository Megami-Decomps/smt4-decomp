#include "common.h"

extern "C" {

extern void *g_partyPanel;
void FUN_0020b718(s32 kind, s32 enabled);

void partyPanelEnableKinds(s32 visible)
{
    if (g_partyPanel != NULL) {
        if (visible) {
            FUN_0020b718(8, 1);
        } else {
            FUN_0020b718(24, 1);
        }
    }
}

} /* extern "C" */
