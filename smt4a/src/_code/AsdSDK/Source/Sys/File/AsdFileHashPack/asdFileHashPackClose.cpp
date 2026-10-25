#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack; /* the open pack */

AsdFileHashPack *_ZN19ResourceVectorOwnerD1Ev(AsdFileHashPack *pack); /* the destructor: returns `this` */
void asdOperatorDelete(AsdFileHashPack *pack);

/* Closes the pack. */
void asdFileHashPackClose(void)
{
    if (g_asdFileHashPack != NULL) {
        asdOperatorDelete(_ZN19ResourceVectorOwnerD1Ev(g_asdFileHashPack));
        g_asdFileHashPack = NULL;
    }
}

} /* extern "C" */
