/* Forwards (this+0x1dc, other+4) to FUN_001b6668 (tail call). */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk000[0x1dc];  /* 0x000 */
    u8 member[1];      /* 0x1dc */
} Owner;

typedef struct {
    u8 unk00[4];       /* 0x00 */
    u8 part[1];        /* 0x04 */
} Other;

void FUN_001b6668(u8 *member, u8 *part);

void FUN_001d0b28(Owner *owner, Other *other)
{
    u8 *member = owner->member;

    FUN_001b6668(member, other->part);
}

} /* extern "C" */
