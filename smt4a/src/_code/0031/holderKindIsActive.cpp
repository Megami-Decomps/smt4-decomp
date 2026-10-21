#include "common.h"

extern "C" {

typedef struct KindHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 kind;
} KindHolder;

extern KindHolder *g_callbackWork;

/* Whether the current holder exists and its kind is 3, 5, 6 or 7. */
u32 holderKindIsActive(void)
{
    u8 kind;

    if (g_callbackWork == NULL) {
        return 0;
    }
    kind = g_callbackWork->kind;
    if (kind == 3 || kind == 5 || kind == 6 || kind == 7) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
