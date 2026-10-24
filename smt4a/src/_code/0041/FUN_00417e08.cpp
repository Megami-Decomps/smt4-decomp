/* NON_MATCHING: close: retail reloads the flag byte and clears bit 7 and the low bits of the second byte in a separate read-modify-write after the bit-6 update; built folds them into the same register. Also the literal pool order of 0x15E and the roster slot address computation differ */
#include "gamedata/RosterView.h"

extern "C" {

RosterView *gameFlagBlockGet(void);
s32 FUN_001bd100(u32 id);
s32 FUN_001bd118(u32 id);
s32 FUN_001ada74(u32 id);
u8 *FUN_001ad9b4(u32 id);
void FUN_004bb6d8(u32 flag, s32 value);
void clearTwoWords(void *words);
void clearThreeWords(void *words);

/* Adds a unit to the roster: refreshes its state flags, then stores it in the active party, the leader slot or the
 * first free stock slot, and clears the 0x500..0x51F flag range. Returns 0 when the id cannot be added. */
u32 FUN_00417e08(u16 id)
{
    RosterFlags *entry = &gameFlagBlockGet()->flags[id];
    RosterView *roster = gameFlagBlockGet();
    s32 kind;
    s32 i;

    if (entry->known == 0 && id < 0x15E) {
        return 0;
    }
    kind = FUN_001bd118(id);
    if (FUN_001bd100(id) == 0 && kind != 0 && kind != 10 && kind != 1 && roster->leader != 0) {
        return 0;
    }
    entry->refresh = 0;
    entry->current = 1;
    if (entry->partner != 0) {
        entry->hasPartner = 1;
    } else {
        entry->hasPartner = 0;
    }
    entry->cleared = 0;
    entry->flagsB &= 0xC2;
    if (kind == 10 && FUN_001ada74(id) != 0) {
        entry->flagsB |= 0x20;
    }
    if (FUN_001bd100(id) != 0) {
        if (kind == 1) {
            for (i = 0; i < 4; i++) {
                if (roster->active[i].id == 0) {
                    roster->active[i].id = id;
                    clearTwoWords(&roster->active[i].data[2]);
                    return 1;
                }
            }
        }
    } else if (kind != 0 && kind != 10 && kind != 2 && kind != 11) {
        for (i = 1; i < 20; i++) {
            if (roster->stock[i].id != 0) {
                u8 *record = FUN_001ad9b4(roster->stock[i].id);

                if (record != NULL && record[6] == 6) {
                    clearThreeWords(&roster->stock[i]);
                }
            }
        }
        if (kind == 6 || kind == 9) {
            roster->leader = id;
        } else {
            for (i = 1; i < 20; i++) {
                if (roster->stock[i].id == 0) {
                    clearThreeWords(&roster->stock[i]);
                    roster->stock[i].id = id;
                    break;
                }
            }
        }
        for (i = 0x500; i < 0x520; i++) {
            u8 *bits = (u8 *)gameFlagBlockGet();

            FUN_004bb6d8(i, 0);
            bits[i >> 3] &= ~(1 << (i & 7));
        }
    }
    return 1;
}

} /* extern "C" */
