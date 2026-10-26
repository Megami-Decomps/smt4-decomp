#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

/* The window's owned allocation: the object is released through the sub-object at 0x4F0. */
struct PlaceWindowResource {
    u8 unk0000[0x4F0]; // 0x0000
    u8 sub[1];         // 0x04F0
};

struct PlaceWindow {
    u8 unk0000[0x1218]; // 0x0000
    PlaceWindowResource* resource; // 0x1218
};

static __inline PlaceWindowResource *placeWindowResourceFromSub(void *sub)
{
    return (PlaceWindowResource *)((u8 *)sub - 0x4F0);
}

extern "C" {
void FUN_004b7a54(PlaceWindow* window);
void owner4DDestroy(PlaceWindow* window);
void asdOperatorDelete(void* allocation);
void placeWinRelease(void);

// Releases the place window's owned allocation, then destroys its global window state.
void FUN_0019e290(PlaceWindow* window)
{
    FUN_004b7a54(window);
    owner4DDestroy(window);
    asdDebugHookPtr(window->resource);
    if (window->resource != NULL) {
        asdOperatorDelete(placeWindowResourceFromSub(asdDebugHookPass(&window->resource->sub)));
    }
    window->resource = NULL;
    placeWinRelease();
}
}
