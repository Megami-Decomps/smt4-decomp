/* NON_MATCHING: battle owner load is hoisted and the uninitialized float command payload is stored earlier than retail. */
#include "battle/btlMain.h"
#include "battle/BattleUnit.h"
#include "battle/BattleCommandValue.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "Model/MoriModelManager.h"

struct BattleEventOwnerRef;
struct BattleEventCandidate;
struct BattleCommandSaveView {
    u8 unk00000[0x27e3e];
    u8 pending; // 0x27e3e
};

// This view includes the four-byte prefix before btlUnitGet's payload pointer.
struct BattleCommandSlot {
    void setCommand(u8 value) { command = value; }
    u32 flags;
    u8 unk04[5];
    u8 command;
    u8 unk0a[0x1254 - 0xa];
};
typedef char BattleCommandSlotSizeCheck[sizeof(BattleCommandSlot) == 0x1254 ? 1 : -1];

extern "C" {
extern BattleActionState g_btlAction;
u32 FUN_004ea0c0(BattleEventOwnerRef *owner, const BattleEventCandidate *candidate);
s32 FUN_003edca0(BtlMainStateA *state);
BtlCombatantEntryA *FUN_003e81bc(BtlMainStateA *state);

// Finish this action slot, queuing the recovery command when the event permits it.
void FUN_004eb740(BtlMainStateA **reference, const BattleEventCandidate *candidate)
{
    if ((*reference)->commandFilter.mode == 8) {
        reinterpret_cast<BattleCommandSlot *>(g_btlAction.units)[(*reference)->unitRecord.currentSlot].setCommand(0x26);
        return;
    }
    if (FUN_004ea0c0(reinterpret_cast<BattleEventOwnerRef *>(reference), candidate)) {
        reinterpret_cast<BattleCommandSlot *>(g_btlAction.units)[(*reference)->unitRecord.currentSlot].setCommand(0x24);
        return;
    }
    if (FUN_003edca0(*reference)) {
        BtlCombatantEntryA *entry = FUN_003e81bc(*reference);
        BtlMainStateA *state = *reference;
        f32 value; // Never set before use, as in the original.
        BattleCommandValue payload;
        payload.real = value;
        FUN_003e77cc(state, 1, state->roster->combatant.combatantIndex,
                     entry->indexView.selectionIndex, payload);
        reinterpret_cast<BattleCommandSaveView *>(gameDataBlocksGetSaveData())->pending = 0;
    }
    reinterpret_cast<BattleCommandSlot *>(g_btlAction.units)[(*reference)->unitRecord.currentSlot].setCommand(0x26);
}
}
