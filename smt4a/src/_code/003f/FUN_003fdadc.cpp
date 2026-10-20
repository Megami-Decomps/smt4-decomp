#include "shard/Shard003F.h"

extern "C" {

typedef struct LinkTarget84 {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 unk84;
} LinkTarget84;

typedef struct LinkAt210 {
    /* 0x000 */ u8 unk000[0x210];
    /* 0x210 */ LinkTarget84 *link;
} LinkAt210;

u32 FUN_003fdadc(LinkAt210 *obj)
{
    return obj->link->unk84;
}

} /* extern "C" */
