#include "common.h"

extern "C" {

typedef struct Owner001d25c8 {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[0x20];
    /* 0x24 */ u32 drawTask;
} Owner001d25c8;

void FUN_001b5154(void);
void FUN_0020ed98(void);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*update)(void), void (*draw)(void), void *owner, u32 id);

/* Creates the owner's "btlAuto Calc" draw task. */
void btlAutoCalcTaskCreate(Owner001d25c8 *owner)
{
    owner->drawTask = taskCreateDraw("btlAuto Calc", 2, 0, 0, FUN_001b5154, FUN_0020ed98, owner, owner->id);
}

} /* extern "C" */
