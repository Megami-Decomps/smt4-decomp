/* NON_MATCHING: base-position copy registers differ; fast floating-point mode folds the two degree-conversion multiplies into vnmls, unlike retail. */
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
s32 listBoxItemHasOwner(AsdListBox *list);
f32 *asdListBoxGetFloatValuePtr(AsdListBox *list, u32 index);

// Convert absolute editor values into offsets from the current base camera pose.
void FUN_004d542c(CameraDebugMenu *menu, u32 unused, u32 index)
{
    BtlCameraVector3 position = g_btlCamera->basePose.position;
    switch (index) {
    case 0:
        if (listBoxItemHasOwner(menu->list))
            g_btlCamera->flags |= 0x10000000;
        else
            g_btlCamera->flags &= ~0x10000000;
        return;
    case 1:
        g_btlCamera->vector[0] = *asdListBoxGetFloatValuePtr(menu->list, index) - position.x;
        return;
    case 2:
        g_btlCamera->vector[1] = *asdListBoxGetFloatValuePtr(menu->list, index) - position.y;
        return;
    case 3:
        g_btlCamera->vector[2] = *asdListBoxGetFloatValuePtr(menu->list, index) - position.z;
        return;
    case 4:
        g_btlCamera->unk10 = *asdListBoxGetFloatValuePtr(menu->list, index) * 256.0f * 0.0027777778f - g_btlCamera->basePose.angle;
        return;
    case 5:
        g_btlCamera->unk0C = *asdListBoxGetFloatValuePtr(menu->list, index) - g_btlCamera->basePose.distance;
        return;
    case 6:
        if (listBoxItemHasOwner(menu->list))
            g_btlCamera->flags |= 0x20000000;
        else
            g_btlCamera->flags &= ~0x20000000;
        return;
    default:
        return;
    }
}
}
