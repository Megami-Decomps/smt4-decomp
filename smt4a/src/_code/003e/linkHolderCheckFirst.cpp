#include "shard/Shard003E.h"
#include "AsdSDK/Source/Util/AsdListHelpers_Smt4a.h"

extern "C" {

extern u32 animationChannelsAllFinished(FlagData *data);

u32 linkHolderCheckFirst(LinkHolder *holder)
{
    FlagData *data = holder->first->data;
    if (data != NULL) {
        return animationChannelsAllFinished(data);
    }
    return 0;
}

} /* extern "C" */
