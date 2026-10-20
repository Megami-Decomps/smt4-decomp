#include "map/mapEplExt.h"

extern "C" {

void FUN_003a1b38(void *object, s32 arg);

extern MapEplExt *DAT_00580c8c;

void FUN_00353484(s32 index, s32 arg)
{
    if (DAT_00580c8c->entries[index].object != NULL) {
        FUN_003a1b38(DAT_00580c8c->entries[index].object, arg);
        return;
    }
}

} /* extern "C" */
