/* NON_MATCHING: 617 lines (shape 493): retail inlines btlCameraFrontPoint in modes 6, 8 and 9 (one matrix per copy
 * at sp+24/72/120, the axis shared at sp+12, z set to -1.0 after the turn) where armcc keeps it out of line here, and
 * holds x/y in s16/s17 (vmov.f64 d8, d0) where this build swaps them. */
#include "common.h"
#include "map/MapVector.h"
#include "gfx/CameraMatrixCache.h"
#include "battle/btlCamera.h"
#include "battle/btlEffect.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BattleHelpers_VariantB.h"
#include "battle/BtlGlobals.h"

struct BtlEffectManager;

extern "C" {
extern BtlEffectGlobals g_btlEffect;

MapVector btlGetCombatantDrawPosition(BtlMainStateA *state, s32 index, s32 force);
MapVector btlGetCombatantOverridePosition(BtlMainStateA *state, s32 index, s32 forceAttachment);
void FUN_001aff14(Matrix34Data *matrix, s32 clearTranslation, f32 x, f32 y, f32 z);
Matrix34Data *FUN_0043ba3c(Matrix34Data *matrix, const MapVector *axis, s32 clearTranslation, f32 angle);

/* A point in front of the battle camera: its view direction, turned about the axis a quarter turn
 * from it by the camera's angle (unless the angle offset is unset), scaled to 10 units short of
 * the camera's depth and added to the camera's positions. */
static __inline MapVector btlCameraFrontPoint(void)
{
    MapVector point;
    BtlCameraVector3 direction = g_btlCamera->basePose.direction;
    if (g_btlCamera->angleOffset != 1.0e-5f) {
        Matrix34Data rotation;
        MapVector axis;
        FUN_001aff14(&rotation, 1, 0.0f, 64.0f, 0.0f);
        axis.x = rotation.values[0] * direction.x + rotation.values[1] * direction.y +
                 rotation.values[2] * direction.z;
        axis.y = rotation.values[4] * direction.x + rotation.values[5] * direction.y +
                 rotation.values[6] * direction.z;
        axis.z = rotation.values[8] * direction.x + rotation.values[9] * direction.y +
                 rotation.values[10] * direction.z;
        FUN_0043ba3c(&rotation, &axis, 1,
                     (g_btlCamera->basePose.angle + g_btlCamera->angleOffset) * 0.024543693f);
        f32 x = direction.x;
        f32 y = direction.y;
        direction.x = rotation.values[0] * x + rotation.values[1] * y + rotation.values[2] * direction.z;
        direction.y = rotation.values[4] * x + rotation.values[5] * y + rotation.values[6] * direction.z;
        direction.z = -1.0f;
    }
    f32 distance = g_btlCamera->basePose.distance - 10.0f;
    point.x = direction.x * distance + g_btlCamera->basePose.position.x + g_btlCamera->position.x;
    point.y = direction.y * distance + g_btlCamera->basePose.position.y + g_btlCamera->position.y;
    point.z = direction.z * distance + g_btlCamera->basePose.position.z + g_btlCamera->position.z;
    return point;
}

/* Where the effect of `mode` plays: at a combatant (`param` or `index`, by its draw or override
 * position), at an enemy entry's line offset, in front of the camera, or at a fixed offset. */
MapVector btlApplyDirectionBucketEffect(BtlEffectManager *manager, s32 mode, u32 param, s32 index)
{
    MapVector position;
    position.x = 0.0f;
    position.y = 0.0f;
    position.z = 0.0f;
    switch (mode) {
    case 0:
        position = btlGetCombatantDrawPosition(btlGetMainState(), param, 0);
        break;
    case 1:
        position = btlGetCombatantOverridePosition(btlGetMainState(), param, 0);
        break;
    case 2: {
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), param);
        if (entry == NULL) {
            break;
        }
        if (entry->flags & g_btlEffect.entryMask) {
            position.x = 0.0f;
            position.y = -1.5f;
            break;
        }
        switch (entry->selectionIndex) {
        case 0:
            position.x = -2.975f;
            position.y = 0.6f;
            break;
        case 1:
            position.x = -1.0f;
            position.y = 0.6f;
            break;
        case 2:
            position.x = 0.975f;
            position.y = 0.6f;
            break;
        case 3:
            position.x = 2.95f;
            position.y = 0.6f;
            break;
        }
        break;
    }
    case 3:
        position = btlGetCombatantDrawPosition(btlGetMainState(), index, 0);
        break;
    case 4:
        position = btlGetCombatantOverridePosition(btlGetMainState(), index, 0);
        break;
    case 5: {
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), index);
        if (entry == NULL) {
            break;
        }
        if (entry->flags & g_btlEffect.entryMask) {
            if ((btlGetMainState()->stateFlags64.bits & g_btlEffect.stateMaskA) ||
                (btlGetMainState()->stateFlags64.bits & g_btlEffect.stateMaskB) ||
                btlScriptUnitHasFlags(btlGetMainState()) != 0) {
                position.x = 0.0f;
                position.y = -1.5f;
            } else {
                position.x = 0.0f;
                position.y = -0.45f;
            }
            break;
        }
        switch (entry->selectionIndex) {
        case 0:
            position.x = -2.975f;
            position.y = 0.6f;
            break;
        case 1:
            position.x = -1.0f;
            position.y = 0.6f;
            break;
        case 2:
            position.x = 0.975f;
            position.y = 0.6f;
            break;
        case 3:
            position.x = 2.95f;
            position.y = 0.6f;
            break;
        }
        break;
    }
    case 6:
        position = btlCameraFrontPoint();
        break;
    case 8:
        position = btlCameraFrontPoint();
        break;
    case 9:
        position = btlCameraFrontPoint();
        break;
    case 12:
        position.x = -2.975f;
        position.y = 0.6f;
        break;
    case 13:
        position = btlGetCombatantDrawPosition(btlGetMainState(), index, 1);
        break;
    case 14:
        position = btlGetCombatantOverridePosition(btlGetMainState(), index, 1);
        break;
    case 15:
        position.x = -0.05f;
        position.y = 0.6f;
        break;
    }
    return position;
}

} /* extern "C" */
