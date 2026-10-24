#include "common.h"

extern "C" {

void asdOperatorDelete(void *block);

/* Releases the object's allocation. */
void _ZN9Obj557b287vfunc14Ev(void *object)
{
    asdOperatorDelete(object);
}

} /* extern "C" */
