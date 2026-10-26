/* NON_MATCHING: a single compare - retail tests the upper level bound as `cmp max, level; strge` while armcc emits the operands the other way round (`cmp level, max; strle`); everything else is identical. */
#include "common.h"
#include "shard/JobWork.h"
#include "bible/bibleDevil.h"
#include "shard/demonGetRaceLabel.h"
#include "util/Random.h"

namespace {
/* A demon record: only the fields the filter reads. */
struct DevilRecord {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 level;
    /* 0x04 */ u8 unk04[2];
    /* 0x06 */ u16 flags;                /* bit 0: can be summoned by this command */
};

/* The spawned NPC's job work block (only the fields touched here). */
struct NpcJobWork {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 mode;
    /* 0x10 */ u8 unk10[0x18];
    /* 0x28 */ f32 height;
    /* 0x2c */ u8 unk2c[4];
    /* 0x30 */ u8 hidden;
};
}

extern "C" {
extern s32 DAT_0044cfa0;                 /* frames spent in the current step */
s32 scrGetCommandFrame(void);
s32 scrGetArg(u32 index);
u32 scrWorkGetValue(u32 slot);
void scrWorkSetValue(u32 slot, u32 value);
void jyoucyuGetTableEntry(s32 index);
DevilRecord *devilGetRecord(u32 id);
u32 partyFindFreeStockSlot(void);
void FUN_0029c1c8(u32 id, u32 a, u32 b);
u32 FUN_00252190(u32 id, s32 a, s32 b);
void eventTexSetJobParam(u32 job);
void eventTexRegisterAndSortTask(u32 job);
void FUN_00247bf4(u32 job, s32 frame, s32 flag);
void *memClear(void *data, u32 size);
const char *FUN_002bd06c(u32 id);
char *libc_strcpy(char *destination, const char *source);
void textEncodeFontSlot(u32 slot, const char *text);
u32 fileSlotGetBuffer(u32 slot);
void FUN_002bff38(s32 arg);
s32 messageForwardDefaultMode(u32 buffer, s32 message, s32 frame, s32 mode, s32 arg);
s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);

/* Script command: spawns a random demon whose level lies in [arg0, arg1] as an NPC, shows its name and race in a
   message and then removes or hides it. Runs as a step machine over script work slot 0; returns 1 when done
   (or when no demon qualifies), 0 while running. */
u32 scrComm_Npc_SpawnRandomInRange(void)
{
    if (scrGetCommandFrame() == 0) {
        jyoucyuGetTableEntry(0);
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
        DAT_0044cfa0 = 0;
    }
    switch (scrWorkGetValue(0)) {
    case 0: {
        s32 minimum = scrGetArg(0);
        s32 maximum = scrGetArg(1);
        s32 candidates[1280];
        s32 count = 0;
        for (s32 id = 1; id < 0x500; id++) {
            candidates[id] = 0;
            DevilRecord *record = devilGetRecord((u16)id);
            if (record != NULL && (record->flags & 1) != 0 && minimum <= record->level && record->level <= maximum) {
                candidates[count] = id;
                count++;
            }
        }
        if (count <= 0) {
            return 1;
        }
        u16 chosen = (u16)candidates[randNextInRange((u16)(count - 1))];
        FUN_0029c1c8(partyFindFreeStockSlot(), chosen, 0);
        scrWorkSetValue(0, 1);
        DAT_0044cfa0 = 0;
        scrWorkSetValue(1, chosen);
        break;
    }
    case 1: {
        u32 job = FUN_00252190(scrWorkGetValue(1), 0, 0);
        eventTexSetJobParam(job);
        eventTexRegisterAndSortTask(job);
        scrWorkSetValue(2, job);
        FUN_00247bf4(job, 0, 1);
        scrWorkSetValue(0, 2);
        DAT_0044cfa0 = 0;
        break;
    }
    case 2:
        FUN_00247bf4(scrWorkGetValue(2), 15, 0);
        scrWorkSetValue(0, 3);
        DAT_0044cfa0 = 0;
        break;
    case 3:
        DAT_0044cfa0 = DAT_0044cfa0 + 1;
        if (DAT_0044cfa0 >= 15) {
            scrWorkSetValue(0, 4);
            DAT_0044cfa0 = 0;
        }
        break;
    case 4: {
        char name[128];
        char race[128];
        devilGetRecord((u16)scrWorkGetValue(1));
        memClear(name, 0x80);
        memClear(race, 0x80);
        libc_strcpy(name, FUN_002bd06c((u16)scrWorkGetValue(1)));
        libc_strcpy(race, demonGetRaceLabel((u16)scrWorkGetValue(1), 1));
        textEncodeFontSlot(8, name);
        textEncodeFontSlot(9, race);
        u32 buffer = fileSlotGetBuffer(30);
        FUN_002bff38(20);
        s32 result = messageForwardDefaultMode(buffer, 0x38, DAT_0044cfa0, 6, 0);
        DAT_0044cfa0 = DAT_0044cfa0 + 1;
        if (result == 1) {
            scrWorkSetValue(0, 10);
            DAT_0044cfa0 = 0;
        }
        break;
    }
    case 10:
        FUN_00247bf4(scrWorkGetValue(2), 10, 1);
        scrWorkSetValue(0, 11);
        DAT_0044cfa0 = 0;
        break;
    case 11:
        DAT_0044cfa0 = DAT_0044cfa0 + 1;
        if (DAT_0044cfa0 >= 10) {
            scrWorkSetValue(0, 12);
            DAT_0044cfa0 = 0;
        }
        break;
    case 12: {
        u32 job = scrWorkGetValue(2);
        if (jobIsValid(job) != 0) {
            NpcJobWork *work = reinterpret_cast<NpcJobWork *>(jobGetWork(job));
            if (work->mode == 1) {
                jobStop(job, 0);
            } else {
                work->height = -0.25f;
                work->hidden = 1;
            }
        }
        scrWorkSetValue(0, 13);
        DAT_0044cfa0 = 0;
        break;
    }
    case 13:
        return 1;
    }
    return 0;
}

} /* extern "C" */
