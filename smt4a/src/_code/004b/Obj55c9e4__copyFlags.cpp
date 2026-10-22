#include "classes/SelectionState.h"

// Copy the common active and kind values without replacing the vtable.
extern "C" void _ZN9Obj55c9e49copyFlagsEPK20SelectionValueRecord(SelectionValueRecord *destination, const SelectionValueRecord *source)
{
    destination->active = source->active;
    destination->kind = source->kind;
}
