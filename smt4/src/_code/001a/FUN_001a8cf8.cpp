/* NON_MATCHING: retail hoists -90.0f into fp (here the phase 3 constant takes it) and cross-jumps the retire arms into the model arm's phase store; it also loads the entry heading before moving the angle result, predicates the triggered store before the facing branch and copies the target into s16..s18 in x/y/z order. */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "game/GameState.h"
#include "util/MathFunctions.h"

#define MAP_RANGE_ENTRY_COUNT 16

enum MapRangePhase {
    MAP_RANGE_WAIT = 1,    /* waiting for the encounter source to come close and face the entry */
    MAP_RANGE_TRIGGERED = 2,
    MAP_RANGE_FINISHING = 4,
    MAP_RANGE_DONE = 5,
};

struct MapRangeObjectInner {
    /* 0x000 */ u8 unk000[0x1F6];
    /* 0x1F6 */ u8 visible;
};

struct MapRangeObjectData {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ MapRangeObjectInner *inner;
};

struct MapRangeObject {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ MapRangeObjectData *data;
};

struct MapRangeEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 phase;
    /* 0x08 */ s32 timer;
    /* 0x0C */ MapVector position;
    /* 0x18 */ f32 heading;
    /* 0x1C */ u32 triggered;
    /* 0x20 */ u8 reacting;
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ s32 effectId;
    /* 0x28 */ u8 hasModel;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ AsdMdlObject *model;
    /* 0x30 */ u8 modelVisible;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ s32 objectIndex;
    /* 0x38 */ s32 soundId;
};

struct MapRangeObjectSlot {
    MapRangeObject *object;
    u32 unk04;
};

struct MapRangeWork {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ MapRangeObjectSlot objects[1];
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ MapRangeEntry entries[MAP_RANGE_ENTRY_COUNT];
};

extern "C" {
extern MapRangeWork *g_mapRangeWork;

f32 mathGetShortestAngleDelta(f32 first, f32 second);
f32 mathAbsHeadingErrorToPoint(f32 x, f32 y, f32 z, f32 heading, f32 targetX, f32 targetY, f32 targetZ);
void FUN_002df824(s32 id, s32 flag);
void lmapRequestTimedEffect(s32 a, s32 b, s32 c);
void mapCollisionDisableByTag(s32 id);

/* Advances every active map-range entry: it triggers when the encounter source is close and
 * faces it, plays its sound and effect, then retires its model. */
u32 FUN_001a8cf8(void)
{
    u32 result = 0;
    for (s32 i = 0; i < MAP_RANGE_ENTRY_COUNT; i++) {
        MapRangeEntry *entry = &g_mapRangeWork->entries[i];
        if (!entry->active)
            continue;
        switch (entry->phase) {
        case 0:
        case 3:
            break;
        case MAP_RANGE_WAIT: {
            s32 facing = 0;
            if (g_gameState.event.encounterSourceActive && g_gameState.event.encounterSourceKind != 0) {
                f32 heading = mathPositionHeadingDegrees(entry->position, g_gameState.event.encounterSourcePosition);
                f32 delta = mathGetShortestAngleDelta(entry->heading, heading);
                if (delta > -90.0f && delta < 90.0f)
                    facing = 1;
                MapVector target = entry->position;
                if (mathDistanceBetweenPoints(g_gameState.event.encounterSourcePosition.x, g_gameState.event.encounterSourcePosition.y, g_gameState.event.encounterSourcePosition.z, target.x, target.y, target.z) < 300.0f
                    && mathAbsHeadingErrorToPoint(g_gameState.event.encounterSourcePosition.x,
                                    g_gameState.event.encounterSourcePosition.y,
                                    g_gameState.event.encounterSourcePosition.z,
                                    g_gameState.event.encounterSourceHeading, target.x,
                                    target.y, target.z) < 70.0f
                    && facing) {
                    entry->triggered = 1;
                    SoundActorQueuePosition position = {entry->position.x, entry->position.y + 100.0f,
                                                        entry->position.z};
                    soundActorStartOnFreeChannel(0x10001FB, position);
                    FUN_002df824((s16)entry->effectId, 1);
                    entry->reacting = 1;
                    entry->phase = MAP_RANGE_TRIGGERED;
                    entry->timer = 0;
                }
            }
            break;
        }
        case MAP_RANGE_TRIGGERED:
            entry->timer++;
            if (entry->timer == 2)
                lmapRequestTimedEffect(0xF, 0x1E, 1);
            if (entry->timer == 0x28)
                mapCollisionDisableByTag((s16)entry->soundId);
            if (entry->timer >= 0x3C) {
                if (entry->hasModel) {
                    if (entry->model == NULL)
                        break;
                    asdMdlManagerMarkDestroy(entry->model);
                    entry->modelVisible = 0;
                    entry->phase = MAP_RANGE_FINISHING;
                } else {
                    MapRangeObject *object = g_mapRangeWork->objects[entry->objectIndex].object;
                    object->flags |= 2;
                    object->data->inner->visible = 0;
                    entry->phase = 3;
                }
            }
            break;
        case MAP_RANGE_FINISHING:
            entry->phase = MAP_RANGE_DONE;
            break;
        case MAP_RANGE_DONE:
            if (entry->model != NULL) {
                asdMdlManagerDestroy(entry->model);
                entry->model = NULL;
            }
            entry->active = 0;
            entry->phase = 0;
            break;
        }
    }
    return result;
}

} /* extern "C" */
