/* NON_MATCHING: typed rewrite of the command phase dispatcher (380 vs 372 rows); armcc points the switch table defaults at a shared return-0 block and orders the case blocks differently from retail. */
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/DataTable40.h"

/* Battle state words the dispatcher reads beyond the shared prefix. */
struct CommandPhaseView {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u32 job20;
    /* 0x0024 */ u8 unk0024[0x38];
    /* 0x005c */ u32 job5c;
    /* 0x0060 */ u8 unk0060[0x1c];
    /* 0x007c */ u32 flags7c;
    /* 0x0080 */ u8 unk0080[0x21dc];
    /* 0x225c */ s32 word225c;
    /* 0x2260 */ u8 unk2260[0x270c];
    /* 0x496c */ s16 word496c;
    /* 0x496e */ s16 word496e;
};

typedef char CommandPhaseViewOffsets[
    offsetof(CommandPhaseView, job5c) == 0x5c && offsetof(CommandPhaseView, flags7c) == 0x7c &&
    offsetof(CommandPhaseView, word225c) == 0x225c && offsetof(CommandPhaseView, word496c) == 0x496c ? 1 : -1];

extern "C" {
extern BtlActionGlobals g_btlAction;
extern u32 g_btlAiScript;
extern u32 g_btlActionReflect;
extern void *DAT_00435d18;
extern void *g_btlEvent;
extern u32 g_btlUiBlock;

u32 FUN_003d317c(BtlMainState **block, CommandState *work);
u32 FUN_003c9f58(BtlMainState **block, CommandState *work);
u32 FUN_003d2ea0(BtlMainState **block, CommandState *work);
u32 FUN_003cbf40(BtlMainState **block, CommandState *work);
u32 FUN_003cae6c(BtlMainState **block, CommandState *work);
u32 FUN_003cab9c(BtlMainState **block, CommandState *work);
u32 FUN_003d1c1c(BtlMainState **block, CommandState *work);
u32 FUN_003d173c(BtlMainState **block, ActionStateChannel *channel);
u32 btlChooseAlternateSkillOrFallback(BtlMainState **block, CommandState *work);
u32 FUN_003cbce4(BtlMainState **block, CommandState *work);
u32 FUN_003cb244(BtlMainState **block, CommandState *work);
u32 FUN_003cb3e4(BtlMainState **block, CommandState *work);
u32 btlAiWaitUiAndUpdatePartyGroup4Latch(BtlMainState **block, CommandState *work);
u32 FUN_003cfb60(BtlMainState **block, CommandState *work);
void FUN_00229b10(BtlMainState **block, CommandState *work);
void FUN_00229754(BtlMainState **block, CommandState *work);
u8 btlAiScriptIsFinished(u32 script);
u32 jobIsValid(u32 handle);
s32 btlSceneIsReady(u32 ui);
void btlUnitSetParam(BtlMainState **block, u32 param, u32 value);
s32 nodeListCountActiveById(u32 id, void *arg);
void btlUiClearRowStatuses(u32 ui);
void battleSetActionKind(BtlMainState **block);
void FUN_003aeaf4(u32 ui);
u32 FUN_0027e3b8(void *event);
s32 FUN_003dcbf4(void *object);
u32 eftLoadFileRegisterAndParseHeader(void *object);
u8 FUN_003dcfc8(void *object);
s32 btlNodeListAnyReady(void);

/* Sets the acting combatant's pending action. */
static __inline void setPendingAction(BtlMainState **block, u8 pending)
{
    static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*block)->actionState.index].pending = pending;
}

