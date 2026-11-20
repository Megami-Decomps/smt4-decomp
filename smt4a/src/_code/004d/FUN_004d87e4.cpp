#include "common.h"
#include "battle/btlMain.h"
extern "C" {
u32 moriModelContentIsLoaded(void *object);
/* Tests whether the held object is ready. */
bool FUN_004d87e4(void **holder)
{
    if (*holder != NULL) {
        return moriModelContentIsLoaded(*holder) != 0;
    }
    return false;
}
}
