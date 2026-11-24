/* NON_MATCHING: base-position copy and angle/distance update use different registers and scheduling. */
#include "battle/btlCamera.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "battle/BtlGlobals.h"

namespace {
struct CameraDebugMenu {
    u8 prefix[0x10];
    AsdListBox *list;
};
}
extern "C" {
s32 listBoxItemHasOwner(AsdListBox *list);
f32 *asdListBoxGetFloatValuePtr(AsdListBox *list, u32 index);

// Convert absolute editor values into offsets from the current base camera pose.
void btlCameraApplyEditorValue(CameraDebugMenu *menu, u32 unused, u32 index)
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
    case 4: {
        f32 degrees = *asdListBoxGetFloatValuePtr(menu->list, index) * 256.0f;
        f32 turns = degrees / 360.0f;
        g_btlCamera->angleOffset = turns - g_btlCamera->basePose.angle;
        return;
    }
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
