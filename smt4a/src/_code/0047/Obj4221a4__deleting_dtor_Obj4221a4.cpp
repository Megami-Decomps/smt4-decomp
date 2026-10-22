#include "classes/Obj4221a4.h"

extern "C" {
void *_ZN9Obj422594D1Ev(void *self);
void asdOperatorDelete(void *memory);

/* Retail forwards the base destructor's owner result directly to the deallocator. */
void _ZN9Obj4221a4D0Ev(void *self)
{
    asdOperatorDelete(_ZN9Obj422594D1Ev(self));
}
} /* extern "C" */
