#include "shard/Shard003E.h"

extern "C" {

extern void slots4FGetActiveValue(FlagData *data);

void linkHolderCallFirst(LinkHolder *holder)
{
    if (holder->first->data != NULL) {
        slots4FGetActiveValue(holder->first->data);
    }
}

} /* extern "C" */
