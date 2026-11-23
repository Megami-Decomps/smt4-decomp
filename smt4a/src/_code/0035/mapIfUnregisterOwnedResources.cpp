#include "map/MapIfGlobals.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"

extern "C" {

/* Removes a marker's controller from the current handle registry. */
static __inline void unregisterMarker(Obj557c48 *const &registry, const MapIfModelMarkerA &marker)
{
    if (Obj557b18 *body = marker.resource->body) {
        ptrListRemoveClearOwner(registry, body);
    }
}

/* Unregisters the controllers of the interface's three model markers. */
void mapIfUnregisterOwnedResources()
{
    /* A reference to the registry global, not a copy: retail loads the global's address once at entry (r5, pooled
     * ahead of g_mapIf) and reloads the registry for each marker. Written as g_handleRegistry at each call the
     * pool order differs (10 lines); w86 review: borderline, kept. */
    Obj557c48 *const &registry = g_handleRegistry;
    MapIfStateA *state = g_mapIf.state;
    unregisterMarker(registry, state->modelMarkers[0]);
    unregisterMarker(registry, state->modelMarkers[1]);
    unregisterMarker(registry, state->modelMarkers[2]);
}

} /* extern "C" */
