/* NON_MATCHING: only the literal pool order differs: retail pools g_handleRegistry ahead of g_mapIf (it loads the
 * registry address into r5 at entry); the build pools g_mapIf first. */
#include "map/MapIfGlobals.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriModelContent.h"

extern "C" {

static __inline void unregisterMarker(const MapIfModelMarkerA &marker)
{
    if (Obj557b18 *body = marker.resource->body) {
        ptrListRemoveClearOwner(g_handleRegistry, body);
    }
}

// Unregister the controllers of the interface's three model markers.
void mapIfUnregisterOwnedResources()
{
    MapIfStateA *state = g_mapIf.state;
    unregisterMarker(state->modelMarkers[0]);
    unregisterMarker(state->modelMarkers[1]);
    unregisterMarker(state->modelMarkers[2]);
}
}
