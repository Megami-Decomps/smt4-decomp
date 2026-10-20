#include "shard/Shard0045.h"

extern "C" {

typedef struct Word14 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
} Word14;

void word14Clear(Word14 *obj)
{
    obj->unk14 = 0;
}

} /* extern "C" */
