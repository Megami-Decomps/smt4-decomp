/* NON_MATCHING: retail shrink-wraps the null guard before the push (`ldr r1,[pc]; ldr r2,[r1]; cmp; moveq r0,#0; bxeq lr`); armcc here pushes first. */
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack;
AsdHashPackEntry *asdFileHashPackFindNamedEntry(AsdFileHashPack *index, const char *path);

/* Whether the open pack holds `path`. */
u8 asdFileHashPackContains(const char *path)
{
    AsdFileHashPack *pack = g_asdFileHashPack;
    if (pack == NULL)
        return 0;
    return asdFileHashPackFindNamedEntry(pack, path) != NULL;
}
}
