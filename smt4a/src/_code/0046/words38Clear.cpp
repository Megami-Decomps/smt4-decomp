#include "shard/Shard0046.h"

extern "C" {

typedef struct Words38 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
} Words38;

void words38Clear(Words38 *obj)
{
    obj->unk38 = 0;
    obj->unk3C = 0;
    obj->unk40 = 0;
}

} /* extern "C" */
