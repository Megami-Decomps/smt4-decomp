#include "common.h"

extern "C" {

typedef struct Global594a58 {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 override;
} Global594a58;
extern Global594a58 g_onlineRegistry;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x1A];
    /* 0x1A */ u8 mode;
} Holder;

/* Returns 3 while the override word at 0x50 of the global at 0x594A58 is set, otherwise the byte at 0x1A. */
u8 FUN_002fdb0c(Holder *object)
{
    if (g_onlineRegistry.override != 0) {
        return 3;
    }
    return object->mode;
}

} /* extern "C" */
