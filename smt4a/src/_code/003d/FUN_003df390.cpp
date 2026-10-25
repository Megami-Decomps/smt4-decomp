/* NON_MATCHING: retail looks the record up once more at the end and reads flag bit 1 ((flags & 2) >> 1) before returning 1 regardless; the original use of that bit is unknown. */
#include "common.h"

extern "C" {

typedef struct UnlockRecord {
    /* 0x000 */ u8 unk000[7];
    /* 0x007 */ u8 flags;
    /* 0x008 */ u8 unk008[0x11A];
    /* 0x122 */ u16 requiredFlag;
    /* 0x124 */ u8 unk124[2];
    /* 0x126 */ u16 requiredMembers[3];
} UnlockRecord;

UnlockRecord *FUN_001ad9b4(u32 id);
s32 gameFlagIsSet(u32 flag);
u32 partyEntryFlagsBit3(s32 member);

/* Return 1 when the record's required game flag and party members are all satisfied. */
s32 FUN_003df390(u32 id)
{
    UnlockRecord *record = FUN_001ad9b4(id);

    if (record == NULL) {
        return 0;
    }
    if (record->requiredFlag != 0 && !gameFlagIsSet(record->requiredFlag)) {
        return 0;
    }
    if (record->requiredMembers[0] != 0 && !partyEntryFlagsBit3(record->requiredMembers[0])) {
        return 0;
    }
    if (record->requiredMembers[1] != 0 && !partyEntryFlagsBit3(record->requiredMembers[1])) {
        return 0;
    }
    if (record->requiredMembers[2] != 0 && !partyEntryFlagsBit3(record->requiredMembers[2])) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
