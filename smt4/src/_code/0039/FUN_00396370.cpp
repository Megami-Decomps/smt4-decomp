/* NON_MATCHING: close: retail loads the target position as x then a y/z vldmia pair and moves r0/-1 after the prologue vpush; built groups the VFP loads differently and uses r0 rather than r1 for the list counters */
#include "map/lmapMain.h"
#include <math.h>
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "shard/SaveWork.h"

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

/* The parts of the game state and of the map and player blocks this function touches. */
struct TalkGameState {
    /* 0x000 */ u8 unk000[0x145];
    /* 0x145 */ u8 messagePending;
    /* 0x146 */ u8 unk146[2];
    /* 0x148 */ s32 messageId;
    /* 0x14C */ char messageText[0x4C];
    /* 0x198 */ u8 unk198;
    /* 0x199 */ u8 talkPrompt;
    /* 0x19A */ u8 unk19A[0x1E];
    /* 0x1B8 */ s32 eventValue;
    /* 0x1BC */ s32 eventArgument;
    /* 0x1C0 */ u8 unk1C0[0x1AC];
    /* 0x36C */ s32 mapTalkEnabled;
};
struct TalkMapBlock {
    /* 0x000 */ u8 unk000[0x22];
    /* 0x022 */ s16 mapId;
    /* 0x024 */ u8 unk024[0xD9C];
    /* 0xDC0 */ s32 talkEnabled;
};
struct TalkPlayerData {
    /* 0x00 */ u8 unk00[0x76];
    /* 0x76 */ u8 level;
};

/* Straight-line distance between two map positions. */
static __inline f32 mapVectorDistance(const MapVector &a, const MapVector &b)
{
    f32 dx = a.x - b.x;
    f32 dy = a.y - b.y;
    f32 dz = a.z - b.z;

    return sqrtf(dx * dx + dy * dy + dz * dz);
}

extern "C" {

TalkPlayerData *gameGetPlayerData(void);
void FUN_0027d8b4(u16 value);
void sequenceRequestDefer(s32 id, s32 argument);
void textFormatBuffer(char *buffer, const char *format, ...);
extern LmapScene *g_lmapScene;
extern TalkGameState g_gameState;

/* Picks the nearest interactable within 150 units of the camera, runs its talk or event action and
 * removes it from the list. Returns the id of the last one handled, or -1. */
s32 FUN_00396370(TalkTargetList *list)
{
    s32 result = -1;
    TalkMapBlock *map = reinterpret_cast<TalkMapBlock *>(gameGetMapBlock());
    TalkPlayerData *player = gameGetPlayerData();
    s32 nearest = 999999;
    s32 i;

    for (i = 0; i < 32; i++) {
        TalkTarget *target = list->targets[i];
        s32 distance;

        if (target != NULL && (target->flags & 1) != 0 && (target->flags & 4) == 0) {
            distance = (s32)mapVectorDistance(target->position, *(const MapVector *)g_lmapScene->transform.position);
            if (distance < 150 && distance < nearest) {
                g_gameState.talkPrompt = 0;
                nearest = distance;
                target = list->targets[i];
                if (target->kind == 0) {
                    result = target->id;
                    if (map->talkEnabled != 0 && target->requiredLevel < player->level) {
                        g_gameState.talkPrompt = 1;
                        SoundActorQueuePosition position = {
                            target->position.x * (1.0f / 3.0f),
                            target->position.y * (1.0f / 3.0f),
                            target->position.z * (1.0f / 3.0f)
                        };
                        FUN_00291e40(0x1000187, position);
                    }
                } else if (target->kind == 1) {
                    g_gameState.eventValue = 0;
                    g_gameState.eventArgument = 0;
                    target = list->targets[i];
                    if (target->hasEvent != 0) {
                        if (g_gameState.mapTalkEnabled != 0 && target->mapId > 0) {
                            map->mapId = target->mapId;
                        }
                        if (target->sequenceId > 0) {
                            if (target->formatMessage == 0) {
                                sequenceRequestDefer(target->sequenceId, target->sequenceArgument);
                            } else {
                                g_gameState.messagePending = 1;
                                g_gameState.messageId = target->sequenceId;
                                textFormatBuffer(g_gameState.messageText, "e%03d_%02d", target->sequenceId,
                                                 target->sequenceArgument);
                            }
                        }
                        FUN_0027d8b4(target->id);
                        result = target->id;
                        if (target->eventValue > 0) {
                            g_gameState.eventValue = target->eventValue;
                            g_gameState.eventArgument = target->eventArgument;
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
