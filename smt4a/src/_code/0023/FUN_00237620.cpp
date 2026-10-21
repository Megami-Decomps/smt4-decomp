#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0xF4];
    /* 0xF4 */ u32 handle;
} Object;

typedef struct Global57f110 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object *object;
} Global57f110;
extern Global57f110 g_campCec;

s32 scrRunOpcodesStub(u32 handle);

/* Returns 1 when the held object exists and scrRunOpcodesStub does not report 2 for its handle. */
u8 FUN_00237620(void)
{
    s32 state;

    if (g_campCec.object != NULL) {
        state = scrRunOpcodesStub(g_campCec.object->handle);
        if (state == 2) {
            return 0;
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
