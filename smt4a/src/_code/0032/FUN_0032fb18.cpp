/* NON_MATCHING: with a result local the saved-register set (r4-r8) matches retail; retail materializes the zero from the loop counter (mov r7,r4) after the guard, selects the demon pointer with moveq/cmpne, and returns the zero inline. */
#include "common.h"

extern "C" {

typedef struct {
    u16 id;        /* 0x0 */
    u16 counts[3]; /* 0x2 */
} CallbackSlot;

CallbackSlot *FUN_002613f0(s32 index);

typedef struct {
    u8 unk0[4];
    u8 state;      /* 0x04 */
    u8 unk5[3];
    s32 timer;     /* 0x08 */
    u8 unkC[0x2c - 0xc];
    s32 slot;      /* 0x2c */
} CallbackWork;

extern CallbackWork *g_callbackWork;


typedef struct {
    u8 unk0[0x62];
    u16 id;        /* 0x62 */
} CallbackDemon;

/* Index of the slot holding `demon` when it has any count left, else -1. */
static s32 callbackFindSlot(CallbackDemon *demon)
{
    s32 i;

    for (i = 0; i < 24; i++) {
        if (FUN_002613f0(i)->id == demon->id) {
            if (FUN_002613f0(i)->counts[0] != 0 || FUN_002613f0(i)->counts[1] != 0 ||
                FUN_002613f0(i)->counts[2] != 0) {
                return i;
            }
            return -1;
        }
    }
    return -1;
}

/* Starts the callback for `demon`'s slot; returns 1 when started. */
s32 FUN_0032fb18(CallbackDemon *demon)
{
    CallbackWork *work = g_callbackWork;
    s32 result = 0;

    if (work != NULL && demon != NULL) {
        s32 slot = callbackFindSlot(demon);
        if (slot >= 0) {
            work->slot = slot;
            work->timer = 0;
            work->state = 3;
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
