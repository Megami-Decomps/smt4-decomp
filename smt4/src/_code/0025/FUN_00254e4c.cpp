/* Loads the four setting values from the owner's table into the context and refreshes dependent state. */
#include "common.h"

extern "C" {

typedef struct Settings {
    /* 0x00 */ u16 value[4];
} Settings;

typedef struct Context {
    /* 0x0000 */ u32 owner;
    /* 0x0004 */ u8 unk0004[0x245C];
    /* 0x2460 */ u8 unk2460[0x5A34];
    /* 0x7E94 */ Settings settings;
} Context;

typedef struct ContextHolder {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Context *context;
} ContextHolder;

extern ContextHolder g_btlUi;

extern void memFill8(Settings *settings, s32 arg);
extern u16 FUN_0022c930(u32 owner, s32 index);
extern void FUN_002ad8a8(void *dest, Settings *settings);

void FUN_00254e4c(void)
{
    Context *context = g_btlUi.context;

    memFill8(&context->settings, -1);
    context->settings.value[0] = FUN_0022c930(context->owner, 0);
    context->settings.value[1] = FUN_0022c930(context->owner, 1);
    context->settings.value[2] = FUN_0022c930(context->owner, 2);
    context->settings.value[3] = FUN_0022c930(context->owner, 3);
    FUN_002ad8a8(context->unk2460, &context->settings);
}

}
