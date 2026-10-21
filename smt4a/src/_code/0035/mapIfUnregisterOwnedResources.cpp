/* NON_MATCHING: compiler expands only the final 0xcce4 resource access into two ADDs instead of a literal/indexed load. Candidate O1. */
#include "map/mapIf.h"

struct HandleRegistry;
struct RegistryOwnedObject;

// A prefix view ending at the last of the three registered interface resources.
struct MapIfCleanupView {
    u8 unk0000[0xcc9c];  // 0x0000
    MapIfResource* first; // 0xcc9c
    u8 unkCCA0[0x20];    // 0xcca0
    MapIfResource* second; // 0xccc0
    u8 unkCCC4[0x20];    // 0xccc4
    MapIfResource* third; // 0xcce4
};

extern "C" {
extern MapIfGlobalsA g_mapIf;
extern HandleRegistry* g_handleRegistry;
void ptrListRemoveClearOwner(HandleRegistry*, RegistryOwnedObject*);

// Unregister the owned objects referenced by the interface's three resource nodes.
void mapIfUnregisterOwnedResources()
{
    MapIfCleanupView* state = (MapIfCleanupView*)g_mapIf.state;
    RegistryOwnedObject* object = (RegistryOwnedObject*)state->first->handle;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
    object = (RegistryOwnedObject*)state->second->handle;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
    object = (RegistryOwnedObject*)state->third->handle;
    if (object != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, object);
    }
}
}
