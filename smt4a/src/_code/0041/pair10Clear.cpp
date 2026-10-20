#include "shard/Shard0041.h"

extern "C" {

typedef struct Pair10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
} Pair10;

void pair10Clear(Pair10 *obj)
{
    obj->unk10 = 0;
    obj->unk14 = 0;
}

} /* extern "C" */
