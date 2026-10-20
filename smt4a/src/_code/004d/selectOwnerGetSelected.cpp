#include "shard/Shard004D.h"

extern "C" {

s32 selectOwnerGetSelected(SelectOwner *obj)
{
    if (obj->active != 0) {
        return obj->selected;
    }
    return -1;
}

} /* extern "C" */
