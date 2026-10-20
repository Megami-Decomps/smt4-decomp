#include "common.h"

extern "C" {

int asdMdlManagerDestroy(void);
extern int asdMdlManagerClone(u32 model, u32 flags);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 type;
    /* 0x0E */ u8 unk0E[0x46];
    /* 0x54 */ int model;
} Obj;

void FUN_00318cb8(Obj *dst, Obj *src)
{
    int clone;

    if (src->type == 3) {
        if (dst->model != 0) {
            asdMdlManagerDestroy();
        }
        clone = asdMdlManagerClone(src->model, 0);
        dst->model = clone;
        *(u32 *)(*(int *)(*(int *)(*(int *)(*(int *)(clone + 8) + 0x2c) + 0x220) + 8) + 0x28) = 1;
    }
    dst->type = src->type;
}

} /* extern "C" */
