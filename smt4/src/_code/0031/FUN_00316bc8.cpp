#include "common.h"

struct Obj00316bc8Inner {
    u8 unk00[4];
    u32 first;
    void *second;
};

struct Obj00316bc8 {
    u8 unk00[0x3c];
    Obj00316bc8Inner *inner;
};

extern "C" {
int bufferObjDestroy(u32 obj);
int asdMemFree(void *block);

/* Destroys the inner record's first block and frees its second. */
void FUN_00316bc8(Obj00316bc8 *obj)
{
    Obj00316bc8Inner *inner = obj->inner;
    bufferObjDestroy(inner->first);
    asdMemFree(inner->second);
}
}
