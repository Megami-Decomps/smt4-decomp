#include "common.h"

extern "C" void FUN_004afe50(void *object);

/* Share the implementation used by the neighboring view. */
extern "C" void FUN_004acf74(void *object)
{
    FUN_004afe50(object);
}
