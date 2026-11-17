/* NON_MATCHING: the marker test now reads the field in place and loads like retail (ldm); only the mask registers differ (retail: mask base r3, low word r1, and flags-high & mask-high into r0). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/ConsumableRecordA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

extern BattleCandidateMasks DAT_00573c90;

u32 FUN_00400164(void *actor, u16 value);
s32 FUN_00400284(void *actor, s32 arg1, ConsumableRecordA *record, s32 arg3);

/* Classify the table-8 record id for actor: 1 none, 2 not usable here, 3 started, 0 blocked or refused. */
u32 FUN_004000a8(void *actor, u32 id)
{
    if (id == 0) {
        return 1;
    }
    ConsumableRecordA *record = itemTableGetItemRecord(id);
    if (record == NULL) {
        return 1;
    }
    if ((record->type != 2 && record->type != 3) || (record->kind != 1 && record->kind != 12)) {
        return 2;
    }
    if (record->skillId != 0) {
        return FUN_00400164(actor, record->skillId);
    }
    BtlMainStateA *state = btlGetMainState();
    if (DAT_00573c90.excluded & state->markerMasks.bits) {
        return 0;
    }
    if (FUN_00400284(actor, 1, record, 1)) {
        return 3;
    }
    return 0;
}

} /* extern "C" */
