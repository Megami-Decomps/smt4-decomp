#include "shard/Shard004F.h"

extern "C" {

extern void effectColorOverrideBeginFadeToGray(void);

void state339CFinish(State339C *obj)
{
    if ((obj->flags & 4) != 0) {
        effectColorOverrideBeginFadeToGray();
        obj->flags = (obj->flags & 0xFFFFFFFB) | 8;
    }
}

} /* extern "C" */
