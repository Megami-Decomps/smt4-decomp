/* NON_MATCHING: two erased destructor calls inside the owned-object cleanup have no surviving callee identities; retail also retains their member-address adjustments. */
#include "common.h"

struct PlaceWindowWork {
    u8 unk000[0xe5c]; // 0x000
    void* owned;      // 0xe5c
};

extern "C" {
void FUN_003b8b0c();
void FUN_003b980c(PlaceWindowWork* work);
void asdMemFreeNonNull(void* memory);
void placeWinRelease();

// Release the place-window owned object and finish the window's cleanup.
void FUN_002a7838(PlaceWindowWork* work)
{
    FUN_003b8b0c();
    FUN_003b980c(work);
    if (work->owned != NULL) {
        asdMemFreeNonNull(work->owned);
    }
    work->owned = NULL;
    placeWinRelease();
}
}
