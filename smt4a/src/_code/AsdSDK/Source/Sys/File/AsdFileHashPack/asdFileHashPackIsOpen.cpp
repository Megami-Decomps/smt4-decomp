#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack; /* the open pack */

/* Whether a pack is open. */
u8 asdFileHashPackIsOpen(void)
{
    return g_asdFileHashPack != NULL;
}

} /* extern "C" */
