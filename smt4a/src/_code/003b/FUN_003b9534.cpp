#include "common.h"

struct Obj003b9534Inner {
    u8 unk00[4];
    u32 first;
    void *second;
};

struct Obj003b9534 {
    u8 unk00[0x3c];
    Obj003b9534Inner *inner;
};

extern "C" {
void block6Free(u32 handle);
int asdMemFree(void *block);

/* Destroys the inner record's first block and frees its second. */
void FUN_003b9534(Obj003b9534 *obj)
{
    Obj003b9534Inner *inner = obj->inner;
    block6Free(inner->first);
    asdMemFree(inner->second);
}
}
