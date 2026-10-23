/* NON_MATCHING: flag-store epilogue sharing and scalar-value load scheduling differ. */
#include "battle/btlCamera.h"
#include "AsdSDK/Source/Util/AsdListBox.h"

namespace {
struct CameraDebugMenu {
    u8 prefix[0x10];
    AsdListBox *list;
};
}
extern "C" {
extern BtlCameraA *g_btlCamera;
extern f32 DAT_0057150c;
extern f32 DAT_00571510;
s32 listBoxItemHasOwner(AsdListBox *list);
f32 *asdListBoxGetFloatValuePtr(AsdListBox *list, u32 index);
void FUN_004f43b4(BtlCameraA *camera);

// Apply a debug-menu change to camera toggles or scalar/vector parameters.
void FUN_004d5fc0(CameraDebugMenu *menu, u32 unused, u32 index)
{
    switch (index) {
    case 0:
        if (listBoxItemHasOwner(menu->list)) {
            if (g_btlCamera->flags & 0x20)
                return;
            FUN_004f43b4(g_btlCamera);
            return;
        }
        FUN_004f43b4(g_btlCamera);
        g_btlCamera->flags &= ~0x20;
        return;
    case 1:
        if (listBoxItemHasOwner(menu->list))
            g_btlCamera->flags |= 0x40;
        else
            g_btlCamera->flags &= ~0x40;
        return;
    case 2:
        if (!listBoxItemHasOwner(menu->list)) {
            g_btlCamera->flags &= ~0x80;
            return;
        }
        g_btlCamera->flags |= 0x80;
        return;
    case 3:
        DAT_0057150c = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 4:
        DAT_00571510 = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 5:
        g_btlCamera->vector[0] = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 6:
        g_btlCamera->vector[1] = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 7:
        g_btlCamera->vector[2] = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    default:
        return;
    }
}
}
