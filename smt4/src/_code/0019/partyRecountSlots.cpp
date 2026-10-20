/* NON_MATCHING: scheduling only: retail loads slot 0 after the store of the cleared counter; built hoists the load above it. */
#include "common.h"

extern "C" {

typedef struct Party {
    /* 0x0000 */ u8 unk0000[0x3072];
    /* 0x3072 */ s16 count;        /* members with a slot id */
    /* 0x3074 */ s16 slots[4];     /* negative when empty */
} Party;

/* Counts down; when it runs out recounts the filled member slots into the counter. */
void partyRecountSlots(Party *party)
{
    s16 remaining = party->count - 1;

    party->count = remaining;
    if (remaining <= 0) {
        party->count = 0;
        if (party->slots[0] >= 0) {
            party->count = 1;
        }
        if (party->slots[1] >= 0) {
            party->count = party->count + 1;
        }
        if (party->slots[2] >= 0) {
            party->count = party->count + 1;
        }
        if (party->slots[3] >= 0) {
            party->count = party->count + 1;
        }
    }
}

} /* extern "C" */
