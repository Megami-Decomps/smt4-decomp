#include "common.h"

extern "C" {

int FUN_00297684(u32 value);
int statusCameraApply(void);

struct StatusContext;
typedef int (*StateHandler)(struct StatusContext *context);

typedef struct StatusCamera {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 unk1C;
} StatusCamera;

typedef struct StatusContext {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ StateHandler handlers[0x26];
    /* 0x0A0 */ StatusCamera camera;
    /* 0x0C0 */ u8 unk0C0[0xC64];
    /* 0xD24 */ s32 prevState;
    /* 0xD28 */ s32 state;
    /* 0xD2C */ s32 nextState;
} StatusContext;

extern StatusContext *g_campCec;

/* Runs the current state's handler; when it returns 2, switches to the queued state. Then applies the camera outside the idle/special states. */
u32 campCecUpdateState(void)
{
    StatusContext *context = g_campCec;
    StateHandler handler = context->handlers[context->state];
    StatusCamera *camera;

    if (handler != NULL && handler(context) == 2) {
        if (context->nextState != -1) {
            context->prevState = context->state;
            context->state = context->nextState;
            context->nextState = -1;
        }
    }
    camera = &context->camera;
    if (context->state > 0 && (context->state != 0xd && context->state != 0xf)) {
        statusCameraApply();
        FUN_00297684(camera->unk1C);
    }
    return 0;
}

} /* extern "C" */
