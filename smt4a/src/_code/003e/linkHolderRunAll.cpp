#include "shard/Shard003E.h"

extern "C" {

extern void FUN_003fd76c(FlagData *data, u32 *arg);

/* Runs FUN_003fd76c on the first link's data and on the data of each of the three slots. */
void linkHolderRunAll(LinkHolder *holder, u32 *arg)
{
    FlagLink *link;
    FlagData *data;
    s32 i;

    if (holder->first->data != NULL) {
        FUN_003fd76c(holder->first->data, arg);
    }
    for (i = 0; i < 3; i++) {
        link = holder->slots[i].link;
        data = NULL;
        if (link != NULL) {
            data = link->data;
        }
        if (link != NULL && data != NULL) {
            FUN_003fd76c(data, arg);
        }
    }
}

} /* extern "C" */
