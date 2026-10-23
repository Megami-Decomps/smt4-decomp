/* NON_MATCHING: action-index addressing, successful phase-store predication and draw-default load order differ; the fourth alpha-fade argument is restored. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "shard/W6_W6Match3_BattleQueue.h"
#include "shard/W6_W6Match3_ColorFade.h"

namespace {
struct BattleQueuedActionStep {
    u16 unk00;
    u16 active;
    u32 unk04;
    u32 context;
    u8 unk0C[0x14];
    u8 phase;
    u8 unk21[3];
    s16 mode;
    s16 queue;
    u8 unk28[0x20];
    s16 actor;
    s16 target;
};
struct BattleQueuedActionsView {
    u8 unk0000[0x1FD0];
    u64 commands[2];
};
// The version-resource prefix ends before the readiness flags used by this step.
struct BattleVersionReadinessView {
    BattleVersionResources resources;
    u8 unk2BC4[0x3028 - 0x2BC4];
    u32 flags;
};
struct BattleQueuedActionDrawDefaults {
    u32 unk00;
    s32 first;
    s32 priority;
    u8 unk0C[0xC];
    s32 second;
};
typedef char BattleQueuedActionStepLayoutCheck[offsetof(BattleQueuedActionStep, phase) == 0x20 &&
    offsetof(BattleQueuedActionStep, actor) == 0x48 &&
    offsetof(BattleVersionReadinessView, flags) == 0x3028 ? 1 : -1];
}

struct BtlUi;
extern "C" {
extern BattleVersionResources *DAT_00435d18;
extern const BattleQueuedActionDrawDefaults DAT_00439a20;
extern BtlUi *g_btlUiBlock;
BtlMainState *btlGetMainState(void);
void FUN_003c1248(s32 mode, s32 queue, s32 actor, s32 target);
void FUN_0023f79c(BtlMainState *state, u32 flags);
s32 FUN_003c0ab4(BtlActionRecord *action);
s32 FUN_0033a7f8(BtlMainState *state, BtlActionRecord *action, u64 command);
void FUN_0024057c(u32 owner, ColorFadeWork *action, s32 duration, u32 alpha);
void FUN_002451c4(s32 layer, u32 context, BtlActionRecord *action, u32 mask, s32 priority, u32 flags);
void btlReflectInitKind9(s32 layer, u32 context, BtlActionRecord *action, u32 kind, u32 mode);
s32 FUN_003ae820(BtlUi *ui);
void FUN_0033b1ac(BtlMainState *state, s32 actor);

void FUN_00343f44(u32, BattleQueuedActionStep *work)
{
    BtlMainState *state = btlGetMainState();
    if (work->phase == 0) {
        btlPruneInvalidQueuedEntries(state);
        FUN_003c1248(work->mode, work->queue, work->actor, work->target);
        if (work->mode != 0) {
            if (work->mode == 1) {
                if ((state->battleFlags & 4) != 0) {
                    if ((reinterpret_cast<BattleVersionReadinessView *>(DAT_00435d18)->flags & 0x400) != 0) {
                        FUN_00240614(DAT_00435d18);
                    }
                    work->phase = 1;
                } else {
                    work->active = 0;
                    return;
                }
            }
        } else {
            FUN_0023f79c(state, 0x200);
            if ((state->battleFlags & 4) == 0) {
                work->phase = 2;
            } else {
                work->active = 0;
                return;
            }
        }
    }
    if (work->phase == 1) {
        BtlActionRecord *action = &state->actions.records[work->actor];
        if (FUN_003c0ab4(action) != 0) {
            action->flags &= ~8;
            action->presentationFlags |= 0x800;
            const BattleQueuedActionsView *queued = reinterpret_cast<const BattleQueuedActionsView *>(state);
            if (FUN_0033a7f8(state, action, queued->commands[work->queue]) == 0) {
                work->active = 0;
                return;
            }
            work->phase = 3;
            const s16 first = static_cast<s16>(DAT_00439a20.first);
            const s16 second = static_cast<s16>(DAT_00439a20.second);
            const s16 priority = static_cast<s16>(DAT_00439a20.priority);
            FUN_0024057c(reinterpret_cast<u32>(state), reinterpret_cast<ColorFadeWork *>(action), 0, 0);
            FUN_002451c4(second + first, work->context, action, 0xFF, priority, 0);
            u32 kind = 6;
            if ((action->status & 0x10) != 0) {
                kind = 7;
            }
            btlReflectInitKind9(second, work->context, action, kind, 13);
        }
    }
    if (work->phase == 2 && FUN_003ae820(g_btlUiBlock) != 0) {
        work->phase = 3;
    }
    if (work->phase == 3) {
        FUN_0033b1ac(state, work->actor);
        work->active = 0;
    } else {
        work->active = 1;
    }
}
}
