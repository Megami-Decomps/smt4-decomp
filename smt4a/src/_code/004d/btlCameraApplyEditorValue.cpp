/* NON_MATCHING: 26 lines. The editor values in cases 1-3 occupy s1 instead of s0, and case 5
 * reloads the camera pointer after the value rather than before it. */
#include "battle/btlCamera.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlDebugMenu.h"

extern "C" {

/* Converts absolute editor values into offsets from the current base camera pose. */
void btlCameraApplyEditorValue(DebugMenu *menu, DebugBattle *unused, u32 index)
{
    BtlCameraVector3 position = g_btlCamera->basePose.position;
    switch (index) {
    case 0:
        if (listBoxItemHasOwner(menu->listBox, index))
            g_btlCamera->flags |= 0x10000000;
        else
            g_btlCamera->flags &= ~0x10000000;
        return;
    case 1:
        g_btlCamera->vector[0] = *asdListBoxGetFloatValuePtr(menu->listBox, index) - position.x;
        return;
    case 2:
        g_btlCamera->vector[1] = *asdListBoxGetFloatValuePtr(menu->listBox, index) - position.y;
        return;
    case 3:
        g_btlCamera->vector[2] = *asdListBoxGetFloatValuePtr(menu->listBox, index) - position.z;
        return;
    case 4: {
        f32 degrees = *asdListBoxGetFloatValuePtr(menu->listBox, index) * 256.0f;
        f32 turns = degrees / 360.0f;
        g_btlCamera->angleOffset = turns - g_btlCamera->basePose.angle;
        return;
    }
    case 5:
        g_btlCamera->unk0C = *asdListBoxGetFloatValuePtr(menu->listBox, index) - g_btlCamera->basePose.distance;
        return;
    case 6:
        if (listBoxItemHasOwner(menu->listBox, index))
            g_btlCamera->flags |= 0x20000000;
        else
            g_btlCamera->flags &= ~0x20000000;
        return;
    default:
        return;
    }
}
} /* extern "C" */
