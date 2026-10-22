#include "classes/Obj55a218.h"

extern "C" void operatorDelete(void *block);
/* armcc destructors return the original allocation in r0. */
extern "C" Obj55a218 *_ZN9Obj55a218D1Ev(Obj55a218 *object);

/* Destroy and release a concrete object. */
extern "C" void FUN_00119d68(Obj55a218 *object)
{
    operatorDelete(_ZN9Obj55a218D1Ev(object));
}
