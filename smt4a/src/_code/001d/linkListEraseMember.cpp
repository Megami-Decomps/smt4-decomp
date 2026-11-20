/* Forwards (this+0x1dc, other+4) to nw_ut_internal_LinkListImpl_erase_2B743C (tail call). */
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

void nw_ut_internal_LinkListImpl_erase_2B743C(u8 *member, u8 *part);

void linkListEraseMember(Owner *owner, Other *other)
{
    u8 *member = owner->member;

    nw_ut_internal_LinkListImpl_erase_2B743C(member, other->part);
}

} /* extern "C" */
