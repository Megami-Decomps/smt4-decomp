/* NON_MATCHING: canonical mask type and direct marker union remove one row; retail still pairs the marker loads as LDM instead of two LDRs (47 versus 48 rows). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/Table8Record.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

extern BattleCandidateMasks DAT_00573c90;

u32 FUN_00400164(void *actor, u16 value);
Table8Record *dataTable8FindRecord(u32 id);
s32 FUN_00400284(void *actor, s32 arg1, Table8Record *record, s32 arg3);

/* Classify the table-8 record id for actor: 1 none, 2 not usable here, 3 started, 0 blocked or refused. */
u32 FUN_004000a8(void *actor, u32 id)
{
    if (id == 0) {
        return 1;
    }
    Table8Record *record = dataTable8FindRecord(id);
    if (record == NULL) {
        return 1;
    }
    if ((record->type != 2 && record->type != 3) || (record->kind != 1 && record->kind != 12)) {
        return 2;
    }
    if (record->unk32 != 0) {
        return FUN_00400164(actor, record->unk32);
    }
    BtlMainStateA *state = btlGetMainState();
    u64 markers = state->markerMasks.bits;
    if ((DAT_00573c90.excluded & markers) != 0) {
        return 0;
    }
    return FUN_00400284(actor, 1, record, 1) ? 3 : 0;
}

} /* extern "C" */
