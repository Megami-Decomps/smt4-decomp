#include "shard/Shard0049.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

typedef struct TexOwner1480 {
    /* 0x0000 */ u8 unk0000[0x1480];
    /* 0x1480 */ s32 handle;
} TexOwner1480;

extern void asdTMTexTableReleaseNode(s32 a, s32 b);

void texOwner1480Free(TexOwner1480 *obj)
{
    if (obj->handle != 0) {
        asdTMTexTableReleaseNode(0x28, obj->handle);
        obj->handle = 0;
    }
    asdTMTexTableFreeEntry(0x28);
}

} /* extern "C" */
