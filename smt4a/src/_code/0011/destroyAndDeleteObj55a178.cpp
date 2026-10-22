#include "common.h"

extern "C" void *FUN_003054b8(void *object);
extern "C" void operatorDelete(void *object);

/* Destroy this object before releasing its allocation. */
extern "C" void destroyAndDeleteObj55a178(void *object)
{
    operatorDelete(FUN_003054b8(object));
}
