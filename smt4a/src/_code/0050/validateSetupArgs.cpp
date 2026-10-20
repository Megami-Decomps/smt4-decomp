#include "shard/Shard0050.h"

extern "C" {

typedef struct Valid1C {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 unk1C;
} Valid1C;

/* Validates the setup arguments, returning 0 or an SDK error code. */
u32 validateSetupArgs(Valid1C *obj, s32 a, s32 b, u32 count)
{
    u32 result;

    if (obj->unk1C == 0) {
        result = 0xD820EBF8;
    } else if (a == 0 || b == 0) {
        result = 0xE0E0EBF6;
    } else if (count > 0x10) {
        result = 0xE0E0EBEC;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
