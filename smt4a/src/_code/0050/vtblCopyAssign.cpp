#include "shard/Shard0050.h"

extern "C" {

typedef struct VtblCopy VtblCopy;
typedef struct VtblCopyVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ s32 (*slot4)(VtblCopy *obj);
    /* 0x14 */ void *unk14;
    /* 0x18 */ void (*slot6)(VtblCopy *obj, VtblCopy *src);
} VtblCopyVtbl;
struct VtblCopy {
    /* 0x00 */ const VtblCopyVtbl *vtbl;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ s32 unk14;
};

void vtblCopyAssign(u32 unused, VtblCopy *obj, VtblCopy *src)
{
    obj->vtbl->slot6(obj, src);
    if (obj->vtbl->slot4(obj) != 0) {
        obj->unk14 = src->unk14;
    }
}

} /* extern "C" */
