/* NON_MATCHING: the slot index scale (i * 5) is built in r0 instead of r1. */
#include "classes/Obj4206e8.h"

/* Releases each slot's handle and buffer, then the object's own handle. */
Obj4206e8::~Obj4206e8()
{
    for (int i = 0; i < 3; i++) {
        slots[i].release();
    }
    if (handle != 0) {
        asdMdlManagerDestroy(handle);
        handle = 0;
    }
}
