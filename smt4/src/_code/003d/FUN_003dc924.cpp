/* NON_MATCHING: reserved slots are excluded directly; loop setup, cached-slot addressing and member-ID spills differ. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"

/* Preserve the shared action's 10-byte union alignment when reading its word at 0x5c. */
struct BattleModelActionKeyView {
    u8 unk00[0x5c];
    u32 key;
};

extern "C" {
void modelEffectReleaseEntry(MaterialMergeOwner *owner, s32 index);
s32 idSetFindSubjectIndex(BtlMainState *battle, const BtlActionRecord *action);
MaterialMergeModel *asdMdlManagerClone(MaterialMergeModel *model, u32 flags);

void FUN_003dc924(MaterialMergeOwner *owner, s32 effectKind, s32 allActors)
{
    BtlMainState *battle = btlGetMainState();
    /* The first four action slots are not restored from the model cache. */
    for (s32 index = 4; index < 109; ++index) {
        if (!(btlGetMainState()->actions[index].status & 1))
            continue;
        u32 status = battle->actions[index].status;
        if (allActors) {
            if (!(status & 0x8000))
                continue;
        } else if (!(status & 0x400)) {
            continue;
        }
        if (effectKind == 0 || effectKind == 22)
            continue;
        modelEffectReleaseEntry(owner, index);
        const BtlActionRecord *action = &btlGetMainState()->actions[index];
        s32 memberId = action->memberId;
        if (owner->state.slots[index].handle >= 0)
            continue;
        s32 variant = idSetFindSubjectIndex(btlGetMainState(), action);
        if (variant < 0)
            variant = 0;
        const BtlUnitData *variants = btlFindEntryBlockByMemberId(btlGetMainState(), memberId);
        if (!variants)
            continue;
        for (s32 original = 0; original < 50; ++original) {
            MaterialMergeOriginal *cached = &owner->models.originals[original];
            if (variants->parts[variant] == cached->key &&
                ((const BattleModelActionKeyView *)&btlGetMainState()->actions[index])->key == cached->context) {
                owner->models.results[index].model = asdMdlManagerClone(cached->model, 1);
                owner->models.results[index].group = memberId;
                break;
            }
        }
    }
}
}
