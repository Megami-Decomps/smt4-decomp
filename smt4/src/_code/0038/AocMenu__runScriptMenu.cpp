/* NON_MATCHING: retail returns directly from every state (no shared epilogue), keeps the process in r4 with g_aocMain in r6 and copies the result through two stack records with ldm/stm; this build merges exits and reuses fewer registers. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"
#include "code/Code0023.h"
#include "common.h"
#include "script/ScriptEntry.h"

struct AocMenuObject;

/* A five-word result record: the first byte is its kind (0 = none, >= 100 = a command). */
struct AocResult {
    /* 0x00 */ u32 words[5];
};

/* The object a menu owns for its current screen: slot 1 destroys it, slot 3 reads its pending result. */
struct AocMenuObjectVtable {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(AocMenuObject *object);
    /* 0x08 */ void *unk08;
    /* 0x0C */ AocResult (*readResult)(AocMenuObject *object);
};

/* The screen object is embedded in the process; once the screen ends its place holds the result record. */
struct AocMenuObject {
    /* 0x00 */ AocMenuObjectVtable *vtable;
    /* 0x04 */ u32 result[5];
};


/* A script-driven menu process of the AOC part. */
struct AocMenuProcess {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u32 mode;
    /* 0x008 */ s32 phase;
    /* 0x00C */ u8 unk00C[0x1FC];
    /* 0x208 */ AocMenuObject *active;
    /* 0x20C */ u32 unk20C;
    /* 0x210 */ RequestParameters result;
    /* 0x224 */ u8 unk224[0x1C];
    /* 0x240 */ u8 holder[0x110];
    /* 0x350 */ void *table;
    /* 0x354 */ u8 unk354[4];
    /* 0x358 */ ScriptProcess *script;
};

extern "C" {

void aocLoadingTaskStart(AocMenuProcess *process, s32 value);
void aocMenuSetButtonHelp(AocMenuProcess *process, s32 a, s32 b);
void FUN_00233e70(AocMenuProcess *process, s32 unused, s32 next);
s32 tableGroupFindEntryIndex(void *table, const char *name);
s32 strIsEmpty(u32 *record);
u8 byteIsAtLeast100(u32 *record);
void jobStopAndClearFlags(AocMenuProcess *process);
void messageMainFinishWindow(void);
u32 flaggedValueHolderGetTotal(void *holder);
u8 buttonHelpStateIsNot3(void);
u8 sys43e188GetState(void);
u8 messageBannerIsIdle(void);
u32 buttonHelpHasEnabledEntryForId(u32 id);
void eventQueueAddUniqueIfValid(s32 event);
void buttonHelpSetEnabled(u32 mode);

/* Runs one step of the menu process: 0 starts the script, 1 waits for input, 2 follows the screen's result, 3-5 chain the follow-up screens. */
void AocMenu::runScriptMenu()
{
    AocMenuProcess * process = reinterpret_cast<AocMenuProcess *>(this);
    AocMenuRequest record;
    AocMain *aoc = g_aocMain;
    switch (process->phase) {
    case 0:
        process->flags |= 0x10000;
        aocLoadingTaskStart(process, 3);
        scrScriptProcessStartEntry(process->script, tableGroupFindEntryIndex(process->table, "aoc_ExeDelete"));
        process->phase = 1;
        aocMenuSetButtonHelp(process, -1, 0);
        return;
    case 1:
        if (buttonHelpStateIsNot3() != 0 && (process->flags & 0x200) != 0) {
            scrRunOpcodesStub(process->script);
            AocMenuObject *object = (AocMenuObject *)windowCreateStatusOperation(&process->unk20C, 3);
            process->active = object;
            object->result[4] = aoc->records[flaggedValueHolderGetTotal(process->holder)].contentId;
            process->phase = 2;
            return;
        }
        return;
    case 2: {
        scrRunOpcodesStub(process->script);
        AocResult raw = process->active->vtable->readResult(process->active);
        record = reinterpret_cast<const RequestParameters &>(raw);
        if (strIsEmpty(&record.word(0)) != 0) {
            jobStopAndClearFlags(process);
            messageMainFinishWindow();
            process->phase = 3;
            return;
        } else if (byteIsAtLeast100(&record.word(0)) != 0) {
            jobStopAndClearFlags(process);
            messageMainFinishWindow();
            process->phase = 9999;
            process->result = record;
            return;
        }
        return;
    }
    case 3:
        if (sys43e188GetState() != 0) {
            scrScriptProcessStartEntry(process->script, tableGroupFindEntryIndex(process->table, "aoc_Deleted"));
            buttonHelpSetEnabled(0);
            aocMenuSetButtonHelp(process, 3, 1);
            process->phase = 4;
            return;
        }
        return;
    case 4:
        scrRunOpcodesStub(process->script);
        if (buttonHelpHasEnabledEntryForId(0x10) != 0) {
            eventQueueAddUniqueIfValid(0x100016d);
            messageMainFinishWindow();
            process->phase = 5;
            return;
        }
        return;
    case 5:
        if (sys43e188GetState() != 0 && messageBannerIsIdle() != 0) {
            process->mode = 10;
            process->phase = 0;
            if (process->active != 0) {
                process->active->vtable->destroy(process->active);
                process->active = 0;
                return;
            }
        }
        return;
    case 9999:
        FUN_00233e70(process, 5, 3);
        return;
    }
}
}
