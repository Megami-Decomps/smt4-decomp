#include "map/mapDepart.h"
#include "map/SavedMapTransition.h"

extern "C" {
extern GameStateA g_gameState;
SavedMapTransition *gameBlockGetArea27E98(void);
void FUN_00324c48(s32 map, s32 area, s32 entrance, f32 x, f32 y, f32 z, f32 heading, f32 cameraHeading);
void asdSequenceRequest(u32 sequence, const void *arguments, u32 size);
void mapPlaceSet(s32 place, u32 options, u32 argument);
void FUN_004731d8(void);

// Restore the saved field, dungeon, or world-map destination and optionally change sequence.
u32 mapRestoreSavedDestination(u32 request, s32 changeSequence)
{
    SavedMapTransition *saved = gameBlockGetArea27E98();
    u32 restored = 0;
    switch (saved->kind) {
    case 1:
        restored = 1;
        FUN_00324c48(saved->map, saved->area, saved->entrance,
                     saved->position[0], saved->position[1], saved->position[2], saved->heading, saved->cameraHeading);
        if (changeSequence) {
            asdSequenceRequest(6, NULL, 0);
            g_gameState.transitionActive = 0;
        }
        break;
    case 2:
        restored = 1;
        FUN_00324c48(saved->map + 100, saved->area, -1,
                     saved->position[0], saved->position[1], saved->position[2], saved->heading, saved->cameraHeading);
        g_gameState.currentObjectId = -1;
        if (changeSequence) {
            asdSequenceRequest(8, NULL, 0);
            g_gameState.transitionActive = 0;
        }
        break;
    case 3:
        restored = 1;
        if (changeSequence) {
            u32 map = saved->map;
            asdSequenceRequest(14, &map, sizeof(map));
            g_gameState.transitionActive = 0;
        } else {
            mapPlaceSet(saved->map + 200, 0, 0);
        }
        break;
    }
    FUN_004731d8();
    return restored;
}
}
