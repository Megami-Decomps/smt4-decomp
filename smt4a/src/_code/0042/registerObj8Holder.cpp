#include "shard/Shard0042.h"

extern "C" {

typedef struct Obj8Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 unk08;
} Obj8Holder;

extern u8 DAT_00643310;
extern void FUN_001bd438(u8 *dst, Obj8Holder *obj);

void registerObj8Holder(Obj8Holder *obj)
{
    if (obj->unk08 != 0) {
        FUN_001bd438(&DAT_00643310, obj);
    }
}

} /* extern "C" */
