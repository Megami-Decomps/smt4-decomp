#include "shard/Shard004F.h"

extern "C" {

typedef struct Obj1F54 {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ void *unk1F54;
    /* 0x1F58 */ void *unk1F58;
} Obj1F54;

extern void *dataTableSelectParameterVariant(s32 variant, u32 category, s32 invert, s32 mode);

void obj4FQueryPairB(Obj1F54 *obj, u32 a, u32 b, s32 c, u32 d)
{
    obj->unk1F54 = dataTableSelectParameterVariant(b, a, c != 0, d);
    obj->unk1F58 = dataTableSelectParameterVariant(b, a, 0, d);
}

} /* extern "C" */
