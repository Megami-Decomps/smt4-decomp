/* NON_MATCHING: retail 61 vs built 61 rows; process argument setup and flag-update register allocation differ. */
#include "gfx/DrawParameterOwner.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern u32 g_aocMain;
extern const char DAT_003ff778[]; // "Aoc board CALC"
extern const char DAT_003ff768[]; // "Aoc board UP L"
extern const char DAT_003ff758[]; // "Aoc board UP R"
extern const char DAT_003ff748[]; // "Aoc board DOWN"
u32 FUN_002347b8(u32, u32, void *);
s32 FUN_0038a1e0(u32);
s32 FUN_0038a478(u32);
s32 FUN_0038aa80(u32);
u32 asdProcessCreateSimple(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, void *);

void FUN_0038abbc(DrawParameterOwner *state, u32 resource, u8 enabled, u32 parameter)
{
    state->control.parameter = parameter;
    state->control.frame = 0;
    state->enabled = enabled;
    state->control.resource = FUN_002347b8(g_aocMain, resource, state->unk014);
    u32 flags = state->control.flags;
    state->control.flags = flags & ~0x20u;
    if ((flags & 0x10) == 0) {
        state->control.flags = (flags & ~0x20u) | 0x10;
        state->unk418 = 0;
        state->control.process = asdProcessCreateSimple(DAT_003ff778, 2, 0, 0,
                                                       FUN_0038a1e0, NULL, reinterpret_cast<u32>(state));
        taskCreateDraw(DAT_003ff768, 0x82, 1, 0, FUN_0038a478, NULL,
                       reinterpret_cast<u32>(state), reinterpret_cast<void *>(state->control.process));
        taskCreateDraw(DAT_003ff758, 0xE0, 1, 0, FUN_0038a478, NULL,
                       reinterpret_cast<u32>(state), reinterpret_cast<void *>(state->control.process));
        taskCreateDraw(DAT_003ff748, 0x160, 1, 0, FUN_0038aa80, NULL,
                       reinterpret_cast<u32>(state), reinterpret_cast<void *>(state->control.process));
    }
}
}
