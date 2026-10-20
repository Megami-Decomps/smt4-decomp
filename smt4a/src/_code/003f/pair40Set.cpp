#include "shard/Shard003F.h"

extern "C" {

typedef struct Pair40 {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
} Pair40;

void pair40Set(Pair40 *obj, u32 a, u32 b)
{
    obj->unk40 = a;
    obj->unk44 = b;
}

} /* extern "C" */
