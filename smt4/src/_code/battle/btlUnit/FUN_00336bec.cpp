/* NON_MATCHING: retail retains an unused first-entry boolean; omitted dead state, checking appearance timing and sort. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
struct BattleAppearanceTiming {
    s32 interval;
    s32 delay;
    s32 kind;
    s32 alternateInterval;
    s32 alternateDelay;
    s32 alternateKind;
    s32 baseDelay;
};
extern "C" {
extern BtlMain *g_btlMain;
extern BattleVersionResources *DAT_00435d18;
extern BattleAppearanceTiming DAT_00439a20;
s32 compareDistanceFromOrigin(const void *left, const void *right);
void FUN_002b7bca(void *entries, s32 count, u32 size, s32 (*compare)(const void *, const void *));
void FUN_0024057c(BtlMainState *state, BtlActionRecord *action, s32 mode, s32 flags, s32 kind);
void FUN_002451c4(s32 delay, s32 mode, BtlActionRecord *action, u32 alpha, s32 kind, s32 flags);
void btlReflectInitKind9(s32 delay, s32 mode, BtlActionRecord *action, u32 effect, s32 kind);
void FUN_0024082c(BtlMain *main, s32 duration);

void FUN_00336bec(BtlMainState *state)
{
    g_btlMain->flags |= 0x4000;
    FUN_00240614(DAT_00435d18);
    BtlActionRecord *actions[50];
    s32 count = 0;
    for (s32 i = 4; i < 54; ++i) {
        BtlActionRecord *action = &state->actions[i];
        if ((action->status & 1) && (action->status & 2))
            actions[count++] = action;
    }
    FUN_002b7bca(actions, count, sizeof(actions[0]), compareDistanceFromOrigin);
    s16 order = 0;
    for (s32 i = 0; i < count; ++i) {
        BtlActionRecord *action = actions[i];
        if ((action->status & 1) && (action->status & 2) && !(action->presentationFlags & 0x800)) {
            action->presentationFlags |= 0x800;
            s16 interval, delay, kind;
            if (action->status & 0x10) {
                interval = (s16)DAT_00439a20.alternateInterval;
                delay = (s16)DAT_00439a20.alternateDelay;
                kind = (s16)DAT_00439a20.alternateKind;
            } else {
                interval = (s16)DAT_00439a20.interval;
                delay = (s16)DAT_00439a20.delay;
                kind = (s16)DAT_00439a20.kind;
            }
            s16 baseDelay = (s16)DAT_00439a20.baseDelay;
            FUN_0024057c(state, action, 0, 0, kind);
            FUN_002451c4(order * interval + delay + baseDelay, 0, action, 255, kind, 0);
            u32 effect = (action->status & 0x10) ? 7 : 6;
            btlReflectInitKind9(order * interval + baseDelay, 0, action, effect, 13);
            ++order;
        }
    }
    FUN_0024082c(g_btlMain, 120);
}
}
