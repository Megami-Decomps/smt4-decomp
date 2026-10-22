/* NON_MATCHING: native cleanup retains this in r4 instead of recovering it from the array member; virtual-call scheduling differs. */
#include "classes/Obj55a800.h"

extern "C" void asdOperatorDeleteArray(void *allocation);

/* Destroys every initialized element before releasing the backing allocation. */
Obj55a800::~Obj55a800()
{
    Obj55a800Element *last = end;
    for (Obj55a800Element *entry = begin; entry != last; ++entry) {
        entry->~Obj55a800Element();
    }
    asdOperatorDeleteArray(begin);
}
