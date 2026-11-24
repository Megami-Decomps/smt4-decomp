#include "classes/Obj4214d8.h"

/* Gives the handle back to the owner and clears the tables. */
Obj4214d8::~Obj4214d8()
{
    if (handle != 0) {
        owner->release(handle);
    }
    for (int i = 0; i < 16; i++) {
        if (entries[i].object != 0) {
            entries[i].object = 0;
        }
        pairs[i] = Obj4214d8Pair();
    }
}
