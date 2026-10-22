#include "classes/Obj5596dc.h"

extern "C" Obj5596dc *_ZN9Obj5596dcD1Ev(Obj5596dc *object);
extern "C" void asdOperatorDeleteArray(void *object);

/* Destroy this embedded-object owner before freeing its array allocation. */
extern "C" void _ZN9Obj5596dcD0Ev(Obj5596dc *object)
{
    asdOperatorDeleteArray(_ZN9Obj5596dcD1Ev(object));
}
