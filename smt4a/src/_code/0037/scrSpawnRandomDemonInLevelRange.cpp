#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code0029.h"

namespace {
/* A demon record: only the fields the filter reads. */

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
extern s32 DAT_00588008;                 /* frames spent in the current step */
s32 scrGetCommandFrame(void);
s32 scrGetArg(u32 index);
u32 scrWorkGetValue(u32 slot);
void scrWorkSetValue(u32 slot, u32 value);
void jyoucyuGetTableEntry(s32 index);
u32 randRange(u32 maximum);
u32 partyFindFirstUnusedEntry(void);
u32 npc2dCreateDemonPortrait(u32 id, s32 a, s32 b, s32 c, f32 scale);
void eventTexSetJobParam(u32 job);
void eventInsertSortedTextureJob(u32 job);
void FUN_0031bca4(u32 job, s32 frame, s32 flag);
void sysMemClear(void *data, u32 size);
const char *dataTable01GetRecordWithAocOverride(u32 id);
const char *demonGetRaceLabel(u32 id, s32 kind);
char *libc_strcpy(char *destination, const char *source);
u32 dataTableValueOrZero(u32 slot);
void messageMainSetMode(s32 arg);
s32 messageForwardDefaultMode(u32 buffer, s32 message, s32 frame, s32 mode, s32 arg);
s32 jobIsValid(u32 job);
NpcJobWork *jobGetWork(u32 job);
void jobStop(u32 job, s32 arg);

/* Script command: spawns a random demon whose level lies in [arg0, arg1] as an NPC, shows its name and race in a
   message and then removes or hides it. Runs as a step machine over script work slot 0; returns 1 when done
   (or when no demon qualifies), 0 while running. */
u32 scrSpawnRandomDemonInLevelRange(void)
{
    if (scrGetCommandFrame() == 0) {
        jyoucyuGetTableEntry(0);
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
        DAT_00588008 = 0;
    }
    switch (scrWorkGetValue(0)) {
    case 0: {
        s32 minimum = scrGetArg(0);
        s32 maximum = scrGetArg(1);
        s32 candidates[1280];
        s32 count = 0;
        for (s32 id = 1; id < 0x500; id++) {
            candidates[id] = 0;
            NkmBaseRecordA *record = nkmBaseGetRecord((u16)id);
            if (record == NULL || (record->flags & 1) == 0 || minimum > record->level || record->level > maximum)
                continue;
            candidates[count] = id;
            count++;
        }
        if (count <= 0) {
            return 1;
        }
        u16 chosen = (u16)candidates[randRange((u16)(count - 1))];
        dispatchIfFound(partyFindFirstUnusedEntry(), chosen, 0);
        scrWorkSetValue(0, 1);
        DAT_00588008 = 0;
        scrWorkSetValue(1, chosen);
        break;
    }
    case 1: {
        u32 job = npc2dCreateDemonPortrait(scrWorkGetValue(1), 0, 0, 0, 1.0f);
        eventTexSetJobParam(job);
        eventInsertSortedTextureJob(job);
        scrWorkSetValue(2, job);
        FUN_0031bca4(job, 0, 1);
        scrWorkSetValue(0, 2);
        DAT_00588008 = 0;
        break;
    }
    case 2:
        FUN_0031bca4(scrWorkGetValue(2), 15, 0);
        scrWorkSetValue(0, 3);
        DAT_00588008 = 0;
        break;
    case 3:
        DAT_00588008 = DAT_00588008 + 1;
        if (DAT_00588008 >= 15) {
            scrWorkSetValue(0, 4);
            DAT_00588008 = 0;
        }
        break;
    case 4: {
        char name[128];
        char race[128];
        nkmBaseGetRecord((u16)scrWorkGetValue(1));
        sysMemClear(name, 0x80);
        sysMemClear(race, 0x80);
        libc_strcpy(name, dataTable01GetRecordWithAocOverride((u16)scrWorkGetValue(1)));
        libc_strcpy(race, demonGetRaceLabel((u16)scrWorkGetValue(1), 0));
        scrSetStringSlot(8, name);
        scrSetStringSlot(9, race);
        u32 buffer = dataTableValueOrZero(30);
        messageMainSetMode(0x15);
        s32 result = messageForwardDefaultMode(buffer, 0x38, DAT_00588008, 6, 0);
        DAT_00588008 = DAT_00588008 + 1;
        if (result == 1) {
            scrWorkSetValue(0, 10);
            DAT_00588008 = 0;
        }
        break;
    }
    case 10:
        FUN_0031bca4(scrWorkGetValue(2), 10, 1);
        scrWorkSetValue(0, 11);
        DAT_00588008 = 0;
        break;
    case 11:
        DAT_00588008 = DAT_00588008 + 1;
        if (DAT_00588008 >= 10) {
            scrWorkSetValue(0, 12);
            DAT_00588008 = 0;
        }
        break;
    case 12: {
        u32 job = scrWorkGetValue(2);
        if (jobIsValid(job) != 0) {
            NpcJobWork *work = jobGetWork(job);
            if (work->mode == 1) {
                jobStop(job, 0);
            } else {
                work->height = -0.25f;
                work->hidden = 1;
            }
        }
        scrWorkSetValue(0, 13);
        DAT_00588008 = 0;
        break;
    }
    case 13:
        return 1;
    }
    return 0;
}

} /* extern "C" */
