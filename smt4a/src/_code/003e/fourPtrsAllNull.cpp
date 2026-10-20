#include "shard/Shard003E.h"

extern "C" {

typedef struct FourPtrs {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *unk04;
    /* 0x08 */ u8 unk08[0x14];
    /* 0x1C */ void *unk1C;
    /* 0x20 */ u8 unk20[0x58];
    /* 0x78 */ void *unk78;
    /* 0x7C */ u8 unk7C[0x58];
    /* 0xD4 */ void *unkD4;
} FourPtrs;

/* True when none of the four pointers at +0x04, +0x1C, +0x78 and +0xD4 is set. */
u32 fourPtrsAllNull(FourPtrs *obj)
{
    if (obj->unk04 == NULL && obj->unk1C == NULL && obj->unk78 == NULL && obj->unkD4 == NULL) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
