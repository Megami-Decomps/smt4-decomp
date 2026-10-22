/* NON_MATCHING: script-load transition registers and shared continuation/cold-block layout differ from retail. */
#include "common.h"

struct BattleEventWork {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 flags;
    /* 0x08 */ void *tableData;
    /* 0x0C */ void *modelData;
    /* 0x10 */ void *scriptData;
    /* 0x14 */ void *script;
    /* 0x18 */ void *entries;
    /* 0x1C */ u32 entryCount;
    /* 0x20 */ s32 entry;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ s32 frames;
    /* 0x2C */ u8 stage;
};
struct BattleEventContext {
    /* 0x0000 */ u8 unk0000[0xc4];
    /* 0x00C4 */ u32 aocId;
    /* 0x00C8 */ u8 unk00c8[0x38];
    /* 0x0100 */ char eventName[0x40];
    /* 0x0140 */ u8 unk0140[0x4360];
    /* 0x44A0 */ u32 flags;
};

extern "C" {
extern void *g_aocSystem;
extern void *DAT_00435d18;
extern const char DAT_00400968[];
extern const char DAT_00400938[];
void memClear(void *destination, u32 size);
void textFormatBuffer(char *destination, const char *format, ...);
s32 FUN_0022a2c4(void *system, u32 id);
void FUN_00387a7c(void *system, u32 id, void **output, const char *name);
void aocQueueType1f(void *system, u32 id, void **output, const char *name);
void asdLoadFileAsyncSimple(const char *name, void **output, u32 flags);
void *dataTableFileGetTable(void *file, u32 index);
void *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
u32 FUN_0022a190(BattleEventWork *work, BattleEventContext *context);
u32 FUN_0022a07c(BattleEventWork *work, BattleEventContext *context);
u32 FUN_003c7760(BattleEventWork *work, BattleEventContext *context);
void scrScriptProcessStartEntry(void *script, s32 entry);
void buttonHelpSetPreset(s32 preset);
void FUN_003dadd8(void *state);
s32 btlEventAreResourcesReady(void *state);
void FUN_003dbe68(void *state);
s32 FUN_003dcc34(void *state);
}

static inline u32 finishBattleEventTable(BattleEventWork *work, BattleEventContext *context)
{
    if (work->tableData == NULL)
        return 0;
    void *table = dataTableFileGetTable(work->tableData, 0);
    work->entries = dataTableGetEntries(table);
    work->entryCount = dataTableGetCount(table);
    work->state = 3;
    return FUN_0022a190(work, context);
}

static inline u32 loadBattleEventScript(BattleEventWork *work, BattleEventContext *context)
{
    char name[128];
    memClear(name, sizeof(name));
    textFormatBuffer(name, DAT_00400938, context->eventName, context->eventName);
    if (FUN_0022a2c4(g_aocSystem, context->aocId))
        aocQueueType1f(g_aocSystem, context->aocId, &work->scriptData, name);
    else
        asdLoadFileAsyncSimple(name, &work->scriptData, 0);
    work->state = 6;
    if (work->scriptData == NULL)
        return 0;
    work->state = 7;
    return FUN_0022a07c(work, context);
}

static inline u32 startBattleEventScript(BattleEventWork *work, BattleEventContext *context)
{
    if (work->entry < 0)
        return 0;
    scrScriptProcessStartEntry(work->script, work->entry);
    work->state = 10;
    work->frames = 0;
    if (context->flags & 0x100000)
        buttonHelpSetPreset(0xdd);
    return FUN_003c7760(work, context);
}

/* Load and run a battle event, including asynchronous resource and transition waits. */
extern "C" u32 battleEventProcessUpdate(BattleEventWork *work, BattleEventContext *context)
{
    switch (work->state) {
    case 1: {
        char name[128];
        memClear(name, sizeof(name));
        textFormatBuffer(name, DAT_00400968, context->eventName, context->eventName);
        if (FUN_0022a2c4(g_aocSystem, context->aocId))
            FUN_00387a7c(g_aocSystem, context->aocId, &work->tableData, name);
        else
            asdLoadFileAsyncSimple(name, &work->tableData, 0);
        work->state = 2;
        return finishBattleEventTable(work, context);
    }
    case 2:
        return finishBattleEventTable(work, context);
    case 3:
        return FUN_0022a190(work, context);
    case 4:
        if (work->modelData == NULL)
            return 0;
        work->state = 5;
        return loadBattleEventScript(work, context);
    case 5:
        return loadBattleEventScript(work, context);
    case 6:
        if (work->scriptData == NULL)
            return 0;
        work->state = 7;
        return FUN_0022a07c(work, context);
    case 7:
        return FUN_0022a07c(work, context);
    case 8:
        switch (work->stage) {
        case 0:
            FUN_003dadd8(DAT_00435d18);
            work->stage = 1;
        case 1:
            if (!btlEventAreResourcesReady(DAT_00435d18))
                return 0;
            FUN_003dbe68(DAT_00435d18);
            work->stage = 2;
        case 2:
            if (!FUN_003dcc34(DAT_00435d18))
                return 0;
            work->stage = 3;
        }
        work->state = 9;
        return startBattleEventScript(work, context);
    case 9:
        return startBattleEventScript(work, context);
    case 10:
        return FUN_003c7760(work, context);
    default:
        return 0;
    }
}
