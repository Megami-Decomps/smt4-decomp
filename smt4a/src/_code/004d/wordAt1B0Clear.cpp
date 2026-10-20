#include "shard/Shard004D.h"

extern "C" {

typedef struct WordAt1B0 {
    /* 0x000 */ u8 unk000[0x1B0];
    /* 0x1B0 */ u32 unk1B0;
} WordAt1B0;

void wordAt1B0Clear(WordAt1B0 *obj)
{
    obj->unk1B0 = 0;
}

} /* extern "C" */
