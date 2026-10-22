#include "shard/Shard0047.h"

extern "C" {

typedef struct VtblPair {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} VtblPair;

extern u8 _ZTV9Obj422214[];

void vtblPairInit55C724(VtblPair *obj)
{
    obj->unk04 = 0;
    obj->vtbl = _ZTV9Obj422214 + 8;
    obj->unk08 = 0;
}

} /* extern "C" */
