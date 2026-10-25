/* NON_MATCHING: shared phase helpers outline differently, state-null checks merge, and round-reset/effect aggregate scheduling differs from retail. */
#include "battle/BattleUnitSlot.h"
#include <stddef.h>

struct BattleTaskActor {
    u8 unk00[0x50];
    u32 flags;
    u8 unk54[0xc0];
};
struct BattleTaskReserve {
    u32 flags, unk04;
    s16 actor;
    u8 unk0a[0xc4];
    s16 opening;
    u8 unk0d0[0xe6];
    s16 hp;
    u8 unk1b8[0xd0];
};
struct BattleTaskResetRecord {
    u16 first, second, value, unk06;
    u32 parent, value0c, value10, value14;
};
struct BattleTaskSlot { u32 value; s32 id; };
struct BattleTaskAction {
    s32 first, second;
    u8 unk08[0x10];
    s32 last;
};
struct BattleTaskParameters {
    u32 values[6], unk18;
    union {
        u32 flags;
        struct { u8 unk00[3]; s8 count; } counts;
    } mode;
    s8 count;
    u8 unk21[0xe];
    u8 completion;
    f32 scaleX, scaleY;
    u8 unk38[0x3c];
};
struct BattleTaskScript { u8 unk00[0x108]; u32 active; };
struct BattleTaskContext {
    /* 0x0000 */ u32 mainJob, endJob, unk0008, jobs[4];
    /* 0x001C */ u8 unk001c[0x10];
    /* 0x002C */ u32 resultJob;
    /* 0x0030 */ u8 unk0030[0x28];
    /* 0x0058 */ u32 waitJob, eventJob, unk0060;
    /* 0x0064 */ u32 state;
    /* 0x0068 */ s32 nextState;
    /* 0x006C */ u32 unk006c;
    /* 0x0070 */ s32 timer;
    /* 0x0074 */ u32 frames, phase, options;
    /* 0x0080 */ u32 unk0080, activeJob, result;
    /* 0x008C */ u8 unk008c[0x34];
    /* 0x00C0 */ s32 resume;
    /* 0x00C4 */ u32 unk00c4;
    /* 0x00C8 */ BattleTaskParameters parameters;
    /* 0x013C */ u8 unk013c[0x10];
    /* 0x014C */ u8 special;
    /* 0x014D */ u8 unk014d[0xf27];
    /* 0x1074 */ u8 scratch[0xe10];
    /* 0x1E84 */ u32 unk1e84;
    /* 0x1E88 */ void *allocation;
    /* 0x1E8C */ u32 list[3];
    /* 0x1E98 */ BattleTaskActor *actors;
    /* 0x1E9C */ u8 unk1e9c, pending;
    /* 0x1E9E */ u8 unk1e9e[0x11e];
    /* 0x1FBC */ BattleTaskResetRecord *records;
    /* 0x1FC0 */ BattleTaskReserve *reserves;
    /* 0x1FC4 */ u8 unk1fc4[0x20];
    /* 0x1FE4 */ BattleTaskSlot slots[42];
    /* 0x2134 */ void *resources[42];
    /* 0x21DC */ u8 smallScratch[0x54];
    /* 0x2230 */ u8 unk2230[0x1c];
    /* 0x224C */ void *openingData;
    /* 0x2250 */ void *ready;
    /* 0x2254 */ BattleTaskScript *openingScript;
    /* 0x2258 */ u8 unk2258[0xc0];
    /* 0x2318 */ BattleTaskAction actions[109];
    /* 0x2F04 */ u8 unk2f04[0x159c];
    /* 0x44A0 */ u32 flags, flags2, flags3;
    /* 0x44AC */ u8 unk44ac[0x4cc];
    /* 0x4978 */ s32 resultMode;
    /* 0x497C */ u8 unk497c[0x80];
    /* 0x49FC */ u16 initFlags;
    /* 0x49FE */ u8 unk49fe[0x46];
    /* 0x4A44 */ void *exitScriptData;
    /* 0x4A48 */ BattleTaskScript *exitScript;
    /* 0x4A4C */ u32 exitStage;
};
struct BattleTaskGlobals {
    BattleTaskContext *work;
    void *savedSlots, *savedData;
};
struct BattleTaskGate {
    u8 unk00[0x80];
    u32 state;
    s32 first, second;
};
struct BattleTaskOpening { s16 id; u8 unk02[0xa]; };
struct BattleTaskEffect {
    s32 hp, target, slot;
    u32 flags;
    s32 delay, delay2;
    u32 kind, enabled, options;
};
struct BattleTaskUnitModel { u8 unk00[0xc0]; u32 state; };
struct BattleTaskUnitStats { u8 unk00[0x14c]; u16 first, second; };
struct BattleTaskUnit {
    u32 flags;
    u8 mode;
    u8 unk05[0x1b];
    BattleTaskUnitModel *model;
    u32 unk24;
    BattleTaskUnitStats *stats;
    u8 unk2c[0xeec];
    u32 pending;
};
struct BattleTaskGameState { u8 unk00[0x2fc]; s32 area; };
struct BattleTaskAocMain { u8 unk00[0xa8]; u32 controller; };
typedef char BattleTaskActorSizeCheck[sizeof(BattleTaskActor) == 0x114 ? 1 : -1];
typedef char BattleTaskReserveSizeCheck[sizeof(BattleTaskReserve) == 0x288 ? 1 : -1];
typedef char BattleTaskParametersSizeCheck[sizeof(BattleTaskParameters) == 0x74 ? 1 : -1];
typedef char BattleTaskContextSizeCheck[sizeof(BattleTaskContext) == 0x4a50 ? 1 : -1];
typedef char BattleTaskContextFlagsOffsetCheck[offsetof(BattleTaskContext, flags) == 0x44a0 ? 1 : -1];

