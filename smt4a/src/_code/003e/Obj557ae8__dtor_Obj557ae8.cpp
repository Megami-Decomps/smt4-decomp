/* NON_MATCHING: the slot address this + 92*i is computed in r1 instead of r0 (otherwise identical) */
#include "classes/Obj557ae8.h"

/* Deletes the three slots' objects, then the object it owns. */
Obj557ae8::~Obj557ae8()
{
    for (s32 i = 0; i < 3; i++) {
        Obj557ae8Slot *slot = &slots[i];
        if (slots[i].child != NULL) {
            delete slot->child;
            slot->child = NULL;
        }
    }
    if (owned != NULL) {
        delete owned;
        owned = NULL;
    }
}
