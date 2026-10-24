/* NON_MATCHING: same calls and stores; retail sets the three trailing call arguments in ascending order (r1, r2, r3) where armcc sets them descending */
#include "AsdSDK/Source/Sys/File/AsdFileHashPack.h"

extern "C" {
extern AsdFileHashPack *g_asdFileHashPack; /* the open pack */

AsdFileHashPack *FUN_00157194(AsdFileHashPack *pack); /* the destructor: returns `this` */
void asdOperatorDelete(AsdFileHashPack *pack);
void *FUN_00178b04(u32 size, const char *file, int line);
s32 asdFileHashPackLoad(AsdFileHashPack *pack, const char *path, const char *streamPath, u32 arg);

/* Replaces the open pack with a new, empty one and loads `path` into it (see asdFileHashPackLoad). */
s32 asdFileHashPackOpen(const char *path, const char *streamPath, u32 arg)
{
    AsdFileHashPack *pack;

    if (g_asdFileHashPack != NULL) {
        asdOperatorDelete(FUN_00157194(g_asdFileHashPack));
    }
    pack = (AsdFileHashPack *)FUN_00178b04(sizeof(AsdFileHashPack), "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\File\\AsdFileHashPack.cpp", 754);
    if (pack != NULL) {
        pack->data = NULL;
        pack->hashes = NULL;
        pack->entries = NULL;
        pack->names = NULL;
        pack->stream = NULL;
        *(u32 *)&pack->unk14[0] = 0;
        *(u32 *)&pack->unk14[4] = 0;
        *(u32 *)&pack->unk14[8] = 0;
        *(u32 *)&pack->unk14[12] = 0;
    }
    g_asdFileHashPack = pack;
    return asdFileHashPackLoad(pack, path, streamPath, arg);
}

} /* extern "C" */
