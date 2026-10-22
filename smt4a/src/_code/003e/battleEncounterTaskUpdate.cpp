/* NON_MATCHING: phase-load fallthrough merging, 64-bit mask scheduling, and switch/body placement differ from retail. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

struct EncounterTask {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 stage;
    /* 0x10 */ u32 timer;
};
struct EncounterTaskContext {
    /* 0x0000 */ u8 unk0000[0x1ec4];
    /* 0x1EC4 */ void *records;
    /* 0x1EC8 */ u8 unk1ec8[0xc];
    /* 0x1ED4 */ BattleRosterRecordA *roster;
    /* 0x1ED8 */ u8 unk1ed8;
    /* 0x1ED9 */ u8 markedCount;
    /* 0x1EDA */ u8 unk1eda[0x26c6];
    /* 0x45A0 */ u64 flags;
};
struct EncounterTaskGlobals {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u64 requiredFlags;
};

extern "C" {
extern BtlStep *g_btlEvent;
extern EncounterTaskGlobals g_btlEncount;
extern BtlMainA *g_btlCamera;
extern void *g_btlActionReflect;
extern void *g_btlAux;
s32 isEntryUsable(BtlStep *event);
s32 FUN_004d7a70(BtlStep *event, u32 kind, u32 value, u32 flags);
void FUN_002e5924(u32 state);
s32 FUN_0013def0(u32 index);
void FUN_0013cab8(u32 index, u32 first, u32 second);
void FUN_004d7fe4(BtlStep *event);
s32 FUN_003e11ac(EncounterTask *task, EncounterTaskContext *context);
s32 loadSlotIsLoaded(u32 slot);
void loadSlotRequestAsync(u32 slot, u32 flags);
s32 FUN_003e2470(EncounterTask *task, EncounterTaskContext *context);
void FUN_003f1334(EncounterTaskContext *context);
s32 loadSlotMainIsLoaded(EncounterTaskContext *context);
s32 FUN_003e1114(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003f0f2c(EncounterTaskContext *context);
s32 FUN_003e30b0(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e21a8(EncounterTask *task, EncounterTaskContext *context);
s32 aocLoaderUpdateRecords(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e0510(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e3188(EncounterTask *task, EncounterTaskContext *context);
s32 btlRosterGroupAllInactive(EncounterTaskContext *context, u32 enabled);
void FUN_003ed238(EncounterTaskContext *context, u32 flags);
s32 FUN_003e025c(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_004f2294(BtlMainA *camera);
void btlCameraObjectCreate(BtlMainA *camera);
s32 FUN_003e1068(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003ece50(EncounterTaskContext *context);
void FUN_003eaa9c(EncounterTaskContext *context);
s32 FUN_003e1454(EncounterTask *task, EncounterTaskContext *context);
s32 contentRequestStart(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e21c8(EncounterTask *task, EncounterTaskContext *context);
u32 FUN_003e0f94(EncounterTask *task);
s32 FUN_003e1b80(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e26f0(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e1a30(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e2a88(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e2504(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e16cc(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e0cd4(EncounterTask *task, EncounterTaskContext *context);
s32 FUN_003e0bb8(EncounterTask *task, EncounterTaskContext *context);
s32 chainCountIdUnflagged(void *reflect, EncounterTask *task);
s32 recordAreAllCountsNonpositive(void *auxiliary);
s32 eventCommandRangeCheck(BtlMainA *camera);
void stateFinishIfPresent(EncounterTaskContext *context);
void eventCommandClearPending(BtlMainA *camera);
}

/* Dispatch encounter phases and finish only after all action and command work drains. */
extern "C" s32 battleEncounterTaskUpdate(EncounterTask *task, EncounterTaskContext *context)
{
    switch (task->state) {
    case 0:
        if (isEntryUsable(g_btlEvent))
            return 0;
        if (FUN_004d7a70(g_btlEvent, 9, -1u, 0)) {
            if (!(context->flags & g_btlEncount.requiredFlags)) {
                FUN_002e5924(2);
                context->flags |= g_btlEncount.requiredFlags;
                if (FUN_0013def0(1) == 3)
                    FUN_0013cab8(1, 10, 0xff);
            }
            FUN_004d7fe4(g_btlEvent);
        }
        task->timer = 0;
        task->stage = 0;
        task->state = 1;
        return FUN_003e11ac(task, context);
    case 1:
        return FUN_003e11ac(task, context);
    case 2:
        if (!loadSlotIsLoaded(0x4e))
            loadSlotRequestAsync(0x4e, 0);
        task->timer = 0;
        task->stage = 0;
        task->state = 3;
        return FUN_003e2470(task, context);
    case 3:
        return FUN_003e2470(task, context);
    case 4:
        FUN_003f1334(context);
        task->state = 5;
        task->timer = 0;
        task->stage = 0;
    case 5:
        if (!loadSlotMainIsLoaded(context))
            return 0;
        task->timer = 0;
        task->state = 6;
        task->stage = 0;
        return FUN_003e1114(task, context);
    case 6:
        return FUN_003e1114(task, context);
    case 7:
        if (!FUN_003f0f2c(context))
            return 0;
        task->timer = 0;
        task->state = 8;
        task->stage = 0;
        return FUN_003e30b0(task, context);
    case 8:
        return FUN_003e30b0(task, context);
    case 9:
        if (context->records == NULL)
            return 0;
        task->timer = 0;
        task->state = 10;
        task->stage = 0;
        return FUN_003e21a8(task, context);
    case 10:
        return FUN_003e21a8(task, context);
    case 11:
        return aocLoaderUpdateRecords(task, context);
    case 12:
        return FUN_003e0510(task, context);
    case 13:
        return FUN_003e025c(task, context);
    case 14:
        if (!FUN_004f2294(g_btlCamera))
            return 0;
        btlCameraObjectCreate(g_btlCamera);
        task->state = 15;
        task->timer = 0;
        task->stage = 0;
        return FUN_003e1068(task, context);
    case 15:
        return FUN_003e1068(task, context);
    case 16:
        if (!FUN_003ece50(context))
            return 0;
        FUN_003eaa9c(context);
        task->timer = 0;
        task->stage = 0;
        task->state = 20;
        return FUN_003e1454(task, context);
    case 17:
        return FUN_003e3188(task, context);
    case 18:
        if (!btlRosterGroupAllInactive(context, 1))
            return 0;
        FUN_003ed238(context, 0x400);
        for (s32 index = 4; index < 54; ++index) {
            u32 flags = context->roster[index].render.flags;
            if ((flags & 1) && (flags & 0x80) && (flags & 0x400))
                ++context->markedCount;
        }
        task->timer = 0;
        task->state = 13;
        task->stage = 0;
        return FUN_003e025c(task, context);
    case 19:
        task->timer = 0;
        task->state = 20;
        task->stage = 0;
        return FUN_003e1454(task, context);
    case 20:
        return FUN_003e1454(task, context);
    case 21:
        return contentRequestStart(task, context);
    case 22:
        return FUN_003e21c8(task, context);
    case 23:
        return FUN_003e0bb8(task, context);
    case 24:
        switch (FUN_003e0f94(task)) {
        case 1: return FUN_003e26f0(task, context);
        case 2: return FUN_003e1b80(task, context);
        case 3: return FUN_003e1a30(task, context);
        case 4: return FUN_003e2a88(task, context);
        case 5: return FUN_003e2504(task, context);
        default: return FUN_003e16cc(task, context);
        }
    case 25:
        return FUN_003e0cd4(task, context);
    case 26:
        if (chainCountIdUnflagged(g_btlActionReflect, task) > 0 ||
            !recordAreAllCountsNonpositive(g_btlAux) || !eventCommandRangeCheck(g_btlCamera))
            return 0;
        if (g_btlCamera->flags & 0x80000)
            return 0;
        stateFinishIfPresent(context);
        g_btlCamera->flags &= ~0x4000u;
        eventCommandClearPending(g_btlCamera);
        return -1;
    default:
        return 0;
    }
}
