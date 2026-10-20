/* NON_MATCHING: the first read of the dirty flag uses the shared base (add r4, r0, #4096) instead of a literal register offset (ldr r1, =0x11dc; ldrb r1, [r1, r0]). */
#include "common.h"

extern "C" {

typedef struct Light {
    /* 0x0000 */ u8 unk0000[0x52C];
    /* 0x052C */ u32 target;
    /* 0x0530 */ u8 unk0530[0xC9C];
    /* 0x11CC */ u8 params[0xC];
    /* 0x11D8 */ f32 intensity;
    /* 0x11DC */ u8 dirty;
} Light;

int FUN_002b634c(u32 target, void *params);

/* Sets the light's intensity; when it changed (or was marked dirty) pushes the parameters to the target. Clears the dirty flag. */
void FUN_001464cc(Light *light, f32 intensity)
{
    bool unchanged = false;

    if (light->dirty == 0) {
        unchanged = light->intensity == intensity;
    }
    if (!unchanged) {
        light->intensity = intensity;
        FUN_002b634c(light->target, light->params);
    }
    light->dirty = 0;
}

} /* extern "C" */
