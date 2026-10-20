#include "shard/Shard0045.h"

extern "C" {

typedef struct Obj20 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
} Obj20;

typedef struct OwnerRef20 {
    /* 0x00 */ Obj20 *obj;
} OwnerRef20;

void ownerRef20Clear(OwnerRef20 *ref)
{
    if (ref->obj != NULL) {
        ref->obj->unk20 = 0;
    }
}

} /* extern "C" */
