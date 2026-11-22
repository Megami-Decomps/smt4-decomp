#include "code/Code002c.h"
#include "battle/BattleEncounter.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match2_ScrollList.h"
#include "battle/BtlGlobals.h"
#include "code/Code0013.h"

extern "C" {

void memClear(void *output, u32 bytes);
const char *btlPosArrangeGetFilePath(BtlMainState *context);
char *libc_strcpy(char *output, const char *input);
void asdMemFree(void *allocation);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
s32 fileExistsPatchOrRom(BtlMainState *context, const char *path);
u32 FUN_0023fffc(BattleEncounterQuery *query, BtlMainState *context);
u32 battleEncounterStepShowAmbushMarkers(BattleEncounterQuery *query, BtlMainState *context);
void frameTexApplyMode(s32 mode);
void FUN_00338458(BtlMainState *context);
void btlHistoryStoreActionValues(BtlMainState *context);
void FUN_00338424(BtlMainState *context);
void battleSaveCameraVectors(BtlMainState *context);
void vec3CopyFromOffsetC(void *main);
s32 pairedEntryTableContains(BtlMainState *context, u16 id);
void btlQueueKeyedScalarReflectAction(s32, s32, s32, s32, s32, s32, s32);
void battleInitializeTurnOrder(BtlMainState *context);
void btlSetSelectedListedValue(s32 value);
void screenFadeStartIn(u32 channel, u32 frames, u32 volume);

/* Enters step 11: starts loading the arrangement file for the encounter, then runs step 12
 * (battleEncounterTaskUpdate's case 11 does the same load). */
static __inline u32 battleEncounterLoadArrangement(BattleEncounterQuery *query, BtlMainState *context)
{
    char path[128];

    query->step = 0xb;
    memClear(path, sizeof(path));
    libc_strcpy(path, btlPosArrangeGetFilePath(context));
    if (query->arrangement != NULL) {
        asdMemFree(query->arrangement);
        query->arrangement = NULL;
    }
    asdLoadFileAsyncSimple(path, &query->arrangement, 0);
    query->step = 0xc;
    return FUN_0023fffc(query, context);
}

/* Encounter setup state: starts the arrangement load once the path is accepted, else runs the per-frame scan. */
u32 battleEncounterStepSetup(BattleEncounterQuery *query, BtlMainState *context)
{
    char path[128];

    memClear(path, sizeof(path));
    libc_strcpy(path, btlPosArrangeGetFilePath(context));
    if (fileExistsPatchOrRom(context, path) != 0) {
        return battleEncounterLoadArrangement(query, context);
    } else {
        query->step = 0xd;
        if (!(context->battleMask & 0x40000000)) {
            frameTexApplyMode(2);
            context->battleMask |= 0x40000000;
        }
        FUN_00338458(context);
        btlHistoryStoreActionValues(context);
        FUN_00338424(context);
        battleSaveCameraVectors(context);
        vec3CopyFromOffsetC(g_btlMain);
        if (context->encounterControl.blocked == 0 && ((context->encounter.flags & 0x2000000) || (context->battleFlags & 2))) {
            s32 i;

            for (i = 4; i < BATTLE_ENCOUNTER_RECORD_COUNT; i++) {
                BtlActionRecord *record = &context->actions[i];

                if ((record->status & 1) && (record->status & 2) && (record->flags & 8)) {
                    record->flags &= ~8;
                    if (!(record->presentationFlags & 0x800)) {
                        u16 *entry = (u16 *)reinterpret_cast<void *>(btlFindEntryBlockByMemberId(context, record->memberId));

                        if (!pairedEntryTableContains(context, entry[1])) {
                            record->presentationFlags |= 0x800;
                        }
                    }
                }
            }
            btlQueueKeyedScalarReflectAction(0, 0, 0x100017b, 0, 0, 0, 0);
            battleInitializeTurnOrder(context);
            context->battleFlags |= 0x200000;
            if (!(context->encounter.flagsE4 & 0x20)) {
                btlSetSelectedListedValue(3);
            }
        }
        if (pairedAvailabilityGetState(0) == 3) {
            screenFadeStartIn(0, 10, 0xff);
        }
        if (pairedAvailabilityGetState(1) == 3) {
            screenFadeStartIn(1, 10, 0xff);
        }
        if (screenFadesAllReady() == 0) {
            return 0;
        }
        query->step = 0xe;
        query->pending = 0;
        return battleEncounterStepShowAmbushMarkers(query, context);
    }
}

} /* extern "C" */
