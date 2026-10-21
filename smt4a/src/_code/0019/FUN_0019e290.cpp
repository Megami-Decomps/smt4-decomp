/* NON_MATCHING: two retail weak cleanup calls were NOPed out; their missing class/callee identities prevent reconstructing the resource release/destructor sequence. */
#include "common.h"

struct PlaceWindow {
    u8 unk0000[0x1218]; // 0x0000
    void* resource;    // 0x1218
};

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
    if (window->resource != NULL) {
        asdOperatorDelete(window->resource);
    }
    window->resource = NULL;
    placeWinRelease();
}
}
