#include "common.h"

extern "C" {

extern void FUN_00123934(void *object);
extern void FUN_002b4828(void *object);
void FUN_002b4810(void *object, void *second)
{
    FUN_00123934(object);
    FUN_002b4828(second);
}

} /* extern "C" */
