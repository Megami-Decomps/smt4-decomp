#include "common.h"

extern "C" {

extern int sys43e188GetState(void);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x430];
    /* 0x0430 */ u8 unk0430;
    /* 0x0431 */ u8 unk0431[0x91A7];
    /* 0x95D8 */ s32 unk95D8;
} Obj;

extern Obj *g_unite;

u32 FUN_00269d4c(void)
{
    Obj *obj = g_unite;

    if (obj == NULL) {
        return (u32)obj;
    }
    if (obj->unk95D8 != 0) {
        if (obj->unk0430 == 0 || (sys43e188GetState() == 0)) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
