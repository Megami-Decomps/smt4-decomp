#include "common.h"
#include "battle/BattleEncounter.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"
#include "code/Code0013.h"
#include "code/Code0023.h"

extern "C" {
extern void *g_btlEvent;
extern void *g_btlActionReflect;
extern void *g_btlAux;
s32 isEntryUsable(void *event); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "void *" is incompatible with parameter of type "int *")
s32 btlEventSelectTrigger(void *event, u32 kind, s32 index, u32 flags);
void frameTexApplyMode(u32 mode);
void screenFadeStartIn(u32 channel, u32 frames, u32 volume); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_0027e38c(void *event);
u32 FUN_00334140(BattleEncounterQuery *query, BtlMainState *battle);
u32 entryCollectNewIdentifiers(BattleEncounterQuery *query, BtlMainState *battle);
u32 aocLoaderUpdateRecords(BattleEncounterQuery *query, BtlMainState *battle);
u32 FUN_00334228(BattleEncounterQuery *query, BtlMainState *battle);
u32 FUN_002408ac(BattleEncounterQuery *query, BtlMainState *battle);
void FUN_0023f79c(BtlMainState *battle, u32 flags);
u32 battleEncounterStepSetup(BattleEncounterQuery *query, BtlMainState *battle);
void memClear(void *output, u32 bytes); // declcheck: local (the shared declaration does not compile here or changes this unit)
const char *btlPosArrangeGetFilePath(BtlMainState *battle);
char *libc_strcpy(char *output, const char *input); // declcheck: local (the shared declaration does not compile here or changes this unit)
void asdMemFree(void *allocation); // declcheck: local (the shared declaration does not compile here or changes this unit)
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 FUN_0023fffc(BattleEncounterQuery *query, BtlMainState *battle);
s32 screenFadesAllReady(); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 FUN_0023fbdc(BattleEncounterQuery *query, BtlMainState *battle);
u32 FUN_00240678(BattleEncounterQuery *query, BtlMainState *battle);
s32 nodeListCountActiveById(void *list, u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 recordAreAllCountsNonpositive(void *table);
s32 FUN_0022724c(BtlCamera *camera); // declcheck: local (retail passes the camera in r0 and tests the result; the shared prototype is void (void))
void FUN_0023f4e4(BtlMainState *battle);
void eventCommandDispatchPendingCleanup(BtlCamera *camera);
}

/* Step 1: waits for the encounter event, then looks for the special entry's arrangement. */
static __inline u32 encounterWaitEvent(BattleEncounterQuery *query, BtlMainState *battle)
{
    if (!isEntryUsable(g_btlEvent)) {
        query->step = 2;
        return FUN_00334140(query, battle);
    }
    return 0;
}

/* Step 3: waits for the arrangement file, then collects its entries. Its own function: retail keeps the
 * arguments in r0/r1 for the tail call and tests the file through r2. */
static __inline u32 encounterWaitArrangementFile(BattleEncounterQuery *query, BtlMainState *battle)
{
    if (battle->arrangement.file == NULL)
        return 0;
    query->step = 4;
    return entryCollectNewIdentifiers(query, battle);
}

/* Step 9: moves to step 10 and runs it (loads the arrangement); FUN_002408ac enters step 10 the same way. */
static __inline u32 encounterStartArrangement(BattleEncounterQuery *query, BtlMainState *battle)
{
    query->step = 10;
    return battleEncounterStepSetup(query, battle);
}

/* Step 16: after 30 frames, finishes once the reflect actions, the aux records and the camera's commands
 * have drained. Its own function: retail gives this step its own `return 0` epilogue. */
static __inline u32 encounterWaitDrain(BattleEncounterQuery *query, BtlMainState *battle)
{
    if (++query->elapsed <= 30)
        return 0;
    if (nodeListCountActiveById(g_btlActionReflect, (u32)query) > 0)
        return 0;
    if (!recordAreAllCountsNonpositive(g_btlAux))
        return 0;
    if (!FUN_0022724c(g_btlMain))
        return 0;
    if (g_btlMain->flags & BTL_FLAG_NO_ENCOUNT)
        return 0;
    FUN_0023f4e4(battle);
    g_btlMain->flags &= ~0x4000u;
    eventCommandDispatchPendingCleanup(g_btlMain);
    return ~0u;
}

/* Runs the encounter setup's current step; each step enters the next one when it is done. Returns -1 when
 * the setup has finished. */
extern "C" u32 battleEncounterTaskUpdate(BattleEncounterQuery *query, BtlMainState *battle)
{
    switch (query->step) {
    case 0:
        if (isEntryUsable(g_btlEvent))
            return 0;
        if (btlEventSelectTrigger(g_btlEvent, 9, -1, 0)) {
            if (!(battle->battleMask & 0x40000000)) {
                frameTexApplyMode(2);
                battle->battleMask |= 0x40000000;
                if (pairedAvailabilityGetState(1) == 3)
                    screenFadeStartIn(1, 10, 255);
            }
            FUN_0027e38c(g_btlEvent);
        }
        query->step = 1;
        return encounterWaitEvent(query, battle);
    case 1:
        return encounterWaitEvent(query, battle);
    case 2:
        return FUN_00334140(query, battle);
    case 3:
        return encounterWaitArrangementFile(query, battle);
    case 4:
        return entryCollectNewIdentifiers(query, battle);
    case 5:
        return aocLoaderUpdateRecords(query, battle);
    case 6:
        return FUN_00334228(query, battle);
    case 7:
        return FUN_002408ac(query, battle);
    case 8:
        if (!FUN_0023fae0(battle, 1))
            return 0;
        FUN_0023f79c(battle, 0x400);
        for (s32 i = 4; i < BATTLE_ENCOUNTER_RECORD_COUNT; i++) {
            BtlActionRecord *record = &battle->actions[i];
            u32 status = record->status;
            if ((status & 1) && (status & 0x80) && (status & 0x400))
                battle->completedCount++;
        }
        return encounterStartArrangement(query, battle);
    case 9:
        return encounterStartArrangement(query, battle);
    case 10:
        return battleEncounterStepSetup(query, battle);
    case 11: {
        char path[128];

        memClear(path, sizeof(path));
        libc_strcpy(path, btlPosArrangeGetFilePath(battle));
        if (query->arrangement != NULL) {
            asdMemFree(query->arrangement);
            query->arrangement = NULL;
        }
        asdLoadFileAsyncSimple(path, &query->arrangement, 0);
        query->step = 12;
        return FUN_0023fffc(query, battle);
    }
    case 12:
        return FUN_0023fffc(query, battle);
    case 13:
        if (pairedAvailabilityGetState(0) == 3)
            screenFadeStartIn(0, 10, 255);
        if (pairedAvailabilityGetState(1) == 3)
            screenFadeStartIn(1, 10, 255);
        if (!screenFadesAllReady())
            return 0;
        query->pending = 0;
        query->step = 14;
        return FUN_0023fbdc(query, battle);
    case 14:
        return FUN_0023fbdc(query, battle);
    case 15:
        return FUN_00240678(query, battle);
    case 16:
        return encounterWaitDrain(query, battle);
    }
    return 0;
}
