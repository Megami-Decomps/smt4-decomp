#include "common.h"
#include "battle/btlMain.h"
extern "C" {
u32 FUN_0040ab8c(void *object);
/* Tests whether the held object is ready. */
bool FUN_004d87e4(void **holder)
{
    if (*holder != NULL) {
        return FUN_0040ab8c(*holder) != 0;
    }
    return false;
}
}
