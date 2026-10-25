/* NON_MATCHING: retail keeps the found value in ip and leaves the lookup loop through a shared
 * "mov r0, ip" exit; armcc here returns straight from the match */
#include "common.h"

struct PartySlot {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
};

/* A lookup pair: the id to match and the value it maps to. */
struct IdValuePair {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 value;
};

extern "C" {

extern IdValuePair DAT_0057a46c[11];

PartySlot *FUN_003e4d68(u16 index);
s32 FUN_003e4d98(PartySlot *slot);
u32 lcgRandomRange(u16 limit);

/* Picks a random id among the 12 slots that FUN_003e4d98 accepts and returns the value the table
 * maps it to (0 when no slot qualifies or the id is not listed). */
u32 FUN_0047f5b8(void)
{
    u32 ids[12];
    s32 count = 0;
    s32 i;

    for (i = 0; i < 12; i++) {
        PartySlot *slot = FUN_003e4d68(i);
        if (FUN_003e4d98(slot) != 0) {
            ids[count++] = slot->id;
        }
    }
    if (count == 0) {
        return 0;
    }
    u32 id = ids[lcgRandomRange(count - 1)];
    u32 value = 0;
    for (i = 0; i < 11; i++) {
        if (DAT_0057a46c[i].id == id) {
            value = DAT_0057a46c[i].value;
            break;
        }
    }
    return value;
}

} /* extern "C" */
