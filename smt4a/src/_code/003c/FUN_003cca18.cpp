/* NON_MATCHING: constant-zero return and input/work register lifetimes save one fewer register; packed result ID uses two loads instead of retail LDM. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/Shard0031.h"
#include "shard/Shard0032.h"
#include "ui/TouchRectangleRequest.h"

namespace {
struct FusionInheritanceInputView {
    u8 unk0000[0x478];
    s16 modeKeys[1];
    u8 unk047A[0x67CC - 0x47A];
    FlaggedEntry candidates;
    u16 unk6830;
    u16 candidateIndices[1];
    u8 unk6834[0x8B60 - 0x6834];
    u16 primaryIds[8];
    u16 secondaryIds[24];
    u8 unk8BA0[0x210];
    FlaggedEntry primary;
    FlaggedEntry secondary;
    u8 unk8E78[0x12];
    u8 accepted;
};
// The shared pair uses word fields; do not increase its alignment for this 64-bit packed view.
struct FusionPairSelectionBitsA {
    u64 firstId : 15;
    u64 secondId : 15;
    u64 firstType : 2;
    u64 secondType : 2;
    u64 resultId : 15;
    u64 reserved : 15;
};
typedef char FusionInheritanceInputLayoutCheck[
    offsetof(FusionInheritanceInputView, primary) == 0x8DB0 &&
    offsetof(FusionInheritanceInputView, secondary) == 0x8E14 &&
    offsetof(FusionInheritanceInputView, accepted) == 0x8E8A &&
    sizeof(FusionPairSelectionBitsA) == 8 ? 1 : -1];
}

extern "C" {
u32 FUN_003450d4(FlaggedEntry *entry, const TouchRectangleRequest *rectangle, const s16 *ids,
    u32 firstKey, u32 secondKey, u32 thirdKey, bool *blockedMode, s32 secondary, s32 notify);
s32 FUN_00228b04(FlaggedEntry *entry, s32 mode);
s32 resourceRunOperationIfUnblocked(const FlaggedEntry *entry);
s32 FUN_002a4894(const FlaggedEntry *entry);
void skillHelpUpdateAttributeAndTarget(u32 id);
void FUN_0019de98(u32 mode, u32 color);
u32 FUN_001517b4(u32 button, u32 mode);
void unitRecordBuild(u32 id, UnitRecord *record);
void FUN_0020b908(u32 channel, u32 mode);
void eventQueueAddUniqueIfValid(u32 event);

u32 FUN_003cca18(UniteWork *work, s8 blocked, u32 *selected)
{
    FusionInheritanceInputView *input = reinterpret_cast<FusionInheritanceInputView *>(work);
    if (FUN_003450d4(&input->primary, NULL, input->modeKeys, -1, -1, -1,
            reinterpret_cast<bool *>(&blocked), 0, 1) != 0 || FUN_00228b04(&input->primary, 1) != 0) {
        const s32 index = resourceRunOperationIfUnblocked(&input->primary) + FUN_002a4894(&input->primary);
        const u16 id = input->primaryIds[index];
        if (id != 0) {
            skillHelpUpdateAttributeAndTarget(id);
        } else {
            FUN_0019de98(0, 0xF4F4F4FF);
        }
    } else if ((FUN_001517b4(0, 1) | static_cast<s32>(blocked)) != 0) {
        input->accepted = 1;
        if (work->history.previous == 30) {
            *selected = 0;
        } else {
            const s32 index = resourceRunOperationIfUnblocked(&input->candidates) + FUN_002a4894(&input->candidates);
            *selected = input->candidateIndices[index];
        }
        const FusionPairSelectionBitsA *pair = reinterpret_cast<const FusionPairSelectionBitsA *>(
            &work->pairList.pairs[*selected]);
        UnitRecord record;
        unitRecordBuild(pair->resultId, &record);
        FUN_0020b908(0x10, 0);
        eventQueueAddUniqueIfValid(0x100020E);
    } else if (FUN_001517b4(1, 1) != 0) {
        eventQueueAddUniqueIfValid(0x100020F);
        input->accepted = 1;
        const s32 index = resourceRunOperationIfUnblocked(&input->secondary) + FUN_002a4894(&input->secondary);
        skillHelpUpdateAttributeAndTarget(input->secondaryIds[index]);
    }
    return 0;
}
}