extern "C" {
extern BattleTaskGlobals g_btlMainState;
extern void *g_btlUiBlock, *g_btlActionReflect, *g_btlEvent, *g_btlScriptUnit, *g_btlAiScript;
extern void *DAT_00435d18, *g_btlMain;
extern BattleTaskGate *DAT_004398d4;
extern BattleTaskGameState g_gameState;
extern BattleTaskAocMain *g_aocMain;
s32 jobIsValid(u32 job);
s32 spriteTablesLoadedEnough(void *ui);
s32 jyoucyuEnsureResidentEntry();
void FUN_0027e760(BattleTaskGate *gate);
s32 btlEncountCheck(BattleTaskContext *work);
s32 btlFindNthActiveSpecialEntry(BattleTaskContext *work, u32 kind);
void *dataTableFileGetTable(void *file, u32 table);
BattleTaskOpening *dataTableGetEntries(void *table);
s32 dataTableGetCount(void *table);
s32 nodeListCountActiveById(void *list, u32 id);
void FUN_0027e5e4(BattleTaskActor *actor);
void scrScriptProcessStartEntry(BattleTaskScript *script, u32 entry);
void buttonHelpSetPreset(u32 preset);
s32 scrRunOpcodesStub(BattleTaskScript *script);
s32 btlEventSelectTrigger(void *event, u32 kind, u32 value, u32 flags);
s32 gameFlagIsSet(u32 id);
s32 flagBitIsSet(u32 id);
s32 FUN_0027e3b8(void *event);
void FUN_0027e38c(void *event);
s32 FUN_003aea5c(void *ui);
s32 btlSceneIsReady(void *ui);
s32 poolFieldClearIfAccepted(void *ui);
s32 battleUiIsFadeAndFieldReady(void *ui);
s32 btlUiIsWidgetOutsideClosingState(void *ui);
s32 btlUiIsIdle(void *ui);
void FUN_0027df30(u32 first, u32 second, BattleTaskActor *actor, u32 flags, BattleTaskEffect effect);
void btlAiScriptIsFinished(void *script);
s32 FUN_0027de98(BattleTaskContext *work);
s32 btlUiIsIdleForCommand(void *ui);
void btlUiRecountParty(void *ui);
void FUN_003ae3cc(void *ui);
void asdMemFree(void *allocation);
void memClear(void *memory, u32 size);
void wordTripleClear(u32 *values);
void FUN_00294f64(void *resource);
void listBoxClearSelectionAndReset(void *event);
void modelManagerReleaseSlots(void *event);
void modelSetResetSlots(void *event);
void btlEventResetSlots(void *event);
void mathVectorClear(void *main);
void transformClearVectors(void *main);
s32 dialogIsActive();
void infoWinStartTimer(u32 state);
void FUN_0027dc24(BattleTaskContext *work, BattleTaskParameters *parameters, u32 flags);
void FUN_00338cfc(BattleTaskContext *work, u32 enabled);
void FUN_0027dbc8(u32 kind, u32 enabled);
void jobStopIfValidC(BattleTaskContext *work);
s32 sys43e188GetState();
s32 FUN_002d1ce0();
BattleTaskScript *FUN_00297060(void *data, u32 flags);
s32 FUN_002896bc();
void frameTexResetFlags();
void soundChannelStopAll(u32 channels);
void *gameGetSlotTable();
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void *rt_memcpy(void *destination, const void *source, u32 size);
void *FUN_00282be4();
void FUN_00338790(BattleTaskContext *work);
void sequenceRequestClearDeferred();
void FUN_00208be8();
s32 sequenceRequestIsDeferred();
void sequenceRequestFlushDeferred();
void FUN_0027db24(u32 result);
void FUN_002faf88();
void asdSequenceRequestInitial();
s32 FUN_0039440c(void *controller);
void FUN_00394508(void *controller);
s32 gameStateIsFlagSetAndLarge();
void asdSequenceRequest(u32 sequence, const void *parameters, u32 size);
s32 FUN_00287800();
s32 FUN_00287304();
s32 tmnlHasSelection();
void tmnlResetSelection();
void FUN_002a03d8(u32 screen, u32 duration);
void jyoucyuGetSecondTableEntry();
void FUN_001fc6e8(s32 state);
void battleUpdateScreenFade(BattleTaskContext *work, u32 screen);
}

