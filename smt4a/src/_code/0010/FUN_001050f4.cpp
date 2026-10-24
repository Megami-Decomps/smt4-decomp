/* The deleting destructor of Obj558650: runs the destructor (FUN_00105100 returns the object) and frees the memory. */
#include "common.h"

extern "C" {
void *FUN_00105100(void *object);
void asdOperatorDeleteArray(void *memory);

void FUN_001050f4(void *object)
{
    asdOperatorDeleteArray(FUN_00105100(object));
}
}
