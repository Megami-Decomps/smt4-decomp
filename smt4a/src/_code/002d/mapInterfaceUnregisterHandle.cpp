#include "common.h"
extern "C" {
struct MapRegisteredHandle {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *owner;
};
struct MapOwnerInterface {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ MapRegisteredHandle *handle;
};
struct MapInterface {
    /* 0x0000 */ u8 unk00[0xCBDC];
    /* 0xCBDC */ MapOwnerInterface interface;
};
extern MapInterface *g_mapIf;
extern void *g_handleRegistry;
void ptrListRemoveClearOwner(void *list, void *owner);
/* Removes the map interface handle from the owner registry. */
void mapInterfaceUnregisterHandle(void) {
    MapOwnerInterface *interface = &g_mapIf->interface;
    MapRegisteredHandle *handle = interface->handle;
    ptrListRemoveClearOwner(g_handleRegistry, handle->owner);
}
}
