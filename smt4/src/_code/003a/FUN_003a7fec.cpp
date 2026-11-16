#include "common.h"
#include "gamedata/DemonSaveSnapshot.h"

/* IV's saved demon record (0x34 bytes): the fields a refresh rewrites. */
struct DemonSaveSnapshotIV {
    /* 0x00 */ u16 level;
    /* 0x02 */ u16 attributes[5];
    /* 0x0C */ u16 skills[5];
    /* 0x16 */ u8 unk16low : 2;
    u8 flags : 4;
    u8 unk16high : 2;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u16 id;
    /* 0x1A */ u16 variant;
    /* 0x1C */ DemonSnapshotFourWords data;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 experience;
};

/* IV's live demon record, as far as the refresh reads it. */
struct DemonSaveRefreshSourceIV {
    /* 0x000 */ u16 id;
    /* 0x002 */ u16 variant;
    /* 0x004 */ u16 attributes[5];
    /* 0x00E */ u8 unk00E[0x12];
    /* 0x020 */ u16 skills[5];
    /* 0x02A */ u8 unk02A[6];
    /* 0x030 */ u32 experience;
    /* 0x034 */ DemonSnapshotFourWords data;
    /* 0x044 */ u8 unk044[4];
    /* 0x048 */ u8 level;
    /* 0x049 */ u8 unk049[0x547];
    /* 0x590 */ u16 bonuses[5];
    /* 0x59A */ u8 unk59A[0x67];
    /* 0x601 */ u8 flags;
};
typedef char DemonSaveSnapshotIVLayoutCheck[(sizeof(DemonSaveSnapshotIV) == 0x34 &&
    offsetof(DemonSaveRefreshSourceIV, bonuses) == 0x590 && offsetof(DemonSaveRefreshSourceIV, flags) == 0x601) ? 1 : -1];

extern "C" {
DemonSaveRefreshSourceIV *FUN_003ad6e0(u32 id);
s32 gameRecordCopy(u32 id, DemonSaveSnapshotIV *snapshot);
void gameDataStoreRecord(u32 id, const DemonSaveSnapshotIV *snapshot);

/* Refresh an existing saved demon with its current level, stats, skills and inheritance. */
void FUN_003a7fec(u32 unused, u32 id)
{
    DemonSaveRefreshSourceIV *demon = FUN_003ad6e0(id);
    DemonSaveSnapshotIV snapshot;
    if (gameRecordCopy(id, &snapshot)) {
        snapshot.level = demon->level;
        snapshot.experience = demon->experience;
        snapshot.id = demon->id;
        snapshot.variant = demon->variant;
        snapshot.attributes[0] = demon->attributes[0] + demon->bonuses[0];
        snapshot.skills[0] = demon->skills[0];
        snapshot.attributes[1] = demon->attributes[1] + demon->bonuses[1];
        snapshot.skills[1] = demon->skills[1];
        snapshot.attributes[2] = demon->attributes[2] + demon->bonuses[2];
        snapshot.skills[2] = demon->skills[2];
        snapshot.attributes[3] = demon->attributes[3] + demon->bonuses[3];
        snapshot.skills[3] = demon->skills[3];
        snapshot.attributes[4] = demon->attributes[4] + demon->bonuses[4];
        snapshot.skills[4] = demon->skills[4];
        snapshot.data = demon->data;
        snapshot.flags = demon->flags & 0xF;
        gameDataStoreRecord(id, &snapshot);
    }
}
}
