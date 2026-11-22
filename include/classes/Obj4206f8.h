#ifndef CLASSES_OBJ4206F8_H
#define CLASSES_OBJ4206F8_H

#include "common.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
void asdMemFreeNonNull(void *block);
}

/* A cached texture/model resource (vtable at 0x4206f8, named after it until its real name is
 * known): which file it comes from, the loaded buffer and a reference count. Destroying it
 * releases its textures (textureContentRelease). */
class Obj4206f8 {
public:
    /* The constructor eventResourceCacheAcquire inlines: the id, the buffers and the flags start cleared. */
    Obj4206f8()
    {
        id = 0;
        unk10[0] = 0;
        unk10[1] = 0;
        unk10[2] = 0;
        unk10[3] = 0;
        unk10[4] = 0;
        unk10[5] = 0;
        file = NULL;
        unk2c[0] = 0;
        unk2c[1] = 0;
        unk3c = 0;
        unk3d = 0;
        unk44 = 0;
    }
    virtual ~Obj4206f8();
    static void *operator new(u32 bytes, u32 heap) throw() { return asdOperatorNew(bytes, heap); }
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

    /* 0x00: vtable pointer */
    /* 0x04 */ s32 id;          /* id as requested (negative: NPC texture) */
    /* 0x08 */ u32 kind;        /* 4: NPC texture, 12: devil model */
    /* 0x0C */ s32 index;
    /* 0x10 */ u32 unk10[6];
    /* 0x28 */ void *file;      /* file buffer, filled in by the loader */
    /* 0x2C */ u32 unk2c[2];
    /* 0x34 */ u32 unk34[2];
    /* 0x3C */ u8 unk3c;
    /* 0x3D */ u8 unk3d;
    /* 0x3E */ u8 unk3e[2];
    /* 0x40 */ s32 refCount;
    /* 0x44 */ u32 unk44;
};
typedef char Obj4206f8SizeCheck[sizeof(Obj4206f8) == 0x48 ? 1 : -1];

#endif
