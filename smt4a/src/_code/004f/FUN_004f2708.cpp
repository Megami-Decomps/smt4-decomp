/* NON_MATCHING: marker-mask words load hi-before-lo (retail lo/mask-lo/hi/mask-hi) and the camera 0x2000000 test branches inverted at the end of the checkTransition arm. */
#include "battle/btlMain.h"
#include "battle/btlCamera.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnitSlot.h"

/* The shared CameraTransitionGlobals prefix ends at 0x2c. */
struct BattleCameraGateGlobalsView {
    BtlCameraA *camera;
    u8 unk04[0x44];
    u64 blocked;
    u64 unitBlocked;
    u64 requiredState;
    u64 requiredMarker;
};

extern "C" {
extern BattleCameraGateGlobalsView g_btlCamera;
extern u32 g_btlScriptUnit;
s32 FUN_003eb1cc(BtlMainStateA *battle);

/* Gate camera progression on battle masks, the script unit and camera flags. */
u32 FUN_004f2708(u32 unused, BtlMainStateA *battle, s32 checkTransition)
{
    if (((g_btlCamera.requiredMarker & battle->markerMasks.bits) == 0 ||
         (battle->stateFlags64.bits & g_btlCamera.requiredState) == 0) &&
        !(battle->stateFlags64.bits & g_btlCamera.blocked) &&
        !(battle->encounter.controlFlags & 0x10)) {
        if (FUN_003eb1cc(battle))
            return 1;
        if (battle->stateFlags64.bits & g_btlCamera.unitBlocked)
            return 0;
        BtlCombatantEntryA *unit = reinterpret_cast<BtlCombatantEntryA *>(
            btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        if (unit && ((u32)unit->flags & 0x2000))
            return 0;
        if (checkTransition) {
            if (!g_btlCamera.camera)
                return 1;
            if (g_btlCamera.camera->flags & 0x2000000)
                return 0;
        } else if (!g_btlCamera.camera) {
            return 1;
        }
        if (!(g_btlCamera.camera->flags & 0x10000000))
            return 1;
    }
    return 0;
}
}
