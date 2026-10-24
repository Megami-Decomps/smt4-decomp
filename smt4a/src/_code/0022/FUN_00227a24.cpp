#include "common.h"

struct Record {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 next;
    /* 0x1c */ u8 unk1c[4];
};

struct Link {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 record;
};

struct FollowContext {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 index;
    /* 0x1c */ u8 unk1c[0x98];
    /* 0xb4 */ Record *records;
    /* 0xb8 */ u8 unkb8[4];
    /* 0xbc */ Link *links;
};

extern "C" {

/* Script opcode: replaces the current index with the next index of the record its link points at. */
u32 FUN_00227a24(FollowContext *context)
{
    context->index = context->records[context->links[context->index].record].next;
    return 1;
}

} /* extern "C" */
