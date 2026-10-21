#include "common.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int asdMdlManagerDestroy(u32 model);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 model;
} Obj;

void objModelDestroy(Obj *obj)
{
    if (obj->model != 0) {
        asdMdlManagerMarkDestroy();
        asdMdlManagerDestroy(obj->model);
        obj->model = 0;
    }
}

} /* extern "C" */
