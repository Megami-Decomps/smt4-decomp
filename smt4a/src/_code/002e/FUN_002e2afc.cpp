#include "common.h"

extern "C" {

u32 FUN_002a4878(u8 *member);
u32 FUN_003da8f4(s32 value, u32 arg);

typedef struct Object {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u8 member40[0x64];
    /* 0xA4 */ s8 value;
} Object;
extern Object *g_camp;

/* Returns FUN_003da8f4(value, FUN_002a4878(member)) for the object at 0x57F108, or 0 when there is none. */
u32 FUN_002e2afc(void)
{
    Object *object;
    u32 arg;

    object = g_camp;
    if (g_camp != NULL) {
        arg = FUN_002a4878(g_camp->member40);
        arg = FUN_003da8f4((s32)object->value, arg);
        return arg;
    }
    return 0;
}

} /* extern "C" */
