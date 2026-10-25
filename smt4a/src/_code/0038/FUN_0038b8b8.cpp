/* NON_MATCHING: register allocation only in the last 64-bit mask AND (retail writes the result over the loaded mask: and r0,r0,r2 / and r1,r1,r3). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

struct TableRecord {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 entry;
};

struct TableEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 flags;
};

struct BattleCandidateState : BtlMainStateA {
    /* 0x4CF0 */ u8 unk4cf0[0x4e58 - 0x4cf0];
    /* 0x4e58 */ const u16 *idsBegin;
    /* 0x4e5c */ const u16 *idsEnd;
};
typedef char BattleCandidateStateSizeCheck[sizeof(BattleCandidateState) == 0x4e60 &&
    offsetof(BattleCandidateState, idsBegin) == 0x4e58 ? 1 : -1];

extern "C" {


BtlMainStateA *btlGetMainState(void);
TableRecord *dataTable8FindRecord(u16 id);
TableEntry *dataTable04FindById(u16 id);
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script command: reports whether a matching candidate (selected by the two arguments) is among the battle's listed ids. */
u32 FUN_0038b8b8(void)
{
    s32 enabled = scrGetArg(0);
    s32 group = scrGetArg(1);
    BattleCandidateState *state = reinterpret_cast<BattleCandidateState *>(btlGetMainState());
    if (enabled != 0 && state->idsBegin != state->idsEnd) {
        for (s32 i = 0; i < 109; i++) {
            BtlCombatantEntryA *record = &btlGetMainState()->entries[i];
            u64 mask = record->flags;
            if ((g_btlCandidateMasks.unavailable & mask) != 0 && (g_btlCandidateMasks.required & mask) != 0 &&
                (g_btlCandidateMasks.excluded & mask) == 0) {
                for (s32 slot = 0; slot < 21; slot++) {
                    if (group == record->encodedStats.values[slot] >> 10) {
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
