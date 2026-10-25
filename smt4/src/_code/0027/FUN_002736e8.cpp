/* NON_MATCHING: retail shares one state store between states 0 and 1 (case 0 branches to case 1's store); armcc merges case 1 into case 2's store. The process mode store uses the inlined scriptProcessSetMode. */
#include "common.h"

extern "C" {

typedef struct ScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ s32 mode;
} ScriptProcess;

/* Runs one quest script: loads its script and message files, starts an entry and waits for it to finish. */
typedef struct QuestScriptRun {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 entry;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ void *script;
    /* 0x10 */ void *messages;
    /* 0x14 */ ScriptProcess *process;
} QuestScriptRun;

void asdLoadFileAsyncSimple(const char *path, void **data, s32 a);
ScriptProcess *FUN_00297060(void *script, void *messages);
void scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
s32 scrRunOpcodesStub(ScriptProcess *process);
u32 FUN_002903f0(void);
void FUN_0029016c(u32 a, s32 b);
void FUN_002900d0(void);
void gameJumpRequestClear(void);

/* Steps the quest script run; returns 1 once it has finished. */
u32 FUN_002736e8(QuestScriptRun *run)
{
    switch (run->state) {
    case 0:
        asdLoadFileAsyncSimple("event/quest/QuestScr.bf", &run->script, 0);
        asdLoadFileAsyncSimple("event/quest/QuestSys.mbm", &run->messages, 0);
        run->state = 1;
        break;
    case 1:
        if (run->script != NULL && run->messages != NULL) {
            run->process = FUN_00297060(run->script, run->messages);
            scriptProcessSetMode(run->process, 2);
            scrScriptProcessStartEntry(run->process, run->entry);
            run->state = 2;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(run->process) == 2) {
            FUN_0029016c(FUN_002903f0(), 0);
            FUN_002900d0();
            gameJumpRequestClear();
            run->state = 4;
        }
        break;
    case 4:
        return 1;
    }
    return 0;
}

} /* extern "C" */
