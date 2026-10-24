/* NON_MATCHING: only difference is the argument order of the three questSetPackedFlag(id, 1) calls (retail loads r0 before r1, the build r1 first); -O2 candidate. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "Terminal/tmnlMain.h"

extern "C" {

void *asdMemAlloc(u32 size, u32 alignment, u32 flags, u32 memoryType, u32 mode);
s32 questTestPackedFlag(u32 flag);
void questSetPackedFlag(u32 index, s32 enabled);
s32 gameFlagIsSet(u32 flag);
void gameFlagSetValue(u32 flag, u32 unused, u32 value);
void messageStatesSetFirst(u32 state);
void gameCounterAddSaturating(u32 counter, u32 amount);
void FUN_00282bfc(u32 first, u32 second);
u32 asdProcessCreateSimple(const char *name, s32 group, u16 startDelay, u16 endDelay, void *onUpdate, void *onEnd, u32 work);
u32 taskCreateDraw(const char *name, u16 priority, u32 workSize, void *update, void *draw, void *destroy, void *work, u32 value);
void FUN_001d99c0(void);
void tmnlOnComplete(void);
void FUN_001fe23c(void);
void FUN_002e0948(void);
void FUN_0021f354(void);

extern TmnlWork *g_tmnl;

// Open the terminal: allocate and reset its work area, unlock the first quest flags and start its processes.
void FUN_001db0b8(const u32 *entry)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\Terminal\\tmnlMain.cpp", 249);
    TmnlWork *work = g_tmnl = (TmnlWork *)asdMemAlloc(256, 256, 0, sizeof(TmnlWork) + 0x4C, 1);
    if (questTestPackedFlag(10) == 0) {
        questSetPackedFlag(10, 1);
    }
    if (questTestPackedFlag(12) == 0) {
        questSetPackedFlag(12, 1);
    }
    if (questTestPackedFlag(11) == 0 && gameFlagIsSet(0x277) != 0) {
        questSetPackedFlag(11, 1);
    }
    gameFlagSetValue(0x465, 0, 1);
    work->unk05 = 1;
    work->unk10 = 0;
    work->unk14 = 0;
    work->unk09 = 0;
    work->unk0C = 0;
    for (s32 i = 0; i < 10; i++) {
        work->unk20[i] = 0;
    }
    work->unk550 = 0;
    work->unk554 = 0;
    work->unk558 = 0;
    work->unk568 = 0;
    work->unk564 = 0;
    work->unk574 = 0;
    work->unk570 = 0;
    work->unk580 = 0;
    work->unk57C = 0;
    work->unk58C = 0;
    work->unk588 = 0;
    messageStatesSetFirst(0);
    work->done = 0;
    if (entry != NULL) {
        u32 id = *entry & 0xff;
        work->unk09 = id;
        work->unk05 = 0;
        questSetPackedFlag(id, 1);
        gameCounterAddSaturating(28, 1);
        work->unk10 = 0;
        work->unk14 = 0;
    } else {
        work->unk14 = 0;
        work->unk10 = 1;
        FUN_00282bfc(0, 255);
    }
    work->task = asdProcessCreateSimple("TMNL C", 2, 0, 0, (void *)FUN_001d99c0, (void *)tmnlOnComplete, 0);
    taskCreateDraw("TMNL UD", 117, 0, 0, (void *)FUN_001fe23c, 0, 0, work->task);
    taskCreateDraw("TMNL UD", 211, 0, 0, (void *)FUN_002e0948, 0, 0, work->task);
    taskCreateDraw("TMNL DD", 231, 0, 0, (void *)FUN_0021f354, 0, 0, work->task);
}

}
