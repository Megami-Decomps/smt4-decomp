#ifndef GAMEDATA_DEMONSAVESNAPSHOT_H
#define GAMEDATA_DEMONSAVESNAPSHOT_H
#include "common.h"
#include <stddef.h>
struct DemonSnapshotFourWords { u32 words[4]; };
struct DemonSnapshotTwoWords { u32 words[2]; };
struct DemonSaveSnapshot {
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
    /* 0x2C */ DemonSnapshotTwoWords extra;
    /* 0x34 */ u32 status;
    /* 0x38 */ u32 experience;
    /* 0x3C */ u8 inherited[0x12];
};
struct DemonSaveRefreshSource {
    /* 0x000 */ u16 id;
    /* 0x002 */ u16 variant;
    /* 0x004 */ u16 attributes[5];
    /* 0x00E */ u8 unk00E[0x12];
    /* 0x020 */ u16 skills[5];
    /* 0x02A */ u8 unk02A[6];
    /* 0x030 */ u32 experience;
    /* 0x034 */ DemonSnapshotFourWords data;
    /* 0x044 */ DemonSnapshotTwoWords extra;
    /* 0x04C */ u8 inherited[0x12];
    /* 0x05E */ u8 unk05E[6];
    /* 0x064 */ u16 level;
    /* 0x066 */ u8 unk066[0x46];
    /* 0x0AC */ u16 bonuses[5];
    /* 0x0B6 */ u8 unk0B6[0x75];
    /* 0x12B */ u8 flags;
};
typedef char DemonSaveSnapshotLayoutCheck[(offsetof(DemonSaveSnapshot, inherited) == 0x3C && sizeof(DemonSaveSnapshot) == 0x50 && offsetof(DemonSaveRefreshSource, flags) == 0x12B) ? 1 : -1];
#endif
