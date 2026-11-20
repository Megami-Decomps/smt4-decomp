#include "common.h"

extern "C" {

typedef struct Object002d8214 {
    /* 0x00 */ u8 unk00[0x6c];
    /* 0x6c */ u8 flag;
} Object002d8214;

extern Object002d8214 *g_effectColorOverride;

/* True when the global object exists and its flag is set. */
u8 gameObjectFlagIsSet(void)
{
    u8 result = g_effectColorOverride != NULL ? g_effectColorOverride->flag : 0;

    if (result != 0) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
