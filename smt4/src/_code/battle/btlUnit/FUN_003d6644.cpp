/* NON_MATCHING: 118 vs 118 rows (12 diff lines); battleVectorClear, battleVectorCopy and direct selection fields match lines 24-118 identically; remaining: prologue scheduling of editorControl.flags offset load (ip vs r3) around flags &= ~0x800000. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match5_DevilSort.h"

struct FormationCameraIV {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 flags;
    /* 0x638 */ u8 unk638[0x100];
    /* 0x738 */ BattleVector3 position;
    /* 0x744 */ u8 unk744[0x18];
    /* 0x75C */ s32 previous;
    /* 0x760 */ s32 current;
    /* 0x764 */ BattleVector3 offset;
};

struct DevilBodyAttributes {
    /* 0x00 */ u8 prefix[0x2C];
    /* 0x2C */ u32 flags;
};

/* Clears a 3D vector in reverse component order (same pattern as smt4a btlCameraSetFormationSlot and FUN_004f1b2c). */
static __inline void battleVectorClear(BattleVector3 *v)
{
    v->z = 0.0f;
    v->y = 0.0f;
    v->x = 0.0f;
}

extern "C" {
extern BattleVectorTransition *g_btlMain;
extern BattleVector3 DAT_00493554;

void FUN_003d6644(FormationCameraIV *camera, BtlMainState *battle, s32 slot)
{
    battleVectorClear(&camera->position);
    camera->flags &= ~0x800000;
    battleVectorClear(&camera->offset);
    if ((battle->editorControl.flags & 0x40000000) && (battle->battleFlags & 0x4000000)) {
        return;
    }
    if (battle->battleFlags & 4) {
        return;
    }
    if ((battle->encounter.flagsE4 & 0x10) || (battle->battleFlags & 0x200)) {
        return;
    }
    if (g_btlMain && (g_btlMain->flags & 0x2000000)) {
        return;
    }

    camera->previous = camera->current;
    camera->current = slot;
    switch (slot) {
    case 0:
        camera->position.x = -12.0f;
        battleVectorCopy(&camera->offset, &DAT_00493554);
        if (battle->battleFlags & 0x4000000) {
            camera->offset.x = -1.5f;
        }
        break;
    case 1:
        camera->position.x = -6.0f;
        battleVectorCopy(&camera->offset, &DAT_00493554);
        break;
    case 2:
        camera->position.x = 6.0f;
        battleVectorCopy(&camera->offset, &DAT_00493554);
        break;
    case 3:
        camera->position.x = 12.0f;
        battleVectorCopy(&camera->offset, &DAT_00493554);
        if (battle->battleFlags & 0x4000000) {
            camera->offset.x = 1.5f;
        }
        break;
    default:
        return;
    }
    BtlEntry *entry = &battle->entries[slot];
    if (!(entry->flags & 2) && (entry->flags & 8)) {
        const DevilBodyAttributes *attributes = (const DevilBodyAttributes *)nkmBaseGetRecord(entry->data.id);
        switch ((attributes->flags >> 25) & 15) {
        case 0:
            camera->position.y = 0.0f;
            break;
        case 1:
            camera->position.y = -3.5f;
            break;
        case 2:
            camera->position.y = 3.0f;
            break;
        }
    }
}
} /* extern "C" */
