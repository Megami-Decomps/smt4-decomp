/* NON_MATCHING: only the excluded-mask test allocates its AND registers differently (retail: and r2,r2,r0 / and r0,r1,r3 / orrs r0,r0,r2); the same near miss as FUN_0038b8b8. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/ConsumableRecordA.h"

struct CandidateIdEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 flags;
};

/* A vector of u16 ids. */
struct CandidateIdList {
    /* 0x0 */ u16 *begin;
    /* 0x4 */ u16 *end;
};

/* The battle's list of candidate ids after the main state. */
struct BattleCandidateIdState : BtlMainStateA {
    /* 0x4CF0 */ u8 unk4cf0[0x4e58 - 0x4cf0];
    /* 0x4e58 */ CandidateIdList ids;
};
typedef char BattleCandidateIdStateSizeCheck[sizeof(BattleCandidateIdState) == 0x4e60 &&
    offsetof(BattleCandidateIdState, ids) == 0x4e58 ? 1 : -1];

/* Removes one id from the list, moving the later ids down. */
static __inline void candidateIdsErase(CandidateIdList *list, u16 *position)
{
    if (list->begin == list->end) {
        return;
    }
    u16 *source = position + 1;
    u16 *end = list->end;
    if (end != source) {
        while (source != end) {
            *position++ = *source++;
        }
    }
    list->end--;
}

extern "C" {

s32 scrGetArg(s32 index);

/* Script command: removes from the battle's listed ids those whose slot matches a candidate in the group given by argument 1. */
u32 FUN_003b14b8(void)
{
    s32 enabled = scrGetArg(0);
    s32 group = scrGetArg(1);
    BattleCandidateIdState *state = reinterpret_cast<BattleCandidateIdState *>(btlGetMainState());
    if (enabled != 0 && state->ids.begin != state->ids.end) {
        for (s32 i = 0; i < 109; i++) {
            BtlCombatantEntryA *record = &btlGetMainState()->entries[i];
            u64 mask = record->flags;
            if ((g_btlCandidateMasks.unavailable & mask) != 0 && (g_btlCandidateMasks.required & mask) != 0 &&
                (g_btlCandidateMasks.excluded & mask) == 0) {
                for (s32 slot = 0; slot < 21; slot++) {
                    if (group == record->encodedStats.values[slot] >> 10) {
                        u16 *id = state->ids.begin;
                        while (id != state->ids.end) {
                            CandidateIdEntry *entry = (CandidateIdEntry *)skillDataFindById(itemTableGetItemRecord(*id)->skillId);
                            if (entry != NULL && (entry->flags << 16) >> 27 == slot) {
                                candidateIdsErase(&state->ids, id);
                            } else {
                                id++;
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */
