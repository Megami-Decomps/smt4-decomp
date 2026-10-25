/* NON_MATCHING: snapshot memset uses r0 for zero and r1 for its address instead of retail's r1/r0; filtering loops match. */
#include "common.h"
#include <string.h>

struct PartySkillRecord {
    u8 unk00[0x34];
    u16 skills[8];
};
struct PartySkillSlots {
    u8 unk0000[0x9108];
    s8 slots[3];
};
struct SkillSnapshotInfo {
    u8 unk00[0x55];
    u8 excluded;
};
struct PartySkillSnapshot {
    u8 unk0000[0x341c];
    union {
        u16 skills[4][8];
        u32 words[16];
    } snapshot;
};

extern "C" {
PartySkillRecord *gameGetPlayerData();
PartySkillSlots *gameGetSlotTable();
PartySkillRecord *gameGetUnitRecord(s32 slot);
SkillSnapshotInfo *dataTable40FindById(u32 id);
s32 idIsAbove400(u32 id);

// Snapshot the player's and three party members' eligible skill IDs in packed lists.
void partyCaptureEligibleSkills(PartySkillSnapshot *screen)
{
    s32 count = 0;
    memset(&screen->snapshot, 0, sizeof(screen->snapshot));
    for (s32 index = 0; index < 8; ++index) {
        u16 id = gameGetPlayerData()->skills[index];
        SkillSnapshotInfo *info = dataTable40FindById(id);
        if (info != NULL && info->excluded == 0 && !idIsAbove400(id)) {
            screen->snapshot.skills[0][count++] = id;
        }
    }
    for (s32 member = 0; member < 3; ++member) {
        if (gameGetSlotTable()->slots[member] >= 0) {
            PartySkillRecord *record = gameGetUnitRecord(gameGetSlotTable()->slots[member]);
            if (record != NULL) {
                count = 0;
                for (s32 index = 0; index < 8; ++index) {
                    u16 id = record->skills[index];
                    SkillSnapshotInfo *info = dataTable40FindById(id);
                    if (info != NULL && info->excluded == 0 && !idIsAbove400(id)) {
                        screen->snapshot.skills[member + 1][count++] = id;
                    }
                }
            }
        }
    }
}
}
