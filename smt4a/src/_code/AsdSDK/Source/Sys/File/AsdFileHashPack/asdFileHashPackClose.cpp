#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack; /* the open pack */

AsdFileHashPack *FUN_00157194(AsdFileHashPack *pack); /* the destructor: returns `this` */
void asdOperatorDelete(AsdFileHashPack *pack);

/* Closes the pack. */
void asdFileHashPackClose(void)
{
    if (g_asdFileHashPack != NULL) {
        asdOperatorDelete(FUN_00157194(g_asdFileHashPack));
        g_asdFileHashPack = NULL;
    }
}

} /* extern "C" */
