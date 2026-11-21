/* NON_MATCHING: owner/action register swap, the active-entry loop addresses through an entry pointer (retail folds 0x398 into each load), and retail keeps the zero result and the id in callee-saved registers. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"
#include "battle/BtlEntryLookup.h"

extern "C" {
s32 idSetFindSubjectIndex(BtlMainStateA *battle, BtlActionRecord *action);
u32 tableFileFindByKeyPair(BtlMainStateA *battle, s32 actor, u16 id);
void FUN_00401d18(BattleSpritePlacement *placement, u32 mask, u32 flags, u32 value);
void FUN_00402290(BattleSpritePlacement *placement);

/* Reuses an active placement or starts the matching inactive placement for an action's subject. */
s32 FUN_004f7924(void *owner, BtlActionRecord *action)
{
    /* These Apocalypse entries are 0x3C bytes, beyond the shared 0x30-byte placement record. */
    struct PlacementEntry {
        s32 key;
        BattleFrameSprite *resource;
        BattleSpritePlacement placement;
        u8 unk28[0x10];
        u32 flags;
    };
    struct PlacementOwnerView {
        u8 unk0000[0x1398];
        PlacementEntry entries[50];
    };
    struct ActorView {
        u8 unk00[0xF0];
        s32 actor;
    };
    typedef char PlacementEntryOffsetsCheck[sizeof(PlacementEntry) == 0x3C &&
        offsetof(PlacementEntry, flags) == 0x38 &&
        offsetof(PlacementOwnerView, entries) == 0x1398 ? 1 : -1];
    if ((action->status & 0x20000) != 0) {
        return 1;
    }
    BtlMainStateA *battle = btlGetMainState();
    s32 subject = idSetFindSubjectIndex(battle, action);
    if (subject < 0)
        subject = 0;
    BtlUnitDataA *subjects = btlFindEntryBlockByMemberId(battle, action->apocalypse.memberId);
    s32 id = subjects->id;
    s32 key = subjects->parts[subject];
    PlacementOwnerView *placements = (PlacementOwnerView *)owner;
    for (s32 index = 0; index < 50; ++index) {
        PlacementEntry *entry = &placements->entries[index];
        if (entry->key == key && (entry->flags & 1) != 0) {
            return 1;
        }
    }
    for (s32 index = 0; index < 50; ++index) {
        if (placements->entries[index].key == key) {
            if (placements->entries[index].resource != NULL) {
                BattleSpritePlacement *placement = &placements->entries[index].placement;
                placement->sprite = placements->entries[index].resource;
                u32 value = 0;
                s32 actor = ((ActorView *)battle)->actor;
                if (actor >= 0) {
                    value = tableFileFindByKeyPair(battle, (s16)actor, id);
                }
                FUN_00401d18(placement, 0x20000, 0x20000, value);
                FUN_00402290(placement);
            }
            placements->entries[index].flags |= 1;
            return 1;
        }
    }
    return 0;
}
}
