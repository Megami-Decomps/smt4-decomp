/* NON_MATCHING: the required-mask high word and both AND results use different scratch registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/GameFlags.h"
#include "battle/btlUnit.h"
#include "battle/btlScript.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlGlobals.h"

// These mask fields extend beyond the shared candidate-mask prefix.
struct CandidateCommandMasksView {
    u8 unk00[0x58];
    u64 required;
    u64 excluded;
};
typedef char PendingCommandMaskOffsetsCheck[offsetof(CandidateCommandMasksView, required) == 0x58 &&
    offsetof(CandidateCommandMasksView, excluded) == 0x60 ? 1 : -1];

extern "C" {
s32 scrGetArg(u32 index);


u32 FUN_0035e9fc()
{
    s32 command = scrGetArg(0);
    BtlUnitDataA *data = reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->data;
    data->actionKind = 2;
    data->actionArg = (s16)command;
    if (data->id == 0x323 && command == 0x80) {
        /* the entry's word at 0x3B4 (not named in BtlCombatantEntryA yet) */
        ++reinterpret_cast<s32 *>(reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->entry)[0xed];
    }
    BtlMainStateA *state = btlGetMainState();
    if ((((const CandidateCommandMasksView *)&g_btlCandidateMasks)->required & state->stateFlags64.bits) != 0 &&
        (state->stateFlags64.bits & ((const CandidateCommandMasksView *)&g_btlCandidateMasks)->excluded) == 0 &&
        data->id == 0x1b6 && (data->statusFlags & 0x10) != 0 &&
        (u16)data->actionArg == 0x9b) {
        gameFlagSetValue(0x596, 1, 1);
    }
    return 1;
}
}
