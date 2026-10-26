/* NON_MATCHING: jump table now matches (labels 0..5); the vector copies use ldm/stm where retail uses ldrd/strd and the map ternaries share a zero register differently. */
#include "map/lmapMain.h"

extern "C" {
extern LmapMainState *g_lmapMainState;
extern LmapScene *g_lmapScene;
extern GameState g_gameState;
void mapCollisionRelease();
void FUN_0027b2b4(s32 map, u32 entry, s32 secondaryMap, s32 mode);
void FUN_002d508c(LmapMainState *state);
void FUN_00266a2c();
void FUN_00281784();
void mapInitializeStoryMarkerEffects(u32 map);
void objSetBaseAndValue(LmapObj *object, s32 base, u32 value);
void entryListCollectMatches(LmapObj *object);

// Raise the scene over thirty frames, then restore story-marker tracking on completion.
u32 FUN_002fb7dc()
{
    // The shared state's padding begins at unaligned 0x09 and its tracker is only a prefix.
    struct EntryTransitionView {
        u8 prefix[0xB];
        u8 frozen;
        u8 padding0C[0xC];
        u32 phase;
        s32 frame;
        MapVector start;
        MapVector end;
        u8 padding38[8];
        s32 map;
        u8 padding44[4];
        u32 entry;
        u8 padding4C[0x44];
        f32 distance;
        u8 padding94[0x48];
        f32 alpha;
        u8 dirty;
        u8 paddingE1[0xB];
        u32 trackerFlags;
    };
    typedef char EntryTransitionOffsetsCheck[offsetof(EntryTransitionView, phase) == 0x18 &&
        offsetof(EntryTransitionView, start) == 0x20 && offsetof(EntryTransitionView, alpha) == 0xDC &&
        offsetof(EntryTransitionView, trackerFlags) == 0xEC ? 1 : -1];
    EntryTransitionView *transition = reinterpret_cast<EntryTransitionView *>(g_lmapMainState);
    switch (transition->phase) {
    case 0:
        transition->start = *reinterpret_cast<const MapVector *>(g_lmapScene->transform.position);
        transition->end = transition->start;
        transition->end.y = 800.0f;
        transition->alpha = 0.0f;
        transition->dirty = 1;
        transition->entry = 99;
        g_gameState.unk004Value = 99;
        mapCollisionRelease();
        FUN_0027b2b4(transition->map, transition->entry,
            transition->map == 101 ? 101 : 0, transition->map == 101 ? 10 : 0);
        transition->phase = 1;
        transition->frame = 0;
        break;
    case 1:
        FUN_002d508c(g_lmapMainState);
        ++transition->frame;
        g_lmapScene->transform.position[1] = transition->start.y +
            (transition->end.y - transition->start.y) * (f32)transition->frame * 0.033333335f;
        if (transition->frame >= 30) {
            g_gameState.unk18 = 0;
            g_gameState.entryTransition.completed = 1;
            transition->alpha = 1.0f;
            transition->dirty = 1;
            transition->phase = 2;
        }
        break;
    case 2:
        FUN_002d508c(g_lmapMainState);
        break;
    case 3:
    case 4:
        break;
    case 5:
        transition->distance = 200.0f;
        FUN_00266a2c();
        transition = reinterpret_cast<EntryTransitionView *>(g_lmapMainState);
        transition->frozen = 0;
        transition->trackerFlags &= ~2;
        FUN_00281784();
        mapInitializeStoryMarkerEffects(transition->map);
        LmapObj *tracker = reinterpret_cast<LmapObj *>(&transition->trackerFlags);
        objSetBaseAndValue(tracker, transition->map - 100, transition->entry);
        entryListCollectMatches(tracker);
        g_gameState.unk18 = 0;
        g_gameState.entryTransition.completed = 1;
        break;
    }
    return 0;
}
}
