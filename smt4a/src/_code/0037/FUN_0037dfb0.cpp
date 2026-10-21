/* NON_MATCHING: register naming only: retail keeps the status block in r4 and the list pointer (add r0; mov r5, r0) in r5; the build swaps them. */
#include "common.h"

extern "C" {

typedef struct StatusList {
    /* 0x00 */ u8 unk00[0x10];
} StatusList;

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ u32 state;
    /* 0x51C */ u32 prevState;
    /* 0x520 */ u8 unk520[4];
    /* 0x524 */ u32 unk524;
    /* 0x528 */ u8 unk528;
    /* 0x529 */ u8 unk529[0x1B];
    /* 0x544 */ u8 slots[0x54];
    /* 0x598 */ u8 unk598[2];
    /* 0x59A */ u8 touchRegionCount;
    /* 0x59B */ u8 unk59B[0x51];
    /* 0x5EC */ StatusList list;
    /* 0x5FC */ u8 unk5FC[0x5C];
    /* 0x658 */ u32 argA;
    /* 0x65C */ u32 argB;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x588fe8 */

extern int ifTouchRegionRemove(void);
extern void __aeabi_memset4(void *dst, int size, u32 value);
extern int FUN_00203b40(StatusList *list, int a, int b, int c, int d, int e);
extern int FUN_00230d30(void);
extern int FUN_002a4964(StatusList *list, int index);
extern int objectApplyIfUnblocked(StatusList *list);

/* Opens the status screen's list with the two arguments: rebuilds the list, resets the touch regions and slots and enters state 0xE. */
void FUN_0037dfb0(u32 argA, u32 argB)
{
    StatusDown *status = g_statusDown;
    u32 previous;
    int i;

    status->argB = argA;
    status->argA = argB;
    FUN_00203b40(&status->list, objectApplyIfUnblocked(&status->list) + 1, 9, 1, 0, 1);
    FUN_002a4964(&status->list, objectApplyIfUnblocked(&status->list) - 1);
    status->unk528 = 1;
    status = g_statusDown;
    for (i = 0; i < status->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    status->touchRegionCount = 0;
    __aeabi_memset4(status->slots, 0x54, 0xFFFFFFFF);
    status = g_statusDown;
    status->unk524 = 0;
    previous = status->state;
    status->state = 0xE;
    status->prevState = previous;
    FUN_00230d30();
}

} /* extern "C" */
