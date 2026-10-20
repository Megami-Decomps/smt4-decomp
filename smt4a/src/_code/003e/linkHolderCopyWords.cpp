#include "shard/Shard003E.h"

extern "C" {

/* Copies the three words at +0x1B4 of the first link's data into `out`. */
void linkHolderCopyWords(LinkHolder *holder, Words3 *out)
{
    FlagData *data = holder->first->data;

    if (data != NULL) {
        out->w[0] = data->words[0];
        out->w[1] = data->words[1];
        out->w[2] = data->words[2];
    }
}

} /* extern "C" */
