/* NON_MATCHING: the table loop is compiled as a count-down loop (r2 = 16) instead of testing the index, and the vtable
 * store and the handle load are scheduled in the other order */
#include "classes/Obj4214d8.h"

/* Gives the handle back to the owner and clears the tables. */
Obj4214d8::~Obj4214d8()
{
    if (handle != 0) {
        owner->release(handle);
    }
    for (u32 i = 0; i < 16; i++) {
        if (entries[i].object != NULL) {
            entries[i].object = NULL;
        }
        pairs[i].first = 0;
        pairs[i].second = 0;
    }
}
