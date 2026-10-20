#include "shard/Shard003E.h"

extern "C" {

extern void dataTableFileGetTable(void *p);

void btlGetTable(BtlStateB *state)
{
    if (state->unk2270 != NULL) {
        dataTableFileGetTable(state->unk2270);
    }
}

} /* extern "C" */
