/* NON_MATCHING: vector release uses a member-relative LDRD pair where retail reloads begin/end separately through the owner; initial pair load also moves before vtable store. */
#include "classes/Obj557b58.h"

/* Deletes every item, then frees the array. */
Obj557b58::~Obj557b58()
{
    Obj557b58Item **item = items.begin;
    Obj557b58Item **last = items.end;
    for (; item != last; ++item) {
        if (*item != NULL) {
            delete *item;
        }
    }
}
