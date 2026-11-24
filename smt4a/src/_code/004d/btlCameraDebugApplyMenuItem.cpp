#include "battle/btlCamera.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlDebugMenu.h"

extern "C" {
extern f32 g_btlCameraDebugOffset;
extern f32 g_btlCameraDebugUpDown;
void transitionResetPosition(BtlCameraA *camera);

/* Applies a debug-menu change to camera toggles or scalar/vector parameters. */
void btlCameraDebugApplyMenuItem(DebugMenu *menu, DebugBattle *unused, u32 index)
{
    switch (index) {
    case 0:
        if (listBoxItemHasOwner(menu->listBox, index)) {
            if (!(g_btlCamera->flags & 0x20))
                transitionResetPosition(g_btlCamera);
        } else {
            transitionResetPosition(g_btlCamera);
            g_btlCamera->flags &= ~0x20;
        }
        return;
    case 1:
        if (listBoxItemHasOwner(menu->listBox, index))
            g_btlCamera->flags |= 0x40;
        else
            g_btlCamera->flags &= ~0x40;
        return;
    case 2:
        if (listBoxItemHasOwner(menu->listBox, index))
            g_btlCamera->flags |= 0x80;
        else {
            g_btlCamera->flags &= ~0x80;
            return;
        }
        return;
    case 3:
        g_btlCameraDebugOffset = *asdListBoxGetFloatValuePtr(menu->listBox, index);
        break;
    case 4:
        g_btlCameraDebugUpDown = *asdListBoxGetFloatValuePtr(menu->listBox, index);
        break;
    case 5:
        g_btlCamera->vector[0] = *asdListBoxGetFloatValuePtr(menu->listBox, index);
        return;
    case 6:
        g_btlCamera->vector[1] = *asdListBoxGetFloatValuePtr(menu->listBox, index);
        return;
    case 7:
        g_btlCamera->vector[2] = *asdListBoxGetFloatValuePtr(menu->listBox, index);
        return;
    default:
        return;
    }
}
} /* extern "C" */
