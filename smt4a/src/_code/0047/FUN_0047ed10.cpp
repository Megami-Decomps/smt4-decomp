/* NON_MATCHING: retail zero-fills the 0x20-byte file buffer once before the search loop as well as in it, keeps the match pointer as the loop pointer, and compares the fixed lane thresholds as VFP floats (this build compares them as integers). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"

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
s32 textFormatBuffer(char *destination, const char *format, ...);
s32 libc_strcmp(const char *first, const char *second);
void FUN_004fb43c(s32 actor, u32 options, void *payload, s32 initializeValue, s32 suppressDuplicate,
                  u32 parameterBits, s32 firstId);
u32 jyoucyuGetTableEntry(s32 index);

extern BtlEffectSetEntry g_btlEffectSetTable[0x1F6];
extern const char *g_btlAssistEffectSetNames[3]; /* "ef_Assist_03", "ef_Assist_06", "ef_Assist_07" */
extern BattleVectorTransition *g_btlCamera;

static BtlEffectSetEntry *findEffectSet(const char *name)
{
    for (s32 i = 0; i < 0x1F6; i++) {
        char file[0x20] = {0};
        textFormatBuffer(file, "%s.eft", g_btlEffectSetTable[i].name);
        if (libc_strcmp(file, name) == 0) {
            return &g_btlEffectSetTable[i];
        }
    }
    return NULL;
}

/* Start the effect set called `name` for `target`, picking one of five lanes from the horizontal offset `x`. */
u32 FUN_0047ed10(const char *name, u32 target, s32 mode, f32 x)
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
        if (x < -2.965f) {
            lane = 5;
        } else if (x < -0.99f) {
            lane = 4;
        } else if (x > 2.94f) {
            lane = 1;
        } else if (x > 0.965f) {
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
        f32 centre = g_btlCamera->reference.position.x;
        if (x < centre - 17.0f) {
            lane = 5;
        } else if (x < centre - 9.0f) {
            lane = 4;
        } else if (centre + 17.0f < x) {
            lane = 1;
        } else if (centre + 9.0f < x) {
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
            FUN_004fb43c(set->slots[i].actor, target, (void *)set->slots[i].effect, 0, 0, lane, 0);
        }
    }
    for (s32 i = 0; i < 3; i++) {
        char file[0x20] = {0};
        textFormatBuffer(file, "%s.eft", g_btlAssistEffectSetNames[i]);
        if (libc_strcmp(file, name) == 0) {
            state->effectSet = -1;
            return 1;
        }
    }
    state->effectSet = set->mainEffect;
    return 1;
}
}
