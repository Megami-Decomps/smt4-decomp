/* NON_MATCHING: encounter-state dispatcher branch tails and state-field stores differ from retail. */
#include "common.h"

struct BattleEncounterQuery {
    u32 step; // 0x00
    void *arrangement; // 0x04
    u32 count; // 0x08
    u32 pending; // 0x0c
    u32 elapsed; // 0x10
};
struct BattleEncounterRecord {
    u8 unk00[0x50];
    u32 flags; // 0x50
    u8 unk54[0xc0];
};
struct BattleEncounterContext {
    u8 unk0000[0x1e88];
    void *arrangement; // 0x1e88
    u8 unk1e8c[0x0c];
    BattleEncounterRecord *records; // 0x1e98
    u8 unk1e9c;
    u8 activeCount; // 0x1e9d
    u8 unk1e9e[0x2602];
    u32 flags; // 0x44a0
};
struct BattleEncounterMain {
    u8 unk0000[0x634];
    u32 flags; // 0x634
};
extern "C" {
extern void *g_btlEvent;
extern void *g_btlActionReflect;
extern void *DAT_00435d18;
extern BattleEncounterMain *g_btlMain;
s32 FUN_0027e3b8(void *event);
s32 btlEventSelectTrigger(void *event, u32 kind, s32 index, u32 flags);
void frameTexApplyMode(u32 mode);
s32 FUN_002c2a04(u32 channel);
void FUN_002c29d8(u32 channel, u32 frames, u32 volume);
void FUN_0027e38c(void *event);
u32 FUN_00334140(BattleEncounterQuery *query, BattleEncounterContext *context);
u32 entryCollectNewIdentifiers(BattleEncounterQuery *query, BattleEncounterContext *context);
u32 aocLoaderUpdateRecords(BattleEncounterQuery *query, BattleEncounterContext *context);
u32 FUN_00334228(BattleEncounterQuery *query, BattleEncounterContext *context);
u32 FUN_002408ac(BattleEncounterQuery *query, BattleEncounterContext *context);
s32 FUN_0023fae0(BattleEncounterContext *context, s32 enabled);
void FUN_0023f79c(BattleEncounterContext *context, u32 flags);
u32 FUN_0023f500(BattleEncounterQuery *query, BattleEncounterContext *context);
void memClear(void *output, u32 bytes);
const char *btlPosArrangeGetFilePath(BattleEncounterContext *context);
char *libc_strcpy(char *output, const char *input);
void asdMemFree(void *allocation);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
u32 FUN_0023fffc(BattleEncounterQuery *query, BattleEncounterContext *context);
s32 FUN_002896bc();
u32 FUN_0023fbdc(BattleEncounterQuery *query, BattleEncounterContext *context);
u32 FUN_00240678(BattleEncounterQuery *query, BattleEncounterContext *context);
s32 nodeListCountActiveById(void *list, u32 id);
s32 recordAreAllCountsNonpositive(void *table);
s32 FUN_0022724c(BattleEncounterMain *main);
void FUN_0023f4e4(BattleEncounterContext *context);
void eventCommandDispatchPendingCleanup(BattleEncounterMain *main);
}

// Advance only this dispatcher's bounded state machine; larger per-state handlers remain separate units.
extern "C" u32 FUN_003349c0(BattleEncounterQuery *query, BattleEncounterContext *context)
{
    switch (query->step) {
    case 0:
        if (FUN_0027e3b8(g_btlEvent))
            return 0;
        if (btlEventSelectTrigger(g_btlEvent, 9, -1, 0)) {
            if (!(context->flags & 0x40000000)) {
                frameTexApplyMode(2);
                context->flags |= 0x40000000;
                if (FUN_002c2a04(1) == 3)
                    FUN_002c29d8(1, 10, 255);
            }
            FUN_0027e38c(g_btlEvent);
        }
        query->step = 1;
        // Fall through to the trigger's wait phase.
    case 1:
        if (FUN_0027e3b8(g_btlEvent))
            return 0;
        query->step = 2;
        return FUN_00334140(query, context);
    case 2:
        return FUN_00334140(query, context);
    case 3:
        if (!context->arrangement)
            return 0;
        query->step = 4;
        return entryCollectNewIdentifiers(query, context);
    case 4:
        return entryCollectNewIdentifiers(query, context);
    case 5:
        return aocLoaderUpdateRecords(query, context);
    case 6:
        return FUN_00334228(query, context);
    case 7:
        return FUN_002408ac(query, context);
    case 8:
        if (!FUN_0023fae0(context, 1))
            return 0;
        FUN_0023f79c(context, 0x400);
        for (s32 i = 4; i < 54; ++i) {
            u32 flags = context->records[i].flags;
            if ((flags & 1) && (flags & 0x80) && (flags & 0x400))
                ++context->activeCount;
        }
        query->step = 10;
        return FUN_0023f500(query, context);
    case 9:
        query->step = 10;
        return FUN_0023f500(query, context);
    case 10:
        return FUN_0023f500(query, context);
    case 11: {
        char path[128];
        memClear(path, sizeof(path));
        libc_strcpy(path, btlPosArrangeGetFilePath(context));
        if (query->arrangement) {
            asdMemFree(query->arrangement);
            query->arrangement = NULL;
        }
        asdLoadFileAsyncSimple(path, &query->arrangement, 0);
        query->step = 12;
        return FUN_0023fffc(query, context);
    }
    case 12:
        return FUN_0023fffc(query, context);
    case 13:
        if (FUN_002c2a04(0) == 3)
            FUN_002c29d8(0, 10, 255);
        if (FUN_002c2a04(1) == 3)
            FUN_002c29d8(1, 10, 255);
        if (!FUN_002896bc())
            return 0;
        query->pending = 0;
        query->step = 14;
        return FUN_0023fbdc(query, context);
    case 14:
        return FUN_0023fbdc(query, context);
    case 15:
        return FUN_00240678(query, context);
    case 16:
        ++query->elapsed;
        if (query->elapsed > 30 && nodeListCountActiveById(g_btlActionReflect, reinterpret_cast<u32>(query)) <= 0 &&
            recordAreAllCountsNonpositive(DAT_00435d18) && FUN_0022724c(g_btlMain) && !(g_btlMain->flags & 0x80000)) {
            FUN_0023f4e4(context);
            g_btlMain->flags &= ~0x4000u;
            eventCommandDispatchPendingCleanup(g_btlMain);
            return ~0u;
        }
        break;
    }
    return 0;
}
