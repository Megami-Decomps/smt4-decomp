#include "shard/Shard004C.h"

extern "C" {

typedef struct PtrAt8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 *target;
} PtrAt8;

extern void FUN_001a6f60(s32 *target, u32 arg);

void ptrAt8Reset(PtrAt8 *obj)
{
    if (obj->target != NULL) {
        FUN_001a6f60(obj->target, 0);
    }
}

} /* extern "C" */
