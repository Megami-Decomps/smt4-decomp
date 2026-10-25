/* NON_MATCHING: Battle-event resource loading and pending-mask stages are complete; the prologue, inline bytecode-load cases, and branch joins differ. */
#include "gamedata/DataTable.h"
#include "shard/W5_W5Match7_BattleMask.h"

struct BattleEventLoadStep {
    /* 0x00 */ s32 state;
    /* 0x04 */ u32 flags;
    /* 0x08 */ void *tableFile;
    /* 0x0C */ void *messageFile;
    /* 0x10 */ void *scriptFile;
    /* 0x14 */ void *scriptProcess;
    /* 0x18 */ void *entries;
    /* 0x1C */ u32 count;
    /* 0x20 */ s32 entry;
    /* 0x24 */ s32 type;
    /* 0x28 */ u32 ticks;
};
struct BattleEventLoadIdentity {
    /* 0x000 */ u8 unk000[0xf0];
    /* 0x0F0 */ u32 aocId;
    /* 0x0F4 */ u8 unk0f4[0x3c];
    /* 0x130 */ char name[1];
};
struct BattleEventPendingMask {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u64 mask;
};
extern "C" {
extern void *g_aocSystem;
extern BattleEventPendingMask g_btlEvent;
extern const char DAT_005285b8[];
extern const char DAT_00528588[];
void sysMemClear(void *data, u32 size);
void textFormatBuffer(char *destination, const char *format, ...);
u32 FUN_0046c4b4(void *system, u32 aocId);
void aocQueueType1e(void *system, u32 aocId, void **file, const char *path);
void aocQueueType1f(void *system, u32 aocId, void **file, const char *path);
void asdLoadFileAsyncSimple(const char *path, void **file, u32 flags);
void *dataTableFileGetTable(void *file, s32 index);
u32 FUN_004d83b4(BattleEventLoadStep *step, BattleMaskState *battle);
u32 FUN_004d7e20(BattleEventLoadStep *step, BattleMaskState *battle);
u32 FUN_004d7ec0(BattleEventLoadStep *step, BattleMaskState *battle);
u32 btlActionStepFinishPendingChanges(BattleEventLoadStep *step, BattleMaskState *battle);
void scrScriptProcessStartEntry(void *process, s32 entry);
void sysPlaySe(u32 sound);
}

static inline void battleEventReadProTable(BattleEventLoadStep *step)
{
    void *table = dataTableFileGetTable(step->tableFile, 0);
    step->entries = dataTableGetEntries(table);
    step->count = dataTableGetCount(table);
    step->state = 3;
}

static inline u32 battleEventLoadBytecode(BattleEventLoadStep *step, BattleMaskState *battle)
{
    const BattleEventLoadIdentity *identity = reinterpret_cast<const BattleEventLoadIdentity *>(battle);
    char path[128];
    sysMemClear(path, sizeof(path));
    textFormatBuffer(path, DAT_00528588, identity->name, identity->name);
    if (FUN_0046c4b4(g_aocSystem, identity->aocId)) {
        aocQueueType1f(g_aocSystem, identity->aocId, &step->scriptFile, path);
    } else {
        asdLoadFileAsyncSimple(path, &step->scriptFile, 0);
    }
    step->state = 6;
    if (step->scriptFile != NULL) {
        step->state = 7;
        return FUN_004d7e20(step, battle);
    }
    return 0;
}

/* Load the event's table and bytecode, then advance its script and pending-change stages. */
extern "C" u32 FUN_004d800c(BattleEventLoadStep *step, BattleMaskState *battle)
{
    switch (step->state) {
    case 1: {
        const BattleEventLoadIdentity *identity = reinterpret_cast<const BattleEventLoadIdentity *>(battle);
        char path[128];
        sysMemClear(path, sizeof(path));
        textFormatBuffer(path, DAT_005285b8, identity->name, identity->name);
        if (FUN_0046c4b4(g_aocSystem, identity->aocId)) {
            aocQueueType1e(g_aocSystem, identity->aocId, &step->tableFile, path);
        } else {
            asdLoadFileAsyncSimple(path, &step->tableFile, 0);
        }
        step->state = 2;
        u32 result = 0;
        if (step->tableFile != NULL) {
            battleEventReadProTable(step);
            result = FUN_004d83b4(step, battle);
        }
        return result;
    }
    case 2:
        if (step->tableFile == NULL) return 0;
        battleEventReadProTable(step);
        return FUN_004d83b4(step, battle);
    case 3:
        return FUN_004d83b4(step, battle);
    case 4:
        if (step->messageFile == NULL) return 0;
        step->state = 5;
        return battleEventLoadBytecode(step, battle);
    case 5:
        return battleEventLoadBytecode(step, battle);
    case 6:
        if (step->scriptFile == NULL) return 0;
        step->state = 7;
        return FUN_004d7e20(step, battle);
    case 7:
        return FUN_004d7e20(step, battle);
    case 8:
        return FUN_004d7ec0(step, battle);
    case 9:
        if (step->entry < 0) return 0;
        scrScriptProcessStartEntry(step->scriptProcess, step->entry);
        step->state = 10;
        step->ticks = 0;
        if (battle->mask & g_btlEvent.mask) sysPlaySe(223);
        if (step->type == 5) {
            battle->mask |= g_btlEvent.mask;
            sysPlaySe(223);
        }
        return btlActionStepFinishPendingChanges(step, battle);
    case 10:
        return btlActionStepFinishPendingChanges(step, battle);
    default:
        return 0;
    }
}
