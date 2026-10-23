/* NON_MATCHING: vector copies split into two-word plus scalar transfers rather than retail's three-word LDM/STM; selection/gate address materialization differs. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {
extern BattleVectorTransition *g_btlMain;
extern BattleVector3 DAT_00493554;

void FUN_003d6644(BattleVectorTransition *camera, BtlMainState *battle, s32 slot)
{
    // Local views name the selection words and encounter gate in existing opaque padding.
    struct SlotSelection { s32 previous, current; };
    struct EncounterGate { u32 flags; };
    // The sort record's published prefix ends before the packed body-size attributes.
    struct DevilBodyAttributes { u8 prefix[0x2C]; u32 flags; };
    SlotSelection *selection = reinterpret_cast<SlotSelection *>(camera->unk75c);
    EncounterGate *gate = reinterpret_cast<EncounterGate *>(battle->encounter.unke4);

    camera->axis.current.z = 0.0f;
    camera->axis.current.y = 0.0f;
    camera->axis.current.x = 0.0f;
    camera->flags &= ~0x800000;
    camera->originData.originOffset.z = 0.0f;
    camera->originData.originOffset.y = 0.0f;
    camera->originData.originOffset.x = 0.0f;
    if ((battle->editorControl.flags & 0x40000000) && (battle->battleFlags & 0x4000000))
        return;
    if (battle->battleFlags & 4)
        return;
    if ((gate->flags & 0x10) || (battle->battleFlags & 0x200))
        return;
    if (g_btlMain && (g_btlMain->flags & 0x2000000))
        return;

    selection->previous = selection->current;
    selection->current = slot;
    switch (slot) {
    case 0:
        camera->axis.current.x = -12.0f;
        camera->originData.originOffset = DAT_00493554;
        if (battle->battleFlags & 0x4000000)
            camera->originData.originOffset.x = -1.5f;
        break;
    case 1:
        camera->axis.current.x = -6.0f;
        camera->originData.originOffset = DAT_00493554;
        break;
    case 2:
        camera->axis.current.x = 6.0f;
        camera->originData.originOffset = DAT_00493554;
        break;
    case 3:
        camera->axis.current.x = 12.0f;
        camera->originData.originOffset = DAT_00493554;
        if (battle->battleFlags & 0x4000000)
            camera->originData.originOffset.x = 1.5f;
        break;
    default:
        return;
    }
    BtlEntry *entry = &battle->entries[slot];
    if (!(entry->flags & 2) && (entry->flags & 8)) {
        const DevilBodyAttributes *attributes = reinterpret_cast<const DevilBodyAttributes *>(devilGetRecord(entry->id));
        switch ((attributes->flags >> 25) & 15) {
        case 0: camera->axis.current.y = 0.0f; break;
        case 1: camera->axis.current.y = -3.5f; break;
        case 2: camera->axis.current.y = 3.0f; break;
        }
    }
}
}
