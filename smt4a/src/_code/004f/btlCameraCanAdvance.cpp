#include "battle/BtlCameraStaticsA.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BtlUnitWork.h"
#include "battle/btlMain.h"
#include "battle/btlScript.h"

extern "C" {
s32 btlStateHasSelectionGateFlag(BtlMainStateA *battle);

/* Decide whether the battle camera can advance. */
u32 btlCameraCanAdvance(u32, BtlMainStateA *battle, s32 checkTransition)
{
    if ((battle->markerMasks.bits & g_btlCamera.requiredMarker) &&
        (battle->stateFlags64.bits & g_btlCamera.requiredState)) {
        return 0;
    }
    if (battle->stateFlags64.bits & g_btlCamera.blocked)
        return 0;
    if (battle->encounter.controlFlags & 0x10)
        return 0;
    if (btlStateHasSelectionGateFlag(battle))
        return 1;
    if (battle->stateFlags64.bits & g_btlCamera.unitBlocked)
        return 0;
    BtlUnitA *unit = btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit);
    if (unit != NULL && (unit->flags & 0x2000))
        return 0;
    if (checkTransition) {
        if (g_btlCamera.prefix.camera != NULL) {
            if (((BtlCameraA *)g_btlCamera.prefix.camera)->flags & 0x2000000)
                return 0;
        } else {
            return 1;
        }
    } else if (g_btlCamera.prefix.camera == NULL) {
        return 1;
    }
    if (!(((BtlCameraA *)g_btlCamera.prefix.camera)->flags & 0x10000000))
        return 1;
    return 0;
}
} /* extern "C" */
