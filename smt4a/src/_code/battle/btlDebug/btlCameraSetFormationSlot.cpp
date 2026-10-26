/* NON_MATCHING: the offset copies now use VFP transfers (pointer copy) as in retail; camera/mask base and flag-mask load allocation still differ. */
#include "shard/W6_W6Match6_BattleCamera.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleFormationCamera {
    BattleActionCamera camera;
    BattleVector3 offset; // 0x7d0, beyond the common camera prefix.
};
struct BattleFormationMasks {
    u8 unk00[0x38];
    u64 zeroHeight, demonHeight;
    u8 unk48[0x10];
    u64 wideFormation;
};
struct BattleFormationDemon {
    u8 unk00[0x34];
    struct { u32 lower : 25; u32 height : 4; u32 upper : 3; } appearance;
};
extern "C" {
extern BattleActionCamera *g_btlCamera;
extern BattleVector3 DAT_005e1554;
s32 FUN_004f2708(BattleActionCamera *, BtlMainStateA *, s32);
const BattleFormationDemon *FUN_00184310(u32);

void btlCameraSetFormationSlot(BattleActionCamera *camera, BtlMainStateA *battle, s32 slot)
{
    BattleFormationCamera *formation = (BattleFormationCamera *)camera;
    camera->formation.position.x = camera->formation.position.y = camera->formation.position.z = 0.0f;
    camera->formation.flags &= ~0x800000U;
    formation->offset.x = formation->offset.y = formation->offset.z = 0.0f;
    if (!FUN_004f2708(camera, battle, 1))
        return;
    camera->formation.previousTarget = camera->target;
    camera->target = slot;
    const BattleFormationMasks *masks = (const BattleFormationMasks *)&g_btlCamera;
    switch (slot) {
    case 0:
        camera->formation.position.x = -12.0f;
        battleVectorCopy(&formation->offset, &DAT_005e1554);
        if (battle->stateFlags64.bits & masks->wideFormation)
            formation->offset.x = -1.5f;
        break;
    case 1:
        camera->formation.position.x = -6.0f;
        battleVectorCopy(&formation->offset, &DAT_005e1554);
        break;
    case 2:
        camera->formation.position.x = 6.0f;
        battleVectorCopy(&formation->offset, &DAT_005e1554);
        break;
    case 3:
        camera->formation.position.x = 12.0f;
        battleVectorCopy(&formation->offset, &DAT_005e1554);
        if (masks->wideFormation & battle->stateFlags64.bits)
            formation->offset.x = 1.5f;
        break;
    default:
        return;
    }
    BtlCombatantEntryA *entry = battle->entries + slot;
    if (entry->flags & masks->zeroHeight) {
        camera->formation.position.y = 0.0f;
    } else if (entry->flags & masks->demonHeight) {
        const BattleFormationDemon *demon = FUN_00184310(entry->id);
        switch (demon->appearance.height) {
        case 0: camera->formation.position.y = 0.0f; break;
        case 1: camera->formation.position.y = -3.5f; break;
        case 2: camera->formation.position.y = 3.0f; break;
        }
    }
}
}