static inline void setBattleTaskState(u32 state)
{
    if (g_btlMainState.work)
        g_btlMainState.work->nextState = state;
}

static inline bool battleTaskUiReady()
{
    return FUN_003aea5c(g_btlUiBlock) && btlSceneIsReady(g_btlUiBlock) &&
        poolFieldClearIfAccepted(g_btlUiBlock) && battleUiIsFadeAndFieldReady(g_btlUiBlock) &&
        btlUiIsWidgetOutsideClosingState(g_btlUiBlock);
}

static inline BattleTaskOpening *findBattleTaskOpening(BattleTaskContext *work)
{
    s16 opening = work->reserves[btlFindNthActiveSpecialEntry(work, 1)].opening;
    if (work->openingData) {
        void *table = dataTableFileGetTable(work->openingData, 0);
        BattleTaskOpening *entries = dataTableGetEntries(table);
        s32 count = dataTableGetCount(table);
        for (s32 index = 0; index < count; ++index)
            if (entries[index].id == opening)
                return &entries[index];
    }
    return NULL;
}

static inline void restoreBattleTaskData()
{
    if (g_btlMainState.savedSlots)
        __aeabi_memcpy4(gameGetSlotTable(), g_btlMainState.savedSlots, 0x97e8);
    if (g_btlMainState.savedData)
        rt_memcpy(FUN_00282be4(), g_btlMainState.savedData, 0x104a);
}

