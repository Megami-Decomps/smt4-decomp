#include "shard/Shard003E.h"

extern "C" {

struct Slots4F;
extern u32 slots4FGetActiveValue(Slots4F *data);

s32 linkHolderCallFirst(LinkHolder *holder)
{
    FlagData *data = holder->first->data;
    if (data != NULL) {
        return static_cast<s32>(slots4FGetActiveValue(reinterpret_cast<Slots4F *>(data)));
    }
    return 0;
}

} /* extern "C" */
