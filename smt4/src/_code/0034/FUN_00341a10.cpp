#include "common.h"

extern "C" {

int FUN_00152bec(void);
int asdMdlManagerDestroy(u32 model);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 model;
} Obj;

void FUN_00341a10(Obj *obj)
{
    if (obj->model != 0) {
        FUN_00152bec();
        asdMdlManagerDestroy(obj->model);
        obj->model = 0;
    }
}

} /* extern "C" */
