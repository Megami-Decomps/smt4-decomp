/* NON_MATCHING: retail copies query into r4 (mov r4, r9) around the arrangement load and uses r1 for the flags |= update; otherwise identical */
#include "battle/BattleEncounter.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match2_ScrollList.h"

extern "C" {

extern void *g_btlMain; /* 0x4342c8 */

void memClear(void *output, u32 bytes);
const char *btlPosArrangeGetFilePath(BtlMainState *context);
char *libc_strcpy(char *output, const char *input);
void asdMemFree(void *allocation);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
s32 FUN_002402c4(BtlMainState *context, const char *path);
void FUN_0023fffc(BattleEncounterQuery *query, BtlMainState *context);
void FUN_0023fbdc(BattleEncounterQuery *query, BtlMainState *context);
void frameTexApplyMode(s32 mode);
void FUN_00338458(BtlMainState *context);
void FUN_0033a144(BtlMainState *context);
void FUN_00338424(BtlMainState *context);
void battleSaveCameraVectors(BtlMainState *context);
void vec3CopyFromOffsetC(void *main);
void *FUN_0027da30(BtlMainState *context, s32 id);
s32 pairedEntryTableContains(BtlMainState *context, u16 id);
void FUN_002505c0(s32, s32, s32, s32, s32, s32, s32);
void FUN_00254f58(BtlMainState *context);
void btlSetSelectedListedValue(s32 value);
s32 FUN_002c2a04(u32 channel);
void FUN_002c29d8(u32 channel, u32 frames, u32 volume);

/* Starts loading the arrangement file for the encounter. */
static __inline void battleEncounterLoadArrangement(BattleEncounterQuery *query, BtlMainState *context)
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
void FUN_0023f500(BattleEncounterQuery *query, BtlMainState *context)
{
    char path[128];

    memClear(path, sizeof(path));
    libc_strcpy(path, btlPosArrangeGetFilePath(context));
    if (FUN_002402c4(context, path) != 0) {
        query->step = 0xb;
        battleEncounterLoadArrangement(query, context);
    } else {
        query->step = 0xd;
        if (!(context->battleFlags & 0x40000000)) {
            frameTexApplyMode(2);
            context->battleFlags |= 0x40000000;
        }
        FUN_00338458(context);
        FUN_0033a144(context);
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
                        u16 *entry = (u16 *)FUN_0027da30(context, record->memberId);

                        if (!pairedEntryTableContains(context, entry[1])) {
                            record->presentationFlags |= 0x800;
                        }
                    }
                }
            }
            FUN_002505c0(0, 0, 0x100017b, 0, 0, 0, 0);
            FUN_00254f58(context);
            context->battleFlags |= 0x200000;
            if (!(context->encounter.flagsE4 & 0x20)) {
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
