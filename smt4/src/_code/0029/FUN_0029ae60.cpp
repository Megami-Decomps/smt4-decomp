#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x000 */ u8 unk000[0x1F6];
    /* 0x1F6 */ u8 unk1F6;
} Inner;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ Inner *inner;
} Holder;

typedef struct Part {
    /* 0x0 */ u32 flags;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ Holder *holder;
} Part;

typedef struct Group {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Part *partA;
    /* 0x0C */ u8 unk0C[0xC];
    /* 0x18 */ Part *partB;
    /* 0x1C */ u8 unk1C[0x4C];
    /* 0x68 */ Part *partC;
    /* 0x6C */ u8 unk6C[0x4C];
    /* 0xB8 */ Part *partD;
} Group;

/* Clears flag 2 on each part and marks its holder's inner flag. */
void FUN_0029ae60(Group *group)
{
    Part *part;

    part = group->partA;
    part->flags = part->flags & 0xfffffffd;
    part->holder->inner->unk1F6 = 1;
    part = group->partB;
    if (part != NULL) {
        part->flags = part->flags & 0xfffffffd;
        part->holder->inner->unk1F6 = 1;
    }
    part = group->partC;
    if (part != NULL) {
        part->flags = part->flags & 0xfffffffd;
        part->holder->inner->unk1F6 = 1;
    }
    part = group->partD;
    if (part != NULL) {
        part->flags = part->flags & 0xfffffffd;
        part->holder->inner->unk1F6 = 1;
    }
}

} /* extern "C" */
