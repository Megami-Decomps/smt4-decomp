/* NON_MATCHING: only the slot-entry test loads with a writeback (`ldr r3, [r2, #16]!`) where retail keeps `ldr r3, [r2, #16]` and `strne r1, [r2, #16]`. */
#include "classes/Obj4214d8.h"

/* Gives the handle back to the owner, then clears both slot arrays. */
Obj4214d8::~Obj4214d8()
{
    if (handle != NULL) {
        owner->release(handle);
    }
    for (int i = 0; i < 16; i++) {
        Obj4214d8Entry *entry = &entries[i];
        if (entry->object != 0) {
            entry->object = 0;
        }
        pairs[i].first = 0;
        pairs[i].second = 0;
    }
}
