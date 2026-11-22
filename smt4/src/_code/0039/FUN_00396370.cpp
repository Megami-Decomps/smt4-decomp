/* NON_MATCHING: retail keeps &target->position in r0 from the distance to the sound start (loading x, then y/z with
 * vldmia) and holds the distance in r1; the build reloads the position and uses r0 (64 lines). */
#include <stdio.h>
#include "gamedata/MapSaveBlock.h"
#include "map/LmapGlobals.h"
#include <math.h>
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"
#include "gamedata/GamePlayerData.h"

/* An interactable of the field map: the talk list owns up to 32 of them. */
class TalkTarget {
public:
    virtual ~TalkTarget();

    /* 0x04 */ s32 kind;            /* 0: ordinary talk, 1: scripted event */
    /* 0x08 */ u8 flags;            /* bit 0: active, bit 2: suppressed */
    /* 0x09 */ u8 unk09[0x13];
    /* 0x1C */ s32 id;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ MapVector position;
    /* 0x34 */ u8 unk34[0x30];
    /* 0x64 */ s32 requiredLevel;
    /* 0x68 */ u8 unk68[0xC];
    /* 0x74 */ u8 hasEvent;
    /* 0x75 */ u8 unk75[3];
    /* 0x78 */ s32 mapId;
    /* 0x7C */ s32 eventValue;
    /* 0x80 */ s32 eventArgument;
    /* 0x84 */ s32 formatMessage;
    /* 0x88 */ s32 sequenceId;
    /* 0x8C */ s32 sequenceArgument;
};

struct TalkTargetList {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
    /* 0x14 */ s32 ordinaryCount;
    /* 0x18 */ TalkTarget *targets[32];
};

/* Straight-line distance between two map positions: nn::math's VEC3Dist header inline (the length of
 * VEC3Sub, map/MapVector.h's mapVectorSub). */
static __inline f32 mapVectorDistance(MapVector a, const MapVector &b)
{
    MapVector d = mapVectorSub(a, b);

    return sqrtf(d.x * d.x + d.y * d.y + d.z * d.z);
}

extern "C" {
void mapSetActiveEntryId(s32 value);
void sequenceRequestDefer(s32 id, s32 argument);

/* Picks the nearest interactable within 150 units of the camera, runs its talk or event action and
 * removes it from the list. Returns the id of the last one handled, or -1. */
s32 FUN_00396370(TalkTargetList *list)
{
    s32 result = -1;
    MapSaveBlock *map = gameGetMapBlock();
    PlayerDataIV *player = gameGetPlayerData();
    s32 nearest = 999999;
    s32 i;

    for (i = 0; i < 32; i++) {
        TalkTarget *target = list->targets[i];
        s32 distance;

        if (target != NULL && (target->flags & 1) != 0 && (target->flags & 4) == 0) {
            distance = (s32)mapVectorDistance(target->position, g_lmapScene->pose.position);
            if (distance < 150 && distance < nearest) {
                g_gameState.event.encounterApproach = 0;
                nearest = distance;
                target = list->targets[i];
                if (target->kind == 0) {
                    result = target->id;
                    if (map->eventEnabled != 0 && target->requiredLevel < player->level) {
                        g_gameState.event.encounterApproach = 1;
                        SoundActorQueuePosition position = {
                            target->position.x * (1.0f / 3.0f),
                            target->position.y * (1.0f / 3.0f),
                            target->position.z * (1.0f / 3.0f)
                        };
                        soundActorStartOnFreeChannel(0x1000187, position);
                    }
                } else if (target->kind == 1) {
                    g_gameState.event.encounterCount = 0;
                    g_gameState.event.encounterValue = 0;
                    target = list->targets[i];
                    if (target->hasEvent != 0) {
                        if (g_gameState.encounterChangeMapId != 0 && target->mapId > 0) {
                            map->mapId = target->mapId;
                        }
                        if (target->sequenceId > 0) {
                            if (target->formatMessage == 0) {
                                sequenceRequestDefer(target->sequenceId, target->sequenceArgument);
                            } else {
                                g_gameState.event.scriptPending = 1;
                                g_gameState.event.scriptId = target->sequenceId;
                                sprintf(g_gameState.event.scriptName, "e%03d_%02d", target->sequenceId,
                                                 target->sequenceArgument);
                            }
                        }
                        mapSetActiveEntryId(target->id);
                        result = target->id;
                        if (target->eventValue > 0) {
                            g_gameState.event.encounterCount = target->eventValue;
                            g_gameState.event.encounterValue = target->eventArgument;
                        }
                    }
                }
                target = list->targets[i];
                if (target != NULL) {
                    s32 kind = target->kind;

                    delete target;
                    list->targets[i] = NULL;
                    if (kind == 0) {
                        list->ordinaryCount--;
                    }
                    list->count--;
                }
            }
        }
    }
    return result;
}

} /* extern "C" */
