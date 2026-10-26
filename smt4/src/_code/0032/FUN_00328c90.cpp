/* NON_MATCHING: instructions identical to retail; the retail literal pool carries one extra unreferenced word ahead of 0xcf78. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

typedef struct PartyEntry {
    /* 0x000 */ s8 id;
    /* 0x001 */ u8 unk001[0x61F];
} PartyEntry;

typedef struct Party {
    /* 0x0000 */ u8 unk0000[0x3654];
    /* 0x3654 */ PartyEntry entries[25];
    /* 0xCF74 */ u8 unkCF74[4];
    /* 0xCF78 */ int current;      /* index of the current entry */
} Party;

int scrSetResult(int value);

/* Script command: looks up a value for the current party entry (from gameGetUnitRecord's table at FUN_00295408()) and passes it to scrSetResult. */
u32 FUN_00328c90(Party **partyPtr)
{
    Party *party = *partyPtr;

    if (party != NULL) {
        PartyEntry *entry = &party->entries[party->current];
        u8 *table = (u8 *)static_cast<u16 *>(gameGetUnitRecord(entry->id));
        int index = FUN_00295408();

        scrSetResult(*(u16 *)(table + index * 2 + 0x34));
    }
    return 1;
}

} /* extern "C" */
