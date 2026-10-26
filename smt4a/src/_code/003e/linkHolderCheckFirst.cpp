#include "shard/Shard003E.h"
#include "AsdSDK/Source/Util/AsdListHelpers_Smt4a.h"

extern "C" {

extern u32 FUN_004ffba8(FlagData *data);

void linkHolderCheckFirst(LinkHolder *holder)
{
    if (holder->first->data != NULL) {
        FUN_004ffba8(holder->first->data);
    }
}

} /* extern "C" */
