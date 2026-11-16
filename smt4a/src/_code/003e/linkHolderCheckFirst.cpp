#include "shard/Shard003E.h"
#include "AsdSDK/Source/Util/AsdListHelpers_Smt4a.h"

extern "C" {

extern u32 animationChannelsAllFinished(FlagData *data);

void linkHolderCheckFirst(LinkHolder *holder)
{
    if (holder->first->data != NULL) {
        animationChannelsAllFinished(holder->first->data);
    }
}

} /* extern "C" */
