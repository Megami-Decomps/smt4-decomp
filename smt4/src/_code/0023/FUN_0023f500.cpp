/* NON_MATCHING: retail copies query into r4 (mov r4, r9) around the arrangement load and uses r1 for the flags |= update; otherwise identical */
#include "battle/BattleEncounter.h"

extern "C" {

extern void *g_btlMain; /* 0x4342c8 */

void memClear(void *output, u32 bytes);
const char *btlPosArrangeGetFilePath(BattleEncounterContext *context);
char *libc_strcpy(char *output, const char *input);
void asdMemFree(void *allocation);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
s32 FUN_002402c4(BattleEncounterContext *context, const char *path);
void FUN_0023fffc(BattleEncounterQuery *query, BattleEncounterContext *context);
void FUN_0023fbdc(BattleEncounterQuery *query, BattleEncounterContext *context);
void frameTexApplyMode(s32 mode);
void FUN_00338458(BattleEncounterContext *context);
void FUN_0033a144(BattleEncounterContext *context);
void FUN_00338424(BattleEncounterContext *context);
void FUN_00339de0(BattleEncounterContext *context);
void vec3CopyFromOffsetC(void *main);
void *FUN_0027da30(BattleEncounterContext *context, s32 id);
s32 pairedEntryTableContains(BattleEncounterContext *context, u16 id);
void FUN_002505c0(s32, s32, s32, s32, s32, s32, s32);
void FUN_00254f58(BattleEncounterContext *context);
void btlSetSelectedListedValue(s32 value);
s32 FUN_002c2a04(u32 channel);
void FUN_002c29d8(u32 channel, u32 frames, u32 volume);
s32 FUN_002896bc(void);

/* Starts loading the arrangement file for the encounter. */
static __inline void battleEncounterLoadArrangement(BattleEncounterQuery *query, BattleEncounterContext *context)
{
    char path[128];

    memClear(path, sizeof(path));
    libc_strcpy(path, btlPosArrangeGetFilePath(context));
    if (query->arrangement != NULL) {
        asdMemFree(query->arrangement);
        query->arrangement = NULL;
    }
    asdLoadFileAsyncSimple(path, &query->arrangement, 0);
    query->step = 0xc;
    FUN_0023fffc(query, context);
}

/* Encounter setup state: starts the arrangement load once the path is accepted, else runs the per-frame scan. */
void FUN_0023f500(BattleEncounterQuery *query, BattleEncounterContext *context)
{
    char path[128];

    memClear(path, sizeof(path));
    libc_strcpy(path, btlPosArrangeGetFilePath(context));
    if (FUN_002402c4(context, path) != 0) {
        query->step = 0xb;
        battleEncounterLoadArrangement(query, context);
    } else {
        query->step = 0xd;
        if (!(context->flags & 0x40000000)) {
            frameTexApplyMode(2);
            context->flags |= 0x40000000;
        }
        FUN_00338458(context);
        FUN_0033a144(context);
        FUN_00338424(context);
        FUN_00339de0(context);
        vec3CopyFromOffsetC(g_btlMain);
        if (context->busy == 0 && ((context->flagsE0 & 0x2000000) || (context->flags & 2))) {
            s32 i;

            for (i = 4; i < BATTLE_ENCOUNTER_RECORD_COUNT; i++) {
                BattleEncounterRecord *record = &context->records[i];

                if ((record->flags & 1) && (record->flags & 2) && (record->stateFlags & 8)) {
                    record->stateFlags &= ~8;
                    if (!(record->loadFlags & 0x800)) {
                        u16 *entry = (u16 *)FUN_0027da30(context, record->entryId);

                        if (!pairedEntryTableContains(context, entry[1])) {
                            record->loadFlags |= 0x800;
                        }
                    }
                }
            }
            FUN_002505c0(0, 0, 0x100017b, 0, 0, 0, 0);
            FUN_00254f58(context);
            context->flags |= 0x200000;
            if (!(context->flagsE4 & 0x20)) {
                btlSetSelectedListedValue(3);
            }
        }
        if (FUN_002c2a04(0) == 3) {
            FUN_002c29d8(0, 10, 0xff);
        }
        if (FUN_002c2a04(1) == 3) {
            FUN_002c29d8(1, 10, 0xff);
        }
        if (FUN_002896bc() != 0) {
            query->step = 0xe;
            query->pending = 0;
            FUN_0023fbdc(query, context);
        }
    }
}

} /* extern "C" */
