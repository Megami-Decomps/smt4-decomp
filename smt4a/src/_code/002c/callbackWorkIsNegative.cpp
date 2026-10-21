#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 value;
} Object;

extern Object *g_callbackWork;

/* Returns 1 if the object exists and its value is negative, else 0. */
/* Returns 1 if the object exists and its value is negative, else 0. */
u32 callbackWorkIsNegative(void)
{
    if (g_callbackWork == NULL) {
        return 0;
    }
    if (g_callbackWork->value < 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
