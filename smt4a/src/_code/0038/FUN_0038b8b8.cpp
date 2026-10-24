/* NON_MATCHING: register allocation only in the last 64-bit mask AND (retail writes the result over the loaded mask: and r0,r0,r2 / and r1,r1,r3). */
#include "common.h"

struct CandidateRecord {
    /* 0x000 */ u64 mask;
    /* 0x008 */ u8 unk008[0x2ae];
    /* 0x2b6 */ u16 slots[21];
    /* 0x2e0 */ u8 unk2e0[0x128];
};

struct TableRecord {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 entry;
};

struct TableEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 flags;
};

struct BattleCandidateState {
    /* 0x0000 */ u8 unk0000[0x1ffc];
    /* 0x1ffc */ CandidateRecord *records;
    /* 0x2000 */ u8 unk2000[0x2e58];
    /* 0x4e58 */ const u16 *idsBegin;
    /* 0x4e5c */ const u16 *idsEnd;
};

extern "C" {

extern u64 g_btlCandidateMasks[];

BattleCandidateState *btlGetMainState(void);
TableRecord *dataTable8FindRecord(u16 id);
TableEntry *dataTable04FindById(u16 id);
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script command: reports whether a matching candidate (selected by the two arguments) is among the battle's listed ids. */
u32 FUN_0038b8b8(void)
{
    s32 enabled = scrGetArg(0);
    s32 group = scrGetArg(1);
    BattleCandidateState *state = btlGetMainState();
    if (enabled != 0 && state->idsBegin != state->idsEnd) {
        for (s32 i = 0; i < 109; i++) {
            CandidateRecord *record = &btlGetMainState()->records[i];
            u64 mask = record->mask;
            if ((g_btlCandidateMasks[3] & mask) != 0 && (g_btlCandidateMasks[0] & mask) != 0 &&
                (g_btlCandidateMasks[5] & mask) == 0) {
                for (s32 slot = 0; slot < 21; slot++) {
                    if (group == record->slots[slot] >> 10) {
                        for (const u16 *id = state->idsBegin; id != state->idsEnd; id++) {
                            TableEntry *entry = dataTable04FindById(dataTable8FindRecord(*id)->entry);
                            if (entry != NULL && (entry->flags << 16) >> 27 == slot) {
                                scrSetResult(1);
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
