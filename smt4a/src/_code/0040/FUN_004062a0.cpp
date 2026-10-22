#include "classes/Obj557b58.h"

extern "C" void asdOperatorDelete(void *block);
/* armcc destructors return the original allocation in r0. */
extern "C" Obj557b58 *_ZN9Obj557b58D1Ev(Obj557b58 *object);

/* Destroy the owned item array, then release its owner. */
extern "C" void FUN_004062a0(Obj557b58 *object)
{
    asdOperatorDelete(_ZN9Obj557b58D1Ev(object));
}