/* Runs one step of the acting combatant's pending action; returns 1 once a step finished its phase. */
u32 FUN_003d28d0(BtlMainState **block, u32 phase)
{
    ActionStateChannel *channel = &static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*block)->actionState.index];
    CommandState *work = reinterpret_cast<CommandState *>(reinterpret_cast<u8 *>(channel) + 4);
    CommandPhaseView *view = reinterpret_cast<CommandPhaseView *>(*block);
    u8 pending;
    switch (phase) {
    case 0:
        return FUN_003d317c(block, work);
    case 1:
        return FUN_003c9f58(block, work);
    case 2:
        if (!btlAiScriptIsFinished(g_btlAiScript))
            return 0;
        if (jobIsValid(reinterpret_cast<CommandPhaseView *>(*block)->job5c) != 0)
            return 0;
        if (((*block)->battleFlags & 4) != 0 && reinterpret_cast<CommandPhaseView *>(*block)->word496c == 0 &&
            reinterpret_cast<CommandPhaseView *>(*block)->word496e == 0) {
            work->selection->kind = 0x10;
            work->selection->value = 0;
            memClear(work->targetMarks, 0x85);
        }
        FUN_00229b10(block, work);
        return 1;
    case 3:
        if (jobIsValid(view->job5c) != 0)
            return 0;
        work->selection->kind = 2;
        work->selection->value = reinterpret_cast<CommandPhaseView *>(*block)->word225c;
        btlUnitSetParam(block, 1, 0);
        FUN_00229b10(block, work);
        return 1;
    case 4:
        return FUN_003d2ea0(block, work);
    case 5:
        return FUN_003cbf40(block, work);
    case 7:
        return FUN_003cae6c(block, work);
    case 8:
        pending = 9;
        break;
    case 9:
        if (nodeListCountActiveById(g_btlActionReflect, work) > 0)
            return 0;
        btlUiClearRowStatuses(g_btlUiBlock);
        work->selection->kind = 10;
        battleSetActionKind(block);
        return 1;
    case 10:
        if ((view->flags7c & 1) != 0)
            return 0;
        pending = 11;
        break;
    case 11:
        return FUN_003cab9c(block, work);
    case 12:
        return FUN_003d1c1c(block, work);
    case 13:
        return FUN_003d173c(block, channel);
    case 14:
    case 18:
    case 19:
    case 22:
        pending = 27;
        break;
    case 15:
        if (jobIsValid(view->job20) != 0)
            return 0;
        if (btlSceneIsReady(g_btlUiBlock) == 0)
            return 0;
        pending = 16;
        setPendingAction(block, pending);
        return 1;
    case 16: {
        FUN_003aeaf4(g_btlUiBlock);
        if (view->word225c == 3)
            pending = 11;
        else
            pending = 27;
        setPendingAction(block, pending);
        return 1;
    }
    case 17:
        return btlChooseAlternateSkillOrFallback(block, work);
    case 20:
        return FUN_003cbce4(block, work);
    case 24: {
        if (FUN_0027e3b8(g_btlEvent) != 0)
            return 0;
        bool restricted = false;
        if (work->selection->kind == 3) {
            const Table04Record *skill = dataTable40FindById(work->selection->value);
            if (skill != NULL && reinterpret_cast<const u8 *>(skill)[0x4b] != 0)
                restricted = true;
            if ((*block)->editorControl.flags & 0x800) {
                // Event running: fall through to the default handling.
            } else if (restricted) {
                setPendingAction(block, 12);
                return 1;
            }
        }
        battleSetActionKind(block);
        return 1;
    }
    case 27:
        return FUN_003cb244(block, work);
    case 28:
        return FUN_003cfb60(block, work);
    case 29:
        return FUN_003cb3e4(block, work);
    case 30:
        return btlAiWaitUiAndUpdatePartyGroup4Latch(block, work);
    case 31:
        if (channel->timer == 0) {
            void *object = DAT_00435d18;
            if (FUN_003dcbf4(object) == 0)
                return 0;
            eftLoadFileRegisterAndParseHeader(DAT_00435d18);
            ++channel->timer;
            return 0;
        }
        if (channel->timer != 1)
            return 0;
        if (FUN_003dcfc8(DAT_00435d18) == 0)
            return 0;
        setPendingAction(block, 32);
        return 1;
    case 32:
        if (nodeListCountActiveById(g_btlActionReflect, work) > 0)
            return 0;
        if ((work->flags & 0x1080) == 0 && btlNodeListAnyReady() != 0)
            return 0;
        FUN_00229754(block, work);
        return 1;
    case 33:
        if (FUN_0027e3b8(g_btlEvent) != 0)
            return 0;
        setPendingAction(block, 35);
        return 1;
    case 34:
        pending = 35;
        break;
    case 35:
        if (work->selection->kind != 7)
            return 1;
        work->selection->kind = 0;
        work->selection->value = 0;
        reinterpret_cast<CommandEntryView *>(work->entry)->command = 0;
        work->trailer = 0;
        return 1;
    default:
        return 0;
    }
    channel->pending = pending;
    return 1;
}
}