static inline void resetBattleTaskRound(BattleTaskContext *work)
{
    btlUiRecountParty(g_btlUiBlock);
    FUN_003ae3cc(g_btlUiBlock);
    if (work->allocation) {
        asdMemFree(work->allocation);
        work->allocation = NULL;
    }
    if (work->records) {
        for (s32 index = 0; index < 50; ++index) {
            BattleTaskResetRecord *record = &work->records[index];
            record->first = 0xffff;
            record->second = 0xffff;
            record->value = 0;
            record->parent = -1u;
            record->value0c = 0;
            record->value10 = 0;
            record->value14 = 0;
        }
    }
    for (s32 index = 0; index < 42; ++index) {
        work->slots[index].value = 0;
        work->slots[index].id = -1;
    }
    memClear(work->smallScratch, sizeof(work->smallScratch));
    memClear(work->scratch, sizeof(work->scratch));
    wordTripleClear(work->list);
    for (s32 index = 0; index < 109; ++index) {
        work->actions[index].first = -1;
        work->actions[index].second = -1;
        work->actions[index].last = -1;
    }
    for (s32 index = 0; index < 42; ++index) {
        if (work->resources[index]) {
            FUN_00294f64(work->resources[index]);
            work->resources[index] = NULL;
        }
    }
    listBoxClearSelectionAndReset(DAT_00435d18);
    modelManagerReleaseSlots(DAT_00435d18);
    modelSetResetSlots(DAT_00435d18);
    btlEventResetSlots(DAT_00435d18);
    mathVectorClear(g_btlMain);
    transformClearVectors(g_btlMain);
    work->flags &= 0xfbffeea7;
    if (dialogIsActive())
        infoWinStartTimer(1);
    work->pending = 0;
    work->special = 0;
    memClear(&work->parameters, sizeof(work->parameters));
    for (s32 index = 0; index < 6; ++index)
        work->parameters.values[index] = 0;
    work->parameters.scaleX = 1.0f;
    work->parameters.scaleY = 1.0f;
    FUN_0027dc24(work, &work->parameters, 0);
    FUN_00338cfc(work, 1);
    if (!(work->parameters.mode.flags & 8))
        FUN_0027dbc8(3, 1);
    BattleTaskUnit *unit = reinterpret_cast<BattleTaskUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    if (unit && unit->stats) {
        unit->stats->first = 0;
        unit->stats->second = 0;
        unit->model->state = 0;
        unit->pending = 0;
    }
    jobStopIfValidC(work);
    work->flags |= 0x800000;
}

static inline bool battleTaskCompletionReady(BattleTaskContext *work)
{
    switch (work->parameters.completion) {
    case 1:
        if (work->result == 1) {
            switch (work->exitStage) {
            case 1:
                if (work->exitScriptData) {
                    work->exitScript = FUN_00297060(work->exitScriptData, 0);
                    work->exitScript->active = 1;
                    scrScriptProcessStartEntry(work->exitScript, 0);
                    ++work->exitStage;
                }
                return false;
            case 2:
                return scrRunOpcodesStub(work->exitScript) == 2;
            default:
                return false;
            }
        }
        return FUN_002896bc() != 0;
    case 3:
        return true;
    case 4:
        return work->result != 2 || FUN_002896bc();
    default:
        return FUN_002896bc() != 0;
    }
}

static inline void completeBattleTask(BattleTaskContext *work)
{
    frameTexResetFlags();
    if (!(work->parameters.mode.flags & 2))
        soundChannelStopAll(0xf);
    if (work->flags & 0x40000)
        restoreBattleTaskData();
    if ((work->flags2 & 4) && work->result == 2)
        restoreBattleTaskData();
    FUN_00338790(work);
    if ((work->flags & 0x40000) && (work->result == 2 || work->result == 4))
        work->result = 13;
    else if (work->result == 3)
        sequenceRequestClearDeferred();
    if ((work->flags2 & 4) && work->result == 2)
        work->result = 14;
    else if (work->result == 4)
        sequenceRequestClearDeferred();

    bool fade = (work->flags3 & 2) != 0;
    if (!fade) {
        switch (work->result) {
        case 2: FUN_0027db24((work->flags2 & 1) || (work->flags & 0x80000000) ? 5 : 1); break;
        case 4: FUN_0027db24(2); break;
        case 5: FUN_0027db24(3); break;
        case 13: FUN_0027db24(4); break;
        case 14: FUN_0027db24(6); break;
        }
        fade = (work->flags3 & 2) != 0;
    }
    if (fade) {
        if (work->result == 2 && work->resultMode == 1)
            restoreBattleTaskData();
        FUN_002a03d8(0, 10);
        FUN_002a03d8(1, 10);
    } else {
        FUN_00208be8();
        if (work->result == 2) {
            if (work->resultMode == 1) {
                sequenceRequestClearDeferred();
                FUN_002faf88();
            } else if (work->resultMode == 0) {
                sequenceRequestClearDeferred();
                asdSequenceRequestInitial();
            }
        } else if (work->result == 14) {
            if (!FUN_0039440c(&g_aocMain->controller))
                FUN_00394508(&g_aocMain->controller);
        } else if (sequenceRequestIsDeferred()) {
            sequenceRequestFlushDeferred();
        } else if (gameStateIsFlagSetAndLarge()) {
            s32 area = g_gameState.area - 200;
            asdSequenceRequest(14, &area, sizeof(area));
        } else if (FUN_002080e8()) {
            if (FUN_00287800())
                FUN_002faf88();
            else
                asdSequenceRequest(8, NULL, 0);
        } else if (FUN_00287304()) {
            if (FUN_00287800())
                FUN_002faf88();
            else
                asdSequenceRequest(6, NULL, 0);
        } else if (tmnlHasSelection()) {
            tmnlResetSelection();
        }
    }
    jyoucyuGetSecondTableEntry();
}

