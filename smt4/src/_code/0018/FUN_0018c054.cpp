#include "common.h"

struct EventTexState {
    u32 *job;        // 0x00
    u8 unk04[0x5C];  // 0x04
    u32 slotA;       // 0x60
    u32 slotB;       // 0x64
};

extern "C" {

extern EventTexState *g_eventTex;

s32 scrGetArg(u32 index);
u32 *FUN_002ebe68(u32 *a, u32 *b, f32 start, f32 end);
s32 jobIsValid(u32 *job);
void jobSetParent(u32 *parent, u32 *job);

/* Script command: starts the event texture transition `arg0` (start value 2, 4 or 6) towards arg1 and parents the new job. */
s32 FUN_0018c054(void)
{
    s32 index = scrGetArg(0);
    s32 end = scrGetArg(1);
    const f32 starts[3] = {2.0f, 4.0f, 6.0f};
    u32 *job = FUN_002ebe68(&g_eventTex->slotA, &g_eventTex->slotB, starts[index], (f32)end);

    if (jobIsValid(job) != 0) {
        jobSetParent(g_eventTex->job, job);
    }
    return 1;
}

} /* extern "C" */
