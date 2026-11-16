/* NON_MATCHING: the ailment test is now retail's tst/tsteq chain (statusHasAilment) and the block layout (unit-record branch first) matches; remaining: retail keeps status in r5 and the entry/record pointer in r4 and widens status with uxth before each OR into a record (an unreduced halfword), 197 rows against 206. */
#include "battle/BtlMainAccess.h"
#include "common.h"

#define STATUS_BIT_ALT 0x10
#define STATUS_BIT_SLEEP 0x2
#define STATUS_BIT_A 0x40
#define STATUS_BIT_B 0x80
#define STATUS_BIT_C 0x100
#define STATUS_BIT_D 0x8
#define STATUS_CLEAR_ON_ENTRY 0x400
#define ENTRY_FLAG_DOWN 0x20
#define ENTRY_FLAG_SLEEPING 0x2
#define ENTRY_FLAG_WOKEN 0x1
#define ENTRY_FLAG_ASLEEP_LOCKED 0x10

/* A status word kept in a linked record. */
struct BtlStatusRecord {
    u8 unk00[0x44];
    u16 status;
};

struct BtlStatusRecordB {
    u8 unk00[0x72];
    u16 status;
};

/* The part of a battle entry from 0x100 on (observed field). */
struct BtlEntryLower {
    /* 0x00 */ u8 unk00[0xC6];
    /* 0xC6 */ u16 status;
};

/* A battle entry (observed fields). */
struct BtlStatusEntry {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xFC];
    /* 0x100 */ BtlEntryLower lower;
    /* 0x1C8 */ u8 unk1C8[0xB0];
    /* 0x278 */ BtlStatusRecordB *linkedA;
    /* 0x27C */ BtlStatusRecord *linkedB;
    /* 0x280 */ BtlStatusRecord *linkedC;
};

/* Per-entry records and counters of the battle state (observed fields). */
struct BtlStateRecords {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ u8 *records;
    /* 0x1E9C */ u8 unk1E9C[0x128];
    /* 0x1FC4 */ u16 woken;
};

/* Whether `status` holds an ailment bit (the alternate bit does not count). */
static __inline bool statusHasAilment(u32 status)
{
    status &= ~STATUS_BIT_ALT;
    if (status & 0x2)
        return true;
    if (status & 0x20)
        return true;
    if (status & 0x40)
        return true;
    if (status & 0x80)
        return true;
    if (status & 0x100)
        return true;
    if (status & 0x200)
        return true;
    if (status & 0x400)
        return true;
    if (status & 0x4)
        return true;
    if (status & 0x8)
        return true;
    return false;
}

extern "C" {

void btlTargetSetFlag10(BtlStateRecords *state, s32 id, s32 value);
BtlStatusEntry *btlMainFindEntryByListedId(BtlStateRecords *state, s32 id);
BtlStatusRecord *gameGetUnitRecord(s32 index);
u16 FUN_00245cc0(s32 kind);
void FUN_0033b1ac(BtlStateRecords *state, s32 value);

/* Sets (set != 0) or clears the status bits `status` on the entry with the listed id, mirroring them
 * to its linked records; entries past 0x6D are unit records. */
void FUN_003bcdb0(s32 id, s32 set, u16 status)
{
    BtlStateRecords *state = reinterpret_cast<BtlStateRecords *>(btlGetMainState());
    BtlStatusEntry *entry = btlMainFindEntryByListedId(state, id);

    if (entry == NULL) {
        if (id - 0x6D >= 0) {
            BtlStatusRecord *record = gameGetUnitRecord(id - 0x6D);

            if (record != NULL) {
                if (set == 0) {
                    record->status = record->status & ~status;
                } else {
                    if (statusHasAilment(status)) {
                        record->status = record->status & ~STATUS_BIT_ALT;
                    }
                    record->status = record->status | status;
                }
            }
        }
    } else {
        if ((entry->flags & ENTRY_FLAG_DOWN) == 0) {
            if (set != 0) {
                if (statusHasAilment(status)) {
                    btlTargetSetFlag10(state, id, 0);
                }
                entry->lower.status = entry->lower.status | status;
                if (entry->linkedA != NULL) {
                    u16 value = entry->linkedA->status | status;

                    entry->linkedA->status = value;
                    entry->linkedA->status = value & ~STATUS_CLEAR_ON_ENTRY;
                }
                if (entry->linkedB != NULL) {
                    entry->linkedB->status = entry->linkedB->status | status;
                }
                if (entry->linkedC != NULL) {
                    entry->linkedC->status = entry->linkedC->status | status;
                }
                if ((entry->flags & ENTRY_FLAG_SLEEPING) != 0) {
                    entry->lower.status = entry->lower.status & ~STATUS_CLEAR_ON_ENTRY;
                }
                if ((entry->flags & ENTRY_FLAG_ASLEEP_LOCKED) != 0) {
                    entry->lower.status = entry->lower.status & ~STATUS_CLEAR_ON_ENTRY;
                    return;
                }
            } else {
                entry->lower.status = entry->lower.status & ~status;
                if (entry->linkedA != NULL) {
                    entry->linkedA->status = entry->linkedA->status & ~status;
                }
                if (entry->linkedB != NULL) {
                    entry->linkedB->status = entry->linkedB->status & ~status;
                }
                if (entry->linkedC != NULL) {
                    entry->linkedC->status = entry->linkedC->status & ~status;
                }
                if ((status & STATUS_BIT_B) != 0) {
                    u16 value = FUN_00245cc0(22);
                    BtlStateRecords *other = reinterpret_cast<BtlStateRecords *>(btlGetMainState());
                    BtlStatusEntry *target = btlMainFindEntryByListedId(other, id);

                    if (target != NULL) {
                        *(u16 *)((u8 *)target + 0x9E) = value;
                    }
                }
                if ((status & STATUS_BIT_A) != 0) {
                    u16 value = FUN_00245cc0(23);
                    BtlStateRecords *other = reinterpret_cast<BtlStateRecords *>(btlGetMainState());
                    BtlStatusEntry *target = btlMainFindEntryByListedId(other, id);

                    if (target != NULL) {
                        *(u16 *)((u8 *)target + 0xA0) = value;
                    }
                }
                if ((status & STATUS_BIT_C) != 0) {
                    u16 value = FUN_00245cc0(24);
                    BtlStateRecords *other = reinterpret_cast<BtlStateRecords *>(btlGetMainState());
                    BtlStatusEntry *target = btlMainFindEntryByListedId(other, id);

                    if (target != NULL) {
                        *(u16 *)((u8 *)target + 0xA2) = value;
                    }
                }
                if ((status & STATUS_BIT_D) != 0) {
                    u16 value = FUN_00245cc0(25);
                    BtlStateRecords *other = reinterpret_cast<BtlStateRecords *>(btlGetMainState());
                    BtlStatusEntry *target = btlMainFindEntryByListedId(other, id);

                    if (target != NULL) {
                        *(u16 *)((u8 *)target + 0xA4) = value;
                    }
                }
                if ((status & STATUS_BIT_SLEEP) != 0 && (entry->flags & ENTRY_FLAG_SLEEPING) != 0) {
                    u8 *record;

                    entry->flags |= ENTRY_FLAG_WOKEN;
                    record = reinterpret_cast<BtlStateRecords *>(btlGetMainState())->records + id * 0x114;
                    *(u32 *)(record + 0x50) |= 0x81;
                    FUN_0033b1ac(state, *(s16 *)(record + 0x62));
                    state->woken++;
                    return;
                }
            }
        }
    }
}

} /* extern "C" */
