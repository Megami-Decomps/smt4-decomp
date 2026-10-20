#include "shard/Shard003E.h"

extern "C" {

extern void FUN_003fe86c(FlagData *data, u32 value, u32 mode);

void linkHolderApplyFirst(LinkHolder *holder, u32 value)
{
    FlagData *data = holder->first->data;

    if (data != NULL) {
        FUN_003fe86c(data, value, 2);
    }
}

} /* extern "C" */
