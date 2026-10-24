#include "common.h"

struct Obj0031d480Inner {
    u8 unk00[4];
    u32 first;
    void *second;
};

struct Obj0031d480 {
    u8 unk00[0x3c];
    Obj0031d480Inner *inner;
};

extern "C" {
int bufferObjDestroy(u32 obj);
int asdMemFree(void *block);

/* Destroys the inner record's first block and frees its second. */
void FUN_0031d480(Obj0031d480 *obj)
{
    Obj0031d480Inner *inner = obj->inner;
    bufferObjDestroy(inner->first);
    asdMemFree(inner->second);
}
}
