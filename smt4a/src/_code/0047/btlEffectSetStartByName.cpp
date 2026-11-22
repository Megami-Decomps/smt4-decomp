/* NON_MATCHING: written like its IV twin FUN_003947cc: the search, the lane tests and the camera read
 * match. Remaining (57 lines): retail keeps the assist loop's bound 3 in a register (`mov r5, #3; cmp r5, r4`), pools
 * the set count 0x1F6 before the table address (registers r7/sl swapped in the first loop), and places the assist
 * match's `effectSet = -1` store inline before the shared store, where this build moves it after the epilogue. */
#include <stdio.h>
#include "battle/BtlMainAccess.h"
#include "battle/BtlSideLimits.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <string.h>

/* One effect set: the file name stem and the (up to) four effects started for it. */
struct BtlEffectSetEntry {
    /* 0x00 */ char name[0x10];
    struct {
        /* 0x10 */ u32 effect;
        /* 0x14 */ u16 actor;
        /* 0x16 */ u16 unk16;
    } slots[4];
    /* 0x30 */ s32 mainEffect; /* effect the battle main state keeps for this set */
};

/* The battle main state is followed by the handle of the effect set that is currently playing. */
struct BtlMainStateEffectSet {
    /* 0x0000 */ u8 unk0000[0x4CF0];
    /* 0x4CF0 */ s32 effectSet; /* -1 for the assist sets, which are not tracked */
};

extern "C" {
void btlQueueActionMessage(s32 actor, u32 options, void *payload, s32 initializeValue, s32 suppressDuplicate,
                  u32 parameterBits, s32 firstId);
u32 jyoucyuGetTableEntry(s32 index);

extern BtlEffectSetEntry g_btlEffectSetTable[0x1F6];
extern const char *g_btlAssistEffectSetNames[3]; /* "ef_Assist_03", "ef_Assist_06", "ef_Assist_07" */
extern BattleVectorTransition *g_btlCamera;

/* Finds the effect set whose file name ("<name>.eft") is `name`. The buffer is cleared before the loop and again
 * for each name. */
static BtlEffectSetEntry *findEffectSet(const char *name)
{
    char file[0x20] = {0};

    for (s32 i = 0; i < 0x1F6; i++) {
        memset(file, 0, sizeof(file));
        BtlEffectSetEntry *set = &g_btlEffectSetTable[i];

        sprintf(file, "%s.eft", set->name);
        if (strcmp(file, name) == 0) {
            return set;
        }
    }
    return NULL;
}

/* Start the effect set called `name` for `target`, picking one of five lanes from the horizontal offset `x`. */
u32 btlEffectSetStartByName(const char *name, u32 target, s32 mode, f32 x)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return 0;
    }
    BtlEffectSetEntry *set = findEffectSet(name);
    BtlMainStateEffectSet *state = (BtlMainStateEffectSet *)btlGetMainState();
    s32 lane;
    switch (mode) {
    case 2:
    case 5:
    case 8:
    case 9:
    case 12:
        /* Fixed limits: each outer limit is a lane's width (1.975) beyond its inner one. */
        if (btlIsBelow(x, -0.99f - 1.975f)) {
            lane = 5;
        } else if (btlIsBelow(x, -0.99f)) {
            lane = 4;
        } else if (btlIsAbove(x, 2.94f)) {
            lane = 1;
        } else if (btlIsAbove(x, 2.94f - 1.975f)) {
            lane = 2;
        } else {
            lane = 3;
        }
        break;
    case 6:
    case 7:
    case 11:
        lane = 3;
        break;
    default: {
        BattleVector3 centre = g_btlCamera->reference.position;

        if (btlIsBelow(x, centre.x + -17.0f)) {
            lane = 5;
        } else if (btlIsBelow(x, centre.x + -9.0f)) {
            lane = 4;
        } else if (btlIsAbove(x, centre.x + 17.0f)) {
            lane = 1;
        } else if (btlIsAbove(x, centre.x + 9.0f)) {
            lane = 2;
        } else {
            lane = 3;
        }
        break;
    }
    }
    if (set == NULL) {
        return 0;
    }
    for (s32 i = 0; i < 4; i++) {
        if (set->slots[i].effect != 0) {
            btlQueueActionMessage(set->slots[i].actor, target, (void *)set->slots[i].effect, 0, 0, lane, 0);
        }
    }
    bool assist = false;
    for (s32 i = 0; i < 3; i++) {
        char file[0x20] = {0};
        sprintf(file, "%s.eft", g_btlAssistEffectSetNames[i]);
        if (strcmp(file, name) == 0) {
            assist = true;
            break;
        }
    }
    if (assist) {
        state->effectSet = -1;
    } else {
        state->effectSet = set->mainEffect;
    }
    return 1;
}
}
