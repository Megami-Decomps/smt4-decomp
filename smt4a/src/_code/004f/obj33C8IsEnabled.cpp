#include "shard/Shard004F.h"

extern "C" {

typedef struct Link8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 flags;
} Link8;

typedef struct Obj33C8 {
    /* 0x0000 */ u8 unk0000[0x339C];
    /* 0x339C */ u32 flags339C;
    /* 0x33A0 */ u8 unk33A0[0x28];
    /* 0x33C8 */ Link8 *link;
} Obj33C8;

u32 obj33C8IsEnabled(Obj33C8 *obj)
{
    if (obj->link != NULL && (obj->link->flags & 1) != 0) {
        return (obj->flags339C & 0x2000) >> 0xD;
    }
    return 1;
}

} /* extern "C" */