extern "C" s32 battleMainProcessUpdate()
{
    BattleTaskContext *work = g_btlMainState.work;
    switch (work->state) {
    case 0:
        if (work->initFlags & 1)
            setBattleTaskState(2);
        break;
    case 1:
        if ((work->initFlags & 1) && !jobIsValid(work->eventJob))
            setBattleTaskState(2);
        break;
    case 2:
        if (work->phase == 0) {
            if (spriteTablesLoadedEnough(g_btlUiBlock) && jyoucyuEnsureResidentEntry() && work->ready) {
                FUN_0027e760(DAT_004398d4);
                work->phase = 1;
            }
        } else if (work->phase == 1 && DAT_004398d4->state == 4) {
            setBattleTaskState(4);
        }
        break;
    case 3:
        if (DAT_004398d4->state == 4)
            setBattleTaskState(4);
        break;
    case 4:
        if (!btlEncountCheck(work))
            break;
        if (work->special == 1)
            setBattleTaskState(5);
        else if (btlFindNthActiveSpecialEntry(work, 1) < 0 || (work->flags & 2))
            setBattleTaskState(7);
        else
            setBattleTaskState(findBattleTaskOpening(work) ? 6 : 7);
        break;
    case 5:
        if (!nodeListCountActiveById(g_btlActionReflect, 0)) {
            for (s32 index = 4; index < 54; ++index) {
                BattleTaskActor *actor = &work->actors[index];
                if (actor && (actor->flags & 1) && (actor->flags & 2))
                    FUN_0027e5e4(actor);
            }
        }
        if (btlFindNthActiveSpecialEntry(work, 1) < 0 || (work->flags & 2))
            setBattleTaskState(7);
        else
            setBattleTaskState(findBattleTaskOpening(work) ? 6 : 7);
        break;
    case 6:
        if (work->timer == 30 && btlFindNthActiveSpecialEntry(work, 1) >= 0 && !(work->flags & 2)) {
            scrScriptProcessStartEntry(work->openingScript, work->special == 1 ? 3 : 0);
            buttonHelpSetPreset(0x90);
        }
        if (work->timer < 31 || btlFindNthActiveSpecialEntry(work, 1) < 0 || (work->flags & 2) ||
            scrRunOpcodesStub(work->openingScript) != 2)
            break;
        if (!btlEventSelectTrigger(g_btlEvent, 0, -1u, 0)) {
            u32 preset;
            if (g_btlMainState.work->flags & 0x1004) {
                if (gameFlagIsSet(0x525))
                    preset = 0xe4;
                else
                    preset = flagBitIsSet(0x10) ? 0xb3 : 0xb4;
            } else if (gameFlagIsSet(0x525)) {
                preset = 0xe5;
            } else if (flagBitIsSet(0x10)) {
                preset = flagBitIsSet(0x7f) ? 0x35 : 0xac;
            } else {
                preset = flagBitIsSet(0x7f) ? 0x37 : 0xad;
            }
            buttonHelpSetPreset(preset);
        }
        setBattleTaskState(7);
        break;
    case 7:
        if (!FUN_0027e3b8(g_btlEvent)) {
            if (btlEventSelectTrigger(g_btlEvent, 0, -1u, 0))
                FUN_0027e38c(g_btlEvent);
            setBattleTaskState(8);
        }
        break;
    case 8:
        if (FUN_0027e3b8(g_btlEvent) || !battleTaskUiReady())
            break;
        switch (work->result) {
        case 1: case 3: case 9: case 10: case 11: case 12: case 13: case 14:
            setBattleTaskState(19);
            break;
        case 8:
            setBattleTaskState(12);
            break;
        default:
            setBattleTaskState(work->options & 1 ? 9 : 10);
            break;
        }
        break;
    case 9:
        setBattleTaskState(10);
        break;
    case 10:
        if (work->flags & 4) {
            if ((work->flags & 0x10) && work->timer < 2)
                break;
        } else if (!btlUiIsIdle(g_btlUiBlock)) {
            break;
        }
        setBattleTaskState(11);
        work->flags &= ~0x10000u;
        if (work->flags & 0x8000) {
            for (s32 index = 0; index < 4; ++index) {
                BattleTaskReserve *reserve = &work->reserves[index];
                if ((reserve->flags & 1) && !(reserve->flags & 0x40) && reserve->actor >= 0) {
                    BattleTaskEffect effect = {
                        reserve->hp ? reserve->hp : -1, -1, -1, 0, index * 5, index * 5, 9, 1, 0
                    };
                    FUN_0027df30(0, 0, &work->actors[reserve->actor], 0, effect);
                }
            }
        }
        break;
    case 11:
        if (!FUN_0027e3b8(g_btlEvent))
            setBattleTaskState(12);
        break;
    case 12:
        setBattleTaskState(13);
        break;
    case 13:
        if (work->result == 8 && !jobIsValid(work->jobs[work->activeJob])) {
            setBattleTaskState(8);
            break;
        }
        if (!jobIsValid(work->jobs[work->activeJob])) {
            setBattleTaskState(15);
            break;
        }
        {
            u8 mode = reinterpret_cast<BattleTaskUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)))->mode;
            if (mode > 0x21)
                setBattleTaskState(15);
            if (mode == 1) {
                BattleTaskUnit *unit = reinterpret_cast<BattleTaskUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
                if (!unit || !(unit->flags & 0x1080))
                    break;
            }
            BattleTaskUnit *unit = reinterpret_cast<BattleTaskUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
            if (unit && (unit->flags & 0x1080))
                break;
            if (mode == 2)
                btlAiScriptIsFinished(g_btlAiScript);
        }
        break;
    case 15:
        if (work->timer < 0 || !battleTaskUiReady())
            break;
        if (FUN_0027de98(work) || work->result == 0)
            setBattleTaskState(16);
        else if (work->result == 6)
            setBattleTaskState(18);
        else if (work->result != 8)
            setBattleTaskState(19);
        break;
    case 17:
        if (btlUiIsIdleForCommand(g_btlUiBlock))
            setBattleTaskState(8);
        break;
    case 18:
        if (work->flags & 0x800000) {
            if (work->resume < 0 && work->parameters.mode.counts.count > 0 && work->parameters.count > 0 &&
                (DAT_004398d4->first != work->parameters.mode.counts.count || DAT_004398d4->second != work->parameters.count))
                setBattleTaskState(3);
            else
                setBattleTaskState(4);
            work->flags &= ~0x800000u;
        } else {
            bool active = false;
            for (s32 index = 0; index < 4; ++index) {
                if (jobIsValid(work->jobs[index])) {
                    active = true;
                    break;
                }
            }
            if (!active)
                resetBattleTaskRound(work);
        }
        break;
    case 19:
        if (!FUN_0027e3b8(g_btlEvent) && (work->result != 3 || sys43e188GetState()))
            setBattleTaskState(20);
        break;
    case 20:
        if (!jobIsValid(work->resultJob))
            setBattleTaskState(21);
        break;
    case 21:
        if (FUN_002d1ce0() && !jobIsValid(work->endJob))
            setBattleTaskState(22);
        break;
    case 22:
        if (battleTaskCompletionReady(work)) {
            completeBattleTask(work);
            return -1;
        }
        break;
    case 23:
        if (!jobIsValid(work->eventJob))
            setBattleTaskState(12);
        break;
    case 24:
        if (!jobIsValid(work->waitJob))
            setBattleTaskState(12);
        break;
    }
    if (work->timer < 0xffff)
        ++work->timer;
    ++work->frames;
    if (work->nextState >= 0)
        FUN_001fc6e8(work->nextState);
    battleUpdateScreenFade(work, 0);
    battleUpdateScreenFade(work, 1);
    return 0;
}
