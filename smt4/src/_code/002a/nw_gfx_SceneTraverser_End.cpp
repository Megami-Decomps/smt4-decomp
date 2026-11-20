#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 unk8;
} Obj;

void nw_gfx_SceneTraverser_End(Obj *obj)
{
    obj->unk8 = 0;
}

} /* extern "C" */
