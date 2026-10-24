#include "common.h"

extern "C" {

void *_ZN9Obj422594D1Ev(void *object);
void asdOperatorDelete(void *block);

/* Deleting destructor: runs the Obj422594 base destructor and releases the allocation. */
void FUN_004a6c08(void *object)
{
    asdOperatorDelete(_ZN9Obj422594D1Ev(object));
}

} /* extern "C" */
