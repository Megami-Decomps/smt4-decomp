#include "shard/Shard0041.h"

extern "C" {

typedef struct Flag0C {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 unk0C;
} Flag0C;

void flag0CSet(Flag0C *obj)
{
    obj->unk0C = 1;
}

} /* extern "C" */
