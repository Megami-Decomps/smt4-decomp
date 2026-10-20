#include "common.h"

extern "C" {

typedef struct KindHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 kind;
} KindHolder;

extern KindHolder *DAT_0057f134;

/* Whether the current holder exists and its kind is 3, 5, 6 or 7. */
u32 holderKindIsActive(void)
{
    u8 kind;

    if (DAT_0057f134 == NULL) {
        return 0;
    }
    kind = DAT_0057f134->kind;
    if (kind == 3 || kind == 5 || kind == 6 || kind == 7) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
