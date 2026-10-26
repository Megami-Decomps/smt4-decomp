/* NON_MATCHING: command setup and 64-bit mask loads use different order and registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/GameFlags.h"
#include "battle/btlUnit.h"
#include "battle/btlScript.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BattleUnit.h"

// These mask fields extend beyond the shared candidate-mask prefix.
struct CandidateCommandMasksView {
    u8 unk00[0x58];
    u64 required;
    u64 excluded;
};
struct PendingCommandDataView {
    u8 unk000[0x1c0];
    u16 argument;
};
typedef char PendingCommandViewsCheck[offsetof(CandidateCommandMasksView, required) == 0x58 &&
    offsetof(CandidateCommandMasksView, excluded) == 0x60 &&
    offsetof(PendingCommandDataView, argument) == 0x1c0 ? 1 : -1];

extern "C" {
s32 scrGetArg(u32 index);


u32 FUN_0035e9fc()
{
    s32 command = scrGetArg(0);
    BtlUnitDataA *data = reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->data;
    data->unk1BE = 2;
    ((PendingCommandDataView *)data)->argument = (u16)command;
    if (data->unk02 == 0x323 && command == 0x80) {
        ++reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->params[0xed];
    }
    u64 flags = btlGetMainState()->stateFlags64.bits;
    const CandidateCommandMasksView *masks = (const CandidateCommandMasksView *)&g_btlCandidateMasks;
    if ((flags & masks->required) != 0 && (flags & masks->excluded) == 0 &&
        data->unk02 == 0x1b6 && (data->unk110 & 0x10) != 0 &&
        ((PendingCommandDataView *)data)->argument == 0x9b) {
        gameFlagSetValue(0x596, 1, 1);
    }
    return 1;
}
}
