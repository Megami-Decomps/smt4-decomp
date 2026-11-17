/* NON_MATCHING: compiler expands only the final 0xcce4 resource access into two ADDs instead of a literal/indexed load. Candidate O1. */
#include "map/MapIfGlobals.h"
#include "Model/MoriModelManager.h"

struct RegistryOwnedObject;

extern "C" {

// Unregister the controllers of the interface's three model markers.
void mapIfUnregisterOwnedResources()
{
    MapIfStateA* state = g_mapIf.state;
    RegistryOwnedObject* object = (RegistryOwnedObject*)state->modelMarkers[0].resource->handle;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
    object = (RegistryOwnedObject*)state->modelMarkers[1].resource->handle;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
    object = (RegistryOwnedObject*)state->modelMarkers[2].resource->handle;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
}
}
