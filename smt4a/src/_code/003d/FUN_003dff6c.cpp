/* Fills the shared 100-byte work record from `stats`, a name and a level, and applies the level-ups. */
#include "common.h"

extern "C" {

typedef struct WorkRecord {
    /* 0x00 */ u16 stat0;
    /* 0x02 */ u16 stat1;
    /* 0x04 */ u16 stat2;
    /* 0x06 */ u16 stat3;
    /* 0x08 */ u16 stat4;
    /* 0x0A */ u16 stat5;
    /* 0x0C */ u16 stat6;
    /* 0x0E */ u16 unk0E[7];
    /* 0x1C */ u16 unk1C;
    /* 0x1E */ u16 unk1E;
    /* 0x20 */ u8 unk20[0x0A];
    /* 0x2A */ u16 unk2A;
    /* 0x2C */ u16 unk2C;
    /* 0x2E */ u8 unk2E[0x1E];
    /* 0x4C */ char name[0x12];
    /* 0x5E */ u8 unk5E[2];
    /* 0x60 */ u16 unk60;
    /* 0x62 */ u16 level;
} WorkRecord;

extern WorkRecord *gameGetPlayerData(void);
extern void sysMemClear(void *buffer, s32 size);
extern void FUN_003df7c4(s32 arg);
extern void FUN_004cc6d4(WorkRecord *record, s32 levels, s32 arg);
extern void FUN_004ccf78(s32 arg);
extern char *strncpy(char *dest, const char *src, u32 count);

void FUN_003dff6c(s32 level, const char *name, const u16 *stats)
{
    WorkRecord *record = gameGetPlayerData();

    sysMemClear(record, 100);
    record->level = level;
    record->unk60 = 0;
    strncpy(record->name, name, 0x12);
    record->name[0x11] = 0;
    FUN_004ccf78(0);
    if (level > 1) {
        FUN_004cc6d4(record, (s16)(level - 1), 1);
    }
    record->stat0 = stats[0];
    record->stat1 = stats[1];
    record->stat2 = stats[2];
    record->stat3 = stats[3];
    record->stat4 = stats[4];
    record->stat5 = stats[5];
    record->stat6 = stats[6];
    FUN_003df7c4(0);
    record->unk2A = record->unk1C;
    record->unk2C = record->unk1E;
}

}
