/* NON_MATCHING: compiler folds the interface-member offset into the large address adjustment. */
#include "common.h"
extern "C" {
struct MapInterface {
    u8 unk00[0xCBDC];
    struct { u8 unk00[0x1C]; struct { u32 unk00; void *owner; } *handle; } interface;
};
extern MapInterface *g_mapIf;
extern void *g_handleRegistry;
void ptrListRemoveClearOwner(void *list, void *owner);
/* Removes the map interface handle from the owner registry. */
void FUN_002d871c(void) {
    ptrListRemoveClearOwner(g_handleRegistry, g_mapIf->interface.handle->owner);
}
}
