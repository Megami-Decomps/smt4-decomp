#include "common.h"

extern "C" {

typedef struct Actor {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 id;
} Actor;

Actor *FUN_00282b9c(void);
u32 requestKindToId(s32 id);
s32 FUN_0017ffa8(s32 kind, s32 type, u32 value, u32 arg0, u32 arg1, u32 arg2);

/* Sends the current actor's message (kind 2, type 11) with three extra arguments. */
void FUN_0035bd4c(u32 unused, u32 arg0, u32 arg1, u32 arg2)
{
    Actor *actor = FUN_00282b9c();

    if (actor != NULL) {
        u32 value = requestKindToId(actor->id);

        FUN_0017ffa8(2, 0xB, value, arg0, arg1, arg2);
    }
}

} /* extern "C" */
