/* NON_MATCHING: status and its list pointer swap callee-saved registers (r5/r4 instead of retail's r4/r5). */
#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 state;
    /* 0x404 */ s32 previousState;
    /* 0x408 */ s32 icon;
    /* 0x40C */ s32 unk40C;
    /* 0x410 */ u8 unk410;
    /* 0x411 */ u8 unk411[0x1B];
    /* 0x42C */ u8 slots[0x29];      /* filled with 0xFF */
    /* 0x455 */ u8 unk455[0x2B];
    /* 0x480 */ u8 regionCount;
    /* 0x481 */ u8 unk481[0x53];
    /* 0x4D4 */ u8 list[0x6C];
    /* 0x540 */ u32 unk540;
    /* 0x544 */ u32 unk544;
} StatusDown;

extern StatusDown *g_statusDown;

s32 FUN_0029ee54(void *list);
void FUN_0029f848(void *list, s32 count, s32 a, s32 b, s32 c, s32 d);
void FUN_0029eb5c(void *list, s32 index);
void ifTouchRegionRemove(void);
void *__aeabi_memset4(void *dest, s32 size, s32 value);
void FUN_0026ae68(void);

/* Stores the two values, appends an entry to the status list and selects it, drops the touch regions and moves to state 11. */
void FUN_002f6660(u32 first, u32 second)
{
    StatusDown *status = g_statusDown;
    void *list = status->list;
    StatusDown *current;
    s32 i;

    status->unk544 = first;
    status->unk540 = second;
    FUN_0029f848(list, FUN_0029ee54(list) + 1, 9, 1, 0, 1);
    FUN_0029eb5c(list, FUN_0029ee54(list) - 1);
    status->unk410 = 1;
    current = g_statusDown;
    for (i = 0; i < current->regionCount; i++) {
        ifTouchRegionRemove();
    }
    current->regionCount = 0;
    __aeabi_memset4(current->slots, 0x29, -1);
    current = g_statusDown;
    current->unk40C = 0;
    current->previousState = current->state;
    current->state = 11;
    FUN_0026ae68();
}

} /* extern "C" */
