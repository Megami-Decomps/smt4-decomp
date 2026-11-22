#include <stdio.h>
#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"
/* NON_MATCHING: nearest-talk-target selection; same control flow and calls as retail, but retail keeps a 44-byte frame (the purchase test's bonus and cost on the stack, the flag block and player at sp+20/24), loads the player position as one vldm after the target's three coordinates and allocates the loop registers differently. */
#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include <math.h>
#include "map/MapVector.h"
#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

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
    /* 0x2C */ MapVector position;
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

u8 *gameGetPlayerData(void);
void mapSetActiveEntryId(u32 id);
void sequenceRequestDefer(s32 sequence, u32 arg);
s32 gameDataFlagTestBit(u32 flag);

/* Picks the nearest interactable target within 150 units and starts what it does (a scripted
 * event or a shop purchase), then releases it; returns the id of the chosen target, or -1. */
u32 FUN_00482c04(TalkTargetSet *set)
{
    u32 chosen = 0xFFFFFFFF;
    MapSaveBlockA *flagsBlock = gameFlagsGetBlock();
    u8 *player = gameGetPlayerData();
    s32 bestDistance = 999999;
    for (s32 i = 0; i < 32; i++) {
        TalkTarget *target = set->targets[i];
        if (target == NULL || !(target->flags & 1) || (target->flags & 4) || !(target->flags & 0x10))
            continue;
        const MapVector *position = &target->position;
        f32 dx = position->x - g_lmapScene->pose.position.x;
        f32 dy = position->y - g_lmapScene->pose.position.y;
        f32 dz = position->z - g_lmapScene->pose.position.z;
        if (g_lmapScene->pose.position.y > position->y + 5.0f)
            continue;
        s32 distance = (s32)sqrtf(dx * dx + dy * dy + dz * dz);
        if (distance >= 150 || distance >= bestDistance)
            continue;
        bestDistance = distance;
        g_gameState.unk1CD = 0;
        switch (set->targets[i]->kind) {
        case 0:
            target = set->targets[i];
            chosen = target->id;
            if (flagsBlock->eventEnabled != 0) {
                s32 bonus = 0;
                s32 cost = target->cost;
                if (gameDataFlagTestBit(0x8B))
                    bonus = 9;
                if (*(u16 *)(player + 0x62) + bonus > cost) {
                    g_gameState.unk1CD = 1;
                    SoundActorQueuePosition sound = {position->x, position->y, position->z};
                    soundActorStartOnFreeChannel(0x1000225, soundActorScalePosition(sound, 1.0f / 3.0f));
                    break;
                }
                g_gameState.unk1CD = 0;
            }
            g_gameState.chosenTalkId = chosen;
            g_gameState.talkRewardId = 0;
            if (set->targets[i]->rewardKind == 3 && set->targets[i]->rewardId != 0)
                g_gameState.talkRewardId = set->targets[i]->rewardId;
            break;
        case 1:
            g_gameState.talkMarker = 0;
            g_gameState.talkMarkerArg = 0;
            target = set->targets[i];
            if (target->hasScript) {
                if (g_gameState.talkFlagsEnabled != 0 && target->flagId > 0)
                    flagsBlock->mapId = (s16)target->flagId;
                if (target->sequence > 0) {
                    if (target->deferred != 0) {
                        g_gameState.scriptPending = 1;
                        g_gameState.scriptId = target->sequence;
                        sprintf(g_gameState.scriptName, "e%03d_%02d", target->sequence, target->sequenceArg);
                    } else {
                        sequenceRequestDefer(target->sequence, target->sequenceArg);
                    }
                }
                mapSetActiveEntryId(target->id);
                chosen = target->id;
                if (target->marker > 0) {
                    g_gameState.talkMarker = target->marker;
                    g_gameState.talkMarkerArg = target->markerArg;
                }
            }
            break;
        }
        TalkTarget *owner = set->targets[i];
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
