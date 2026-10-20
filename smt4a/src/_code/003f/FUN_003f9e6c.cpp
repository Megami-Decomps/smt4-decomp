#include "shard/Shard003F.h"

extern "C" {

typedef struct LinkTarget94 {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ s16 unk94;
} LinkTarget94;

typedef struct LinkAt34 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ LinkTarget94 *link;
} LinkAt34;

u8 FUN_003f9e6c(LinkAt34 *obj)
{
    return obj->link->unk94 != 0;
}

} /* extern "C" */
