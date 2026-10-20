#include "shard/Shard004F.h"

extern "C" {

typedef struct Obj1F54 {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ u32 unk1F54;
    /* 0x1F58 */ u32 unk1F58;
} Obj1F54;

extern u32 FUN_003c609c(u32 b, u32 a, s32 c, u32 d);

void obj4FQueryPairB(Obj1F54 *obj, u32 a, u32 b, s32 c, u32 d)
{
    obj->unk1F54 = FUN_003c609c(b, a, c != 0, d);
    obj->unk1F58 = FUN_003c609c(b, a, 0, d);
}

} /* extern "C" */
