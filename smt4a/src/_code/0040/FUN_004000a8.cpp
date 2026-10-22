/* NON_MATCHING: retail loads the two marker mask words with one `ldm r2, {r0, r2}` (an 8-byte copy?) where armcc emits two ldr; registers shift accordingly. */
#include "battle/btlMain.h"
#include "gamedata/Table8Record.h"

/* Battle-wide marker masks; a set blocked bit stops the action. */
struct BtlMarkerMaskTable {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u64 blocked;
};

extern "C" {

extern BtlMarkerMaskTable DAT_00573c90;

BtlMainStateA *btlGetMainState(void);
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
    u64 markers = static_cast<u64>(state->markerMasks.words[0]) |
                  (static_cast<u64>(state->markerMasks.words[1]) << 32);
    if ((markers & DAT_00573c90.blocked) != 0) {
        return 0;
    }
    return FUN_00400284(actor, 1, record, 1) ? 3 : 0;
}

} /* extern "C" */
