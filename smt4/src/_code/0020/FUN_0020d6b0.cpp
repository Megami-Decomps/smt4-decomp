#include "map/mapIf.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"

extern "C" {
extern MapIfState *g_mapIf;
extern GameState g_gameState;
NodeEnableNode *asdMdlManagerCreateFromSource(u32 source, u32 size, u32 flags);
void FUN_002a0428(NodeEnableNode *model, s32 enabled);
void mapMarkerSynchronizeModelState(MapIfModelMarker *marker);

// A local view avoids raising alignment inside GameState's byte padding.
struct MarkerSources {
    u8 prefix[0x2C8];
    u32 firstSource, firstSize;
    u32 secondSource, secondSize;
};

static inline const MarkerSources *markerSources()
{
    return reinterpret_cast<const MarkerSources *>(&g_gameState);
}

// Load and reset the two model-backed map interface markers.
void FUN_0020d6b0()
{
    MapIfState *interfaceState = g_mapIf;
    MapIfModelMarker *first = &interfaceState->modelMarkers[0];
    first->model = asdMdlManagerCreateFromSource(markerSources()->firstSource, markerSources()->firstSize, 7);
    FUN_002a0428(first->model, 1);
    NodeEnableNode *firstModel = first->model;
    firstModel->flags |= 2;
    firstModel->resource->target->enabled = 0;
    first->active = 1;
    first->state = 0;
    first->flags = 0;
    first->first = 0;
    first->second = 0;
    first->position[0] = 0.0f;
    first->position[1] = 0.0f;
    first->position[2] = 0.0f;
    first->heading = 0.0f;
    first->elapsed = 0;
    mapMarkerSynchronizeModelState(first);
    MapIfModelMarker *second = &interfaceState->modelMarkers[1];
    second->model = asdMdlManagerCreateFromSource(markerSources()->secondSource, markerSources()->secondSize, 7);
    FUN_002a0428(second->model, 1);
    NodeEnableNode *secondModel = second->model;
    secondModel->flags |= 2;
    secondModel->resource->target->enabled = 0;
    second->active = 1;
    second->state = 0;
    second->flags = 0;
    second->first = 0;
    second->second = 0;
    second->position[0] = 0.0f;
    second->position[1] = 0.0f;
    second->position[2] = 0.0f;
    second->heading = 0.0f;
    second->elapsed = 0;
    mapMarkerSynchronizeModelState(second);
}
}
