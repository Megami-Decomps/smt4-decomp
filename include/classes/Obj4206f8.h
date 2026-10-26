#ifndef CLASSES_OBJ4206F8_H
#define CLASSES_OBJ4206F8_H

#include "common.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
int asdMemFreeNonNull(void *block);
}

/* A cached texture/model resource (vtable at 0x4206f8, named after it until its real name is
 * known): which file it comes from, the loaded buffer and a reference count. Destroying it
 * releases its textures (textureContentRelease). */
class Obj4206f8 {
public:
    virtual ~Obj4206f8();
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x44];
};
typedef char Obj4206f8SizeCheck[sizeof(Obj4206f8) == 0x48 ? 1 : -1];

#endif
