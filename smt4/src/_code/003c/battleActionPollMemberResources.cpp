/* NON_MATCHING: resource-request cold block is laid out inline and compiler saves two fewer registers; -O2 candidate. */
#include "battle/btlMain.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "code/Code0027.h"
#include "battle/BtlEntryLookup.h"

extern "C" {
extern void *g_btlUiBlock;
extern BattleVersionResources *DAT_00435d18;
s32 idSetFindSubjectIndex(BtlMainState *state, const BtlActionRecord *action);
s32 entryContainsIdentifier(BtlMainState *state, u32 id);
u32 eventResourceCacheAcquire(u32 id, s32 mode);
void resourceSlotsInsert(BtlMainState *state, u32 handle);
void entryAddUniqueIdentifier(BtlMainState *state, s16 id);
s32 nkdwHeaderParse(u32 handle);
void aocHandleButtons(u32 handle, u32 mode);
s32 FUN_00294fe0(u32 handle);
void modelAnimationEnsureData(u32 handle);
void btlUiAddListedId(void *ui, u32 id);
void effectSlotStart(BattleVersionResources *resources, BtlActionRecord *action, u32 id);
u32 FUN_003db0c0(BattleVersionResources *resources, BtlActionRecord *action);
void FUN_003c0ae0(BtlMainState *state, BtlActionRecord *action);

void battleActionPollMemberResources(BtlMainState *state, BtlActionRecord *action)
{
    u32 flags = action->flags;
    if (flags & 1) {
        for (s32 index = 0; index < 109; ++index) {
            BtlActionRecord *other = &state->actions[index];
            if ((other->status & 1) && (other->flags & 2))
                return;
        }
        flags = (flags & ~1u) | 0x12;
        action->flags = flags;
    }
    if (flags & 2) {
        if (flags & 0x10) {
            s32 index = idSetFindSubjectIndex(state, action);
            if (index < 0)
                index = 0;
            BtlUnitData *resources = btlFindEntryBlockByMemberId(state, action->memberId);
            if (entryContainsIdentifier(state, resources->parts[index])) {
                action->flags |= 0x300;
            } else {
                action->flags &= ~0x300u;
                u32 handle = eventResourceCacheAcquire(resources->parts[index], 1);
                resourceSlotsInsert(state, handle);
                entryAddUniqueIdentifier(state, (s16)resources->parts[index]);
            }
            action->flags &= ~0x10u;
        }
        s32 index = idSetFindSubjectIndex(state, action);
        if (index < 0)
            index = 0;
        BtlUnitData *resources = btlFindEntryBlockByMemberId(state, action->memberId);
        u32 handle = (u32)idSlotsFindEntryById(state, resources->parts[index]);
        bool ready = true;
        if (!(action->flags & 0x100)) {
            if (nkdwHeaderParse(handle)) {
                action->flags |= 0x100;
                aocHandleButtons(handle, 7);
            } else {
                ready = false;
            }
        }
        if (ready && !(action->flags & 0x200)) {
            if (FUN_00294fe0(handle)) {
                modelAnimationEnsureData(handle);
                action->flags |= 0x200;
            } else {
                ready = false;
            }
        }
        if (ready) {
            btlUiAddListedId(g_btlUiBlock, resources->id);
            effectSlotStart(DAT_00435d18, action, resources->parts[index]);
            FUN_003db0c0(DAT_00435d18, action);
            FUN_003c0ae0(state, action);
        }
    }
    flags = action->flags;
    if ((flags & 4) && !(flags & 8)) {
        action->task = 0;
        action->flags = flags & ~4u;
    }
}
}
