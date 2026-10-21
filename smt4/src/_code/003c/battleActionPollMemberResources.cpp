/* NON_MATCHING: resource-request cold block is laid out inline and compiler saves two fewer registers; -O2 candidate. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"

struct BtlActionRecord {
    u8 unk00[0x48];
    u32 task;
    u32 unk4c;
    u32 status;
    u32 flags;
    u8 unk58[0x0a];
    s16 memberId;
    u8 unk64[0xb0];
};
struct BattleMemberResources {
    u16 unk00;
    u16 id;
    u8 unk04[8];
    u32 identifiers[50];
};

extern "C" {
extern void *g_btlUiBlock;
extern BattleVersionResources *DAT_00435d18;
s32 FUN_0027dab0(BtlMainState *state, const BtlActionRecord *action);
BattleMemberResources *FUN_0027da30(BtlMainState *state, s32 memberId);
s32 entryContainsIdentifier(BtlMainState *state, u32 id);
u32 FUN_00294090(u32 id, s32 mode);
void resourceSlotsInsert(BtlMainState *state, u32 handle);
void entryAddUniqueIdentifier(BtlMainState *state, s16 id);
u32 FUN_0027d9e8(BtlMainState *state, u32 id);
s32 nkdwHeaderParse(u32 handle);
void aocHandleButtons(u32 handle, u32 mode);
s32 FUN_00294fe0(u32 handle);
void FUN_0023fb84(u32 handle);
void FUN_003af1dc(void *ui, u32 id);
void FUN_003db5e8(BattleVersionResources *resources, BtlActionRecord *action, u32 id);
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
            s32 index = FUN_0027dab0(state, action);
            if (index < 0)
                index = 0;
            BattleMemberResources *resources = FUN_0027da30(state, action->memberId);
            if (entryContainsIdentifier(state, resources->identifiers[index])) {
                action->flags |= 0x300;
            } else {
                action->flags &= ~0x300u;
                u32 handle = FUN_00294090(resources->identifiers[index], 1);
                resourceSlotsInsert(state, handle);
                entryAddUniqueIdentifier(state, (s16)resources->identifiers[index]);
            }
            action->flags &= ~0x10u;
        }
        s32 index = FUN_0027dab0(state, action);
        if (index < 0)
            index = 0;
        BattleMemberResources *resources = FUN_0027da30(state, action->memberId);
        u32 handle = FUN_0027d9e8(state, resources->identifiers[index]);
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
                FUN_0023fb84(handle);
                action->flags |= 0x200;
            } else {
                ready = false;
            }
        }
        if (ready) {
            FUN_003af1dc(g_btlUiBlock, resources->id);
            FUN_003db5e8(DAT_00435d18, action, resources->identifiers[index]);
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
