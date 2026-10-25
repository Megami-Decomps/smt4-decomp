#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/btlMain.h"

extern "C" {

/* A record with a halfword at +0x3c. */
typedef struct IdRecord {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s16 value;
} IdRecord;

IdRecord *dataTable41FindById(u32 id);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, u32 id);
void source4CCopyHalves(BtlCombatantEntryA *entry, u16 *output);

/* Collects the entry's ids and returns the value of the first one whose record has a nonzero value, else 0. */
s32 btlFindEntryNonzeroRecordValue(u32 id)
{
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), id);
    u16 ids[10] = {0};

    source4CCopyHalves(entry, ids);
    for (s32 i = 0; i < 9; i++) {
        if (ids[i] != 0) {
            IdRecord *record = dataTable41FindById(ids[i]);
            s32 value = record != NULL ? record->value : 0;
            if (value != 0) {
                return value;
            }
        }
    }
    return 0;
}

} /* extern "C" */
