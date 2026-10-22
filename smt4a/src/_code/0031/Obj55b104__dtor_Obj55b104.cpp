#include "classes/Obj55b104.h"

extern "C" void asdOperatorDeleteArray(void *allocation);

/* Releases the optional allocation before destroying the reference-counted base. */
Obj55b104::~Obj55b104()
{
    if (begin.pointer != NULL) {
        asdOperatorDeleteArray(begin.pointer);
    }
}
