/* NON_MATCHING: 128 vs 128 rows (32 diff lines); cases 1-3, height lookup, switch and pool match retail; remaining: prologue clear/flag scheduling (offset cleared via r4+976 vs r5+2000) and case 0 mask load order. */
#include "shard/W6_W6Match6_BattleCamera.h"
#include "gamedata/NkmBaseRecordA.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleFormationCamera {
    BattleActionCamera camera;
    BattleVector3 offset; /* 0x7d0, beyond the common camera prefix */
};

struct BattleFormationMasks {
    u8 unk00[0x38];
    u64 zeroHeight;
    u64 demonHeight;
    u8 unk48[0x10];
    u64 wideFormation;
};

/* Clears a 3D vector in reverse component order (same pattern as FUN_004f1b2c and smt4 FUN_003d6644). */
static __inline void battleVectorClear(BattleVector3 *v)
{
    v->z = 0.0f;
    v->y = 0.0f;
    v->x = 0.0f;
}

extern "C" {
extern BattleFormationMasks g_btlCamera; /* declcheck: local (BtlGlobals.h types g_btlCamera as BtlCameraA *, whereas retail addresses the masks directly at 0x571508) */
extern BattleVector3 DAT_005e1554;
s32 FUN_004f2708(BattleActionCamera *, BtlMainStateA *, s32);

/* Selects a battle formation camera slot and adjusts its vertical offset for the target combatant. */
void btlCameraSetFormationSlot(BattleFormationCamera *formation, BtlMainStateA *battle, s32 slot)
{
    battleVectorClear(&formation->camera.formation.position);
    formation->camera.formation.flags &= ~0x800000U;
    formation->offset.z = 0.0f;
    formation->offset.y = 0.0f;
    formation->offset.x = 0.0f;
    if (!FUN_004f2708(&formation->camera, battle, 1)) {
        return;
    }
    formation->camera.formation.previousTarget = formation->camera.target;
    formation->camera.target = slot;
    switch (slot) {
    case 0:
        formation->camera.formation.position.x = -12.0f;
        battleVectorCopy(&formation->offset, &DAT_005e1554);
        if (battle->stateFlags64.bits & g_btlCamera.wideFormation) {
            formation->offset.x = -1.5f;
        }
        break;
    case 1:
        formation->camera.formation.position.x = -6.0f;
        battleVectorCopy(&formation->offset, &DAT_005e1554);
        break;
    case 2:
        formation->camera.formation.position.x = 6.0f;
        battleVectorCopy(&formation->offset, &DAT_005e1554);
        break;
    case 3:
        formation->camera.formation.position.x = 12.0f;
        battleVectorCopy(&formation->offset, &DAT_005e1554);
        if (battle->stateFlags64.bits & g_btlCamera.wideFormation) {
            formation->offset.x = 1.5f;
        }
        break;
    default:
        return;
    }
    BtlCombatantEntryA *entry = battle->entries + slot;
    if (entry->flags & g_btlCamera.zeroHeight) {
        formation->camera.formation.position.y = 0.0f;
    } else if (entry->flags & g_btlCamera.demonHeight) {
        const NkmBaseRecordA *demon = nkmBaseGetRecord(entry->data.id);
        switch (demon->packed.formationHeight) {
        case 0:
            formation->camera.formation.position.y = 0.0f;
            break;
        case 1:
            formation->camera.formation.position.y = -3.5f;
            break;
        case 2:
            formation->camera.formation.position.y = 3.0f;
            break;
        }
    }
}

} /* extern "C" */
