/* NON_MATCHING: same stores and calls; armcc copies the third stacked argument through a VFP register (vldr/vstr) where retail loads all three with ldm and stores with stm */
#include "common.h"

/* One queued draw command (28 bytes). */
struct GfxCommand17ced4 {
    u8 type;
    u8 unk01[3];
    u32 first;
    u32 second;
    s32 third;
    s16 y;
    s16 x;
    s16 right;
    s16 bottom;
    u8 unk18[4];
};

struct GfxCommandList17ced4 {
    u8 unk00[0x18];
    GfxCommand17ced4 *commands;
    u8 unk1c[4];
    s32 count;
};

struct GfxContext17ced4 {
    u8 unk00[0x11];
    u8 flag11;
    u8 flag12;
    u8 unk13[0x89];
    GfxCommandList17ced4 *list;
    GfxCommandList17ced4 *current;
};

extern "C" {
extern GfxContext17ced4 g_asdGfxContext;
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

/* Queues a type-4 draw command (coordinates in 1/16 units) and wakes the renderer when this list is the current one. */
void FUN_0017ced4(u32 first, s32 x, s32 y, u32 second, s32 left, s32 top, s32 third)
{
    GfxCommandList17ced4 *list = g_asdGfxContext.list;
    GfxCommand17ced4 *command = &list->commands[list->count];
    command->type = 4;
    command->first = first;
    command->second = second;
    command->third = third;
    command->y = y >> 4;
    command->x = x >> 4;
    command->right = top >> 4;
    command->bottom = left >> 4;
    globalCriticalSectionEnterForward();
    list->count++;
    if (g_asdGfxContext.current == list && g_asdGfxContext.flag12 != 0 && g_asdGfxContext.flag11 == 0) {
        g_asdGfxContext.flag11 = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
