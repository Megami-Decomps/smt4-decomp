#include "shard/Shard003E.h"
#include "shard/linkHolderSetFlag.h"

extern "C" {

/* Sets bit 0 of the flags of the data behind each slot (and the first link). */
void linkHolderSetFlag(LinkHolder *holder)
{
    FlagLink *link;
    FlagData *data;

    if (holder->first->data != NULL) {
        holder->first->data->flags |= 1;
    }
    link = holder->slots[0].link;
    data = NULL;
    if (link != NULL) {
        data = link->data;
    }
    if (link != NULL && data != NULL) {
        data->flags |= 1;
    }
    link = holder->slots[1].link;
    data = NULL;
    if (link != NULL) {
        data = link->data;
    }
    if (link != NULL && data != NULL) {
        data->flags |= 1;
    }
    link = holder->slots[2].link;
    data = NULL;
    if (link != NULL) {
        data = link->data;
    }
    if (link != NULL && data != NULL) {
        data->flags |= 1;
    }
}

} /* extern "C" */
