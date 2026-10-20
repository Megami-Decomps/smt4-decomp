#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x352C];
    /* 0x352C */ s32 unk352C;
} Obj;

extern Obj *g_result;

u32 FUN_002b8660(void)
{
    u32 result;

    if ((g_result == NULL) || (g_result->unk352C == 0x14)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
