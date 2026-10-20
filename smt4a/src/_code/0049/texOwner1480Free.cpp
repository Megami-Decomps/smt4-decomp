#include "shard/Shard0049.h"

extern "C" {

typedef struct TexOwner1480 {
    /* 0x0000 */ u8 unk0000[0x1480];
    /* 0x1480 */ s32 handle;
} TexOwner1480;

extern void FUN_0019a7f4(s32 a, s32 b);
extern void asdTMTexTableFreeEntry(s32 index);

void texOwner1480Free(TexOwner1480 *obj)
{
    if (obj->handle != 0) {
        FUN_0019a7f4(0x28, obj->handle);
        obj->handle = 0;
    }
    asdTMTexTableFreeEntry(0x28);
}

} /* extern "C" */
