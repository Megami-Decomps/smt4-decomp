/* NON_MATCHING: retail keeps the slot index in a register and compares it with 16 (cmp r0, #16; blt); armcc turns the loop here into a down-counter, and the vtable pointer is stored after the handle is loaded in retail. */
#include "classes/Obj4214d8.h"

/* Gives the handle back to the owner, then clears both slot arrays. */
Obj4214d8::~Obj4214d8()
{
    if (handle != NULL) {
        owner->release(handle);
    }
    for (int i = 0; i < 16; i++) {
        if (entries[i].object != 0) {
            entries[i].object = 0;
        }
        pairs[i].first = 0;
        pairs[i].second = 0;
    }
}
