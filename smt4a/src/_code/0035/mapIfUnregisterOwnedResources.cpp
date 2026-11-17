/* NON_MATCHING: compiler expands only the final 0xcce4 resource access into two ADDs instead of a literal/indexed load. Candidate O1. */
#include "map/MapIfGlobals.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"

extern "C" {

// Unregister the controllers of the interface's three model markers.
void mapIfUnregisterOwnedResources()
{
    MapIfStateA* state = g_mapIf.state;
    Obj557b18* object = state->modelMarkers[0].resource->body;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
    object = state->modelMarkers[1].resource->body;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
    object = state->modelMarkers[2].resource->body;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
}
}
