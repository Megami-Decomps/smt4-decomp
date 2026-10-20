#include "shard/Shard003E.h"

extern "C" {

/* Clears bit 0 of the flags of the data behind each slot. */
void linkHolderClearFlag(LinkHolder *holder)
{
    FlagLink *link;
    FlagData *data;

    link = holder->slots[0].link;
    data = NULL;
    if (link != NULL) {
        data = link->data;
    }
    if (link != NULL && data != NULL) {
        data->flags &= ~1;
    }
    link = holder->slots[1].link;
    data = NULL;
    if (link != NULL) {
        data = link->data;
    }
    if (link != NULL && data != NULL) {
        data->flags &= ~1;
    }
    link = holder->slots[2].link;
    data = NULL;
    if (link != NULL) {
        data = link->data;
    }
    if (link != NULL && data != NULL) {
        data->flags &= ~1;
    }
}

} /* extern "C" */
