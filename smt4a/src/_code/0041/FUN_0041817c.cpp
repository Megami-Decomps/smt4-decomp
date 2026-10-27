/* NON_MATCHING: readable rewrite; the per-goal loop body matches retail, but retail shares ONE goal-changed mark between the store paths and the second check (the build duplicates it), keeps a 0x34 frame and its register order for the amount/base differs. */
#include "gamedata/RosterView.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "shard/W5_W5Match7_FlagBanks.h"

/* One requirement of a goal: a kind (2 = a counted target) with its target id and threshold. */
struct GoalRequirement {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u16 target;
    /* 0x04 */ u32 threshold;
};

/* Goal definition returned by FUN_001ad9b4: only the fields read here. */
struct GoalRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[4];
    /* 0x06 */ u8 category;
    /* 0x07 */ u8 unk07[0xf9];
    /* 0x100 */ GoalRequirement requirements[4];
};

/* A roster slot seen as a goal slot: the goal id and one progress counter per requirement. */
struct GoalSlot {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 counts[4];
};

/* The part of the flag bank where the latest progress is reported. */
struct GoalProgressBank {
    /* 0x0000 */ u8 unk0000[0x1098];
    /* 0x1098 */ u16 reached;
    /* 0x109a */ u16 advanced;
};

extern "C" {
GoalRecord *FUN_001ad9b4(u32 id);
s32 goalConditionsSatisfied(u32 id);

/* The flag bytes of a goal in the game-flag block. */
static __inline u8 *goalFlagEntry(u32 goalId)
{
    return reinterpret_cast<u8 *>(&reinterpret_cast<RosterView *>(gameFlagBlockGet())->flags[goalId]);
}

/* Marks the goal as having changed. */
static __inline void goalMarkChanged(u32 goalId)
{
    asdDebugHookVoid();
    goalFlagEntry(goalId)[2] |= 2;
}

/* Adds `amount` to the counter of every requirement of the goal that counts `target`, reporting the goal that
 * reached or advanced its threshold. */
static __inline void goalAddProgress(GoalSlot *counters, u16 goalId, u16 target, s32 amount)
{
    if (goalId == 0) {
        return;
    }
    GoalRecord *goal = FUN_001ad9b4(goalId);
    if (goal->category != 1) {
        return;
    }
    s32 incomplete = 0;
    GoalProgressBank *bank = reinterpret_cast<GoalProgressBank *>(gameFlagsGetBlock());
    for (s32 i = 0; i < 4; i++) {
        if (goal->requirements[i].kind == 2 && goal->requirements[i].target == target) {
            u32 before = counters->counts[i];
            u32 threshold = goal->requirements[i].threshold;
            if (before < threshold) {
                incomplete = 1;
            }
            u32 after = before + amount;
            if ((s32)after < 0xffff) {
                counters->counts[i] = (u16)after;
                if (incomplete) {
                    if ((u16)after >= goal->requirements[i].threshold) {
                        bank->reached = target;
                    } else {
                        bank->advanced = target;
                    }
                    goalMarkChanged(goalId);
                    return;
                }
            } else {
                counters->counts[i] = 0xffff;
                if (incomplete) {
                    goalMarkChanged(goalId);
                    return;
                }
            }
            break;
        }
    }
    if (goal->category == 1 && goal->requirements[0].kind == 2 && goal->requirements[0].target != 0 &&
        ((*goalFlagEntry(goal->id) & 8) >> 3) == 0 &&
        goalConditionsSatisfied(goal->id) != 0) {
        bank->reached = goal->requirements[0].target;
        goalMarkChanged(goalId);
    }
}

/* Adds `amount` progress for `target` to every goal held by the active party and the stock slots. */
void FUN_0041817c(u16 target, s32 amount)
{
    RosterView *roster = reinterpret_cast<RosterView *>(gameFlagBlockGet());
    gameFlagBlockGet();
    GoalSlot *firstSlot = reinterpret_cast<GoalSlot *>(&roster->stock[0]);
    for (s32 i = 0; i < 4; i++) {
        goalAddProgress(firstSlot, roster->active[i].id, target, amount);
    }
    for (s32 i = 1; i < 20; i++) {
        goalAddProgress(reinterpret_cast<GoalSlot *>(&roster->stock[i]), roster->stock[i].id, target, amount);
    }
}

} /* extern "C" */
