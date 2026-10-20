#include "shard/Shard004D.h"

extern "C" {

void selectOwnerReset(SelectOwner *obj)
{
    obj->unk11 = 0;
    obj->selected = -1;
    obj->active = 0;
}

} /* extern "C" */
