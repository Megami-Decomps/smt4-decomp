#include "classes/RangeOwner.h"

/* Forwards the listener callback to slot 5 of the primary owner. */
extern "C" void FUN_0050d5b8(RangeListener *listener)
{
    RangeOwner *owner = rangeOwnerFromListener(listener);
    owner->vtable->slot14(owner);
}
