/* NON_MATCHING: the inlined array release is scheduled differently (the array pointers are reloaded
 * relative to this, in r0/r1/r3, instead of loaded as a pair through the member's address) */
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
