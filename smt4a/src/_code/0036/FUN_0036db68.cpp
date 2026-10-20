/* Arms the menu state: flags it active, records the caller's value and the current tick, then restarts its embedded widget animation. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[0x78];    /* 0x000 */
    u32 param;         /* 0x078 */
    u32 startTick;     /* 0x07c */
    u8 unk80[8];       /* 0x080 */
    u32 lastTick;      /* 0x088 */
    u8 unk8c;          /* 0x08c */
    u8 armed;          /* 0x08d */
    u8 unk8e;          /* 0x08e */
    u8 active;         /* 0x08f */
    u8 unk90[0x104];   /* 0x090 */
    u8 slots[0x96c];   /* 0x194 */
    u8 widget[1];      /* 0xb00 */
} MenuState;

typedef struct {
    u8 unk00[8];       /* 0x00 */
    MenuState *state;  /* 0x08 */
} MenuGlobals;

extern MenuGlobals DAT_0057f588;

u32 FUN_001ba3d4(void);
void FUN_0014e188(void *widget, s32 a, u32 b, void *slots, s32 c, f32 scale);
void FUN_001846d0(void *widget, s32 a);
void FUN_00184b80(void *widget, s32 a);

u32 FUN_0036db68(u32 param)
{
    MenuState *state = DAT_0057f588.state;
    u32 tick;

    state->active = 1;
    state->armed = 1;
    state->param = param;
    tick = FUN_001ba3d4();
    state->startTick = tick;
    state->lastTick = tick;
    FUN_0014e188(state->widget, 8, 0xffffffff, state->slots, 0xb, 1.0f);
    FUN_00184b80(state->widget, 10);
    FUN_001846d0(state->widget, 6);
    return 1;
}

} /* extern "C" */
