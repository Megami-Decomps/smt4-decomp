#include "shard/Shard003F.h"

extern "C" {

typedef struct PartyEntryFlag {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 unk01[3];
} PartyEntryFlag;

typedef struct PartyBlock2A0 {
    /* 0x000 */ u8 unk000[0x2A0];
    /* 0x2A0 */ PartyEntryFlag entries[400];
} PartyBlock2A0;

extern PartyBlock2A0 *FUN_001ab940(void);
extern void FUN_002e6dd4(PartyBlock2A0 *block, u32 size);

/* Clears the party block and flags entries 0x15E..0x18F with bit 0x20. */
void partyFlagRange(void)
{
    u16 index;
    u8 *entry;

    FUN_002e6dd4(FUN_001ab940(), 0xA04);
    index = 0x15E;
    do {
        entry = &FUN_001ab940()->entries[index].flags;
        if (entry != NULL) {
            *entry |= 0x20;
        }
        index++;
    } while (index < 400);
}

} /* extern "C" */
