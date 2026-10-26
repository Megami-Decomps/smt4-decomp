#include "shard/Shard003E.h"
#include "AsdSDK/Source/Util/AsdListHelpers_Smt4a.h"

extern "C" {

extern void controllerSetDestination(FlagData *data, u32 *arg);

/* Runs controllerSetDestination on the first link's data and on the data of each of the three slots. */
void linkHolderRunAll(LinkHolder *holder, u32 *arg)
{
    FlagLink *link;
    FlagData *data;
    s32 i;

    if (holder->first->data != NULL) {
        controllerSetDestination(holder->first->data, arg);
    }
    for (i = 0; i < 3; i++) {
        link = holder->slots[i].link;
        data = NULL;
        if (link != NULL) {
            data = link->data;
        }
        if (link != NULL && data != NULL) {
            controllerSetDestination(data, arg);
        }
    }
}

} /* extern "C" */
