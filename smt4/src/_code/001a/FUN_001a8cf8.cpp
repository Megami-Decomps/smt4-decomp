/* NON_MATCHING: retail spills the zero return value to the stack and hoists 0/5/100.0f into r9/sl/s19 with the loop index in r5 (built: r4/r8); the switch jump table and call sequence are identical */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/MdlManagerDestroy.h"

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
    /* 0x2C */ s32 model;
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
extern GameState g_gameState;

f32 mathPositionHeadingDegrees(MapVector from, MapVector to);
f32 mathGetShortestAngleDelta(f32 first, f32 second);
f32 mathDistanceBetweenPoints(MapVector first, MapVector second);
f32 mathAbsHeadingErrorToPoint(f32 x, f32 y, f32 z, f32 heading, f32 targetX, f32 targetY, f32 targetZ);
void FUN_002df824(s32 id, s32 flag);
void FUN_002879dc(s32 a, s32 b, s32 c);
void FUN_002878fc(s32 id);

/* Advances every active map-range entry: it triggers when the encounter source is close and
 * faces it, plays its sound and effect, then retires its model. */
u32 FUN_001a8cf8(void)
{
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
            if (g_gameState.encounterSourceActive && g_gameState.encounterSourceKind != 0) {
                f32 heading = mathPositionHeadingDegrees(entry->position, g_gameState.encounterSourcePosition);
                f32 delta = mathGetShortestAngleDelta(entry->heading, heading);
                if (delta > -90.0f && delta < 90.0f)
                    facing = 1;
                if (mathDistanceBetweenPoints(g_gameState.encounterSourcePosition, entry->position) < 300.0f
                    && mathAbsHeadingErrorToPoint(g_gameState.encounterSourcePosition.x,
                                    g_gameState.encounterSourcePosition.y,
                                    g_gameState.encounterSourcePosition.z,
                                    g_gameState.encounterSourceHeading, entry->position.x,
                                    entry->position.y, entry->position.z) < 70.0f
                    && facing) {
                    entry->triggered = 1;
                    SoundActorQueuePosition position = {entry->position.x, entry->position.y + 100.0f,
                                                        entry->position.z};
                    FUN_00291e40(0x10001FB, position);
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
                FUN_002879dc(0xF, 0x1E, 1);
            if (entry->timer == 0x28)
                FUN_002878fc((s16)entry->soundId);
            if (entry->timer >= 0x3C) {
                u32 next;
                if (entry->hasModel) {
                    if (entry->model == 0)
                        break;
                    asdMdlManagerMarkDestroy(entry->model);
                    entry->modelVisible = 0;
                    next = MAP_RANGE_FINISHING;
                } else {
                    MapRangeObject *object = g_mapRangeWork->objects[entry->objectIndex].object;
                    object->flags |= 2;
                    object->data->inner->visible = 0;
                    next = 3;
                }
                entry->phase = next;
            }
            break;
        case MAP_RANGE_FINISHING:
            entry->phase = MAP_RANGE_DONE;
            break;
        case MAP_RANGE_DONE:
            if (entry->model != 0) {
                asdMdlManagerDestroy(reinterpret_cast<AsdMdlObject *>(entry->model));
                entry->model = 0;
            }
            entry->active = 0;
            entry->phase = 0;
            break;
        }
    }
    return 0;
}

} /* extern "C" */
