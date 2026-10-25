#include "common.h"
#include <stddef.h>

extern "C" {

typedef struct Member {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id0;
    /* 0x22 */ s16 id1;
    /* 0x24 */ u16 unk24;
    /* 0x26 */ u16 unk26;
    /* 0x28 */ u16 unk28;
    /* 0x2A */ u16 unk2A;
    /* 0x2C */ u16 unk2C;
    /* 0x2E */ s16 id2;
    /* 0x30 */ u8 unk30[3];
    /* 0x33 */ u8 unk33;
    /* 0x34 */ u8 unk34;
    /* 0x35 */ s8 unk35;
    /* 0x36 */ u8 flagA : 1;
    /*      */ s8 flagB : 1;
    /*      */ u8 flagsRest : 6;
    /* 0x37 */ u8 unk37;
    /* 0x38 */ u8 unk38[0xB];
    /* 0x43 */ u8 unk43;
} Member;
typedef char MemberResetLayoutCheck[offsetof(Member, unk37) == 0x37 &&
    offsetof(Member, id2) == 0x2E && sizeof(Member) == 0x44 ? 1 : -1];

Member *FUN_0026140c(void);

/* Resets the member's ids to -1 and its counters and flags to 0. */
void FUN_0034c8e8(void)
{
    Member *member = FUN_0026140c();

    member->id0 = -1;
    member->id1 = -1;
    member->unk24 = 0;
    member->unk26 = 0;
    member->unk28 = 0;
    member->unk43 = 0;
    member->unk2A = 0;
    member->unk2C = 0;
    member->id2 = -1;
    member->unk33 = 0;
    member->unk34 = 0;
    member->unk35 = -1;
    member->flagA = 0;
    member->flagB = 0;
    member->unk37 = 0;
}

} /* extern "C" */
