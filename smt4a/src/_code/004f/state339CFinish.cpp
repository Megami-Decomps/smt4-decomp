#include "shard/Shard004F.h"

extern "C" {

extern void FUN_0031b9d4(void);

void state339CFinish(State339C *obj)
{
    if ((obj->flags & 4) != 0) {
        FUN_0031b9d4();
        obj->flags = (obj->flags & 0xFFFFFFFB) | 8;
    }
}

} /* extern "C" */
