#include "shard/Shard0047.h"

extern "C" {

typedef struct VtblPair {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} VtblPair;

extern u8 DAT_0055c724;

void vtblPairInit55C724(VtblPair *obj)
{
    obj->unk04 = 0;
    obj->vtbl = &DAT_0055c724;
    obj->unk08 = 0;
}

} /* extern "C" */
