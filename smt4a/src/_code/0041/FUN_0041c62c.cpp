#include "classes/Obj557dcc.h"
extern "C" Obj557dcc *_ZN9Obj557dccD1Ev(Obj557dcc *object);
extern "C" void asdOperatorDelete(void *object);

/* Destroy the object before releasing its allocation. */
extern "C" void FUN_0041c62c(Obj557dcc *object)
{
    asdOperatorDelete(_ZN9Obj557dccD1Ev(object));
}
