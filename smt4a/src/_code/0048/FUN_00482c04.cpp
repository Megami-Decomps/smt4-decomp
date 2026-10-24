/* NON_MATCHING: readable rebuild of the nearest-talk-target selection; retail keeps the best distance and id in s/r registers across the dispatch with the sphere test inlined as vsqrt and merges the three pickup branches' common stores, which armcc here schedules differently. */
#include "shard/W5_W5Match7_SceneState.h"
#include <math.h>

/* A talk/pickup target of the map scene (only the fields this reads). */
class TalkTarget {
public:
    virtual ~TalkTarget();
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 kind;             /* 0: shop-like, 1: scripted */
    /* 0x0C */ u8 flags;             /* 1 present, 4 disabled, 0x10 interactable */
    /* 0x0D */ u8 unk0D[0x13];
    /* 0x20 */ u32 id;
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ f32 x, y, z;
    /* 0x38 */ u8 unk38[0x30];
    /* 0x68 */ s32 cost;
    /* 0x6C */ u8 unk6C[0x1F];
    /* 0x8B */ s8 rewardKind;
    /* 0x8C */ s16 rewardId;
    /* 0x8E */ u8 unk8E[7];
    /* 0x95 */ u8 hasScript;
    /* 0x96 */ u8 unk96[2];
    /* 0x98 */ s32 flagId;
    /* 0x9C */ s32 marker;
    /* 0xA0 */ u32 markerArg;
    /* 0xA4 */ s32 deferred;
    /* 0xA8 */ s32 sequence;
    /* 0xAC */ u32 sequenceArg;
};

/* The set of targets: 32 pointer slots and two counters. */
struct TalkTargetSet {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
    /* 0x14 */ s32 countWithoutOwner;
    /* 0x18 */ TalkTarget *targets[32];
};

extern "C" {
extern u8 DAT_005f1776;
extern u32 DAT_005f1778;
extern u8 DAT_005f177c;
extern u8 DAT_005f17c9;
extern s32 DAT_005f17e8;
extern u32 DAT_005f17ec;
extern u32 DAT_005f18e8;
extern s32 DAT_005f1a58;
extern s32 DAT_005f1be8;

u8 *gameFlagsGetBlock(void);
u8 *gameGetPlayerData(void);
void textFormatBuffer(u8 *buffer, const char *format, u32 a, u32 b);
void FUN_00376fa4(u32 id);
void sequenceRequestDefer(s32 sequence, u32 arg);
void FUN_003d4ed8(u32 id);
s32 gameDataFlagTestBit(u32 flag);

/* Picks the nearest interactable target within 150 units and starts what it does (a scripted
 * event, a shop purchase or a pickup); returns the id of the chosen target, or -1. */
u32 FUN_00482c04(TalkTargetSet *set)
{
    u32 chosen = 0xFFFFFFFF;
    u8 *flagsBlock = gameFlagsGetBlock();
    u8 *player = gameGetPlayerData();
    s32 bestDistance = 999999;
    for (s32 i = 0; i < 32; i++) {
        TalkTarget *target = set->targets[i];
        if (target == NULL || !(target->flags & 1) || (target->flags & 4) || !(target->flags & 0x10))
            continue;
        f32 dx = target->x - g_lmapScene->position.x;
        f32 dy = target->y - g_lmapScene->position.y;
        f32 dz = target->z - g_lmapScene->position.z;
        if (g_lmapScene->position.y > target->y + 5.0f)
            continue;
        s32 distance = (s32)sqrtf(dx * dx + dy * dy + dz * dz);
        if (distance >= 150 || distance >= bestDistance)
            continue;
        DAT_005f17c9 = 0;
        if (target->kind == 1) {
            DAT_005f17e8 = 0;
            DAT_005f17ec = 0;
            if (target->hasScript) {
                s32 flagId = DAT_005f1be8 != 0 ? target->flagId : 0;
                if (DAT_005f1be8 != 0 && flagId != 0 && flagId >= 0)
                    *(s16 *)(flagsBlock + 0x22) = (s16)flagId;
                if (target->sequence > 0) {
                    if (target->deferred != 0) {
                        DAT_005f1776 = 1;
                        DAT_005f1778 = target->sequence;
                        textFormatBuffer(&DAT_005f177c, "%d_%d", target->sequence, target->sequenceArg);
                    } else {
                        sequenceRequestDefer(target->sequence, target->sequenceArg);
                    }
                }
                FUN_00376fa4(target->id);
                chosen = target->id;
                if (target->marker > 0) {
                    DAT_005f17ec = target->markerArg;
                    DAT_005f17e8 = target->marker;
                }
            }
        } else if (target->kind == 0) {
            chosen = target->id;
            bool affordable = true;
            if (*(s32 *)(flagsBlock + 0xDF4) != 0) {
                s32 limit = *(u16 *)(player + 0x62) + (gameDataFlagTestBit(0x8B) ? 9 : 0);
                affordable = target->cost >= limit;
            }
            if (!affordable) {
                DAT_005f17c9 = 1;
                FUN_003d4ed8(0x1000225);
            } else {
                DAT_005f1a58 = 0;
                DAT_005f18e8 = chosen;
                if (target->rewardKind == 3 && target->rewardId != 0)
                    DAT_005f1a58 = target->rewardId;
            }
        }
        TalkTarget *owner = set->targets[i];
        bestDistance = distance;
        if (owner != NULL) {
            s32 kind = owner->kind;
            delete owner;
            set->targets[i] = NULL;
            if (kind == 0)
                set->countWithoutOwner--;
            set->count--;
        }
    }
    return chosen;
}

} /* extern "C" */
