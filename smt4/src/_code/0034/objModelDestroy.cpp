#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ AsdMdlObject *model;
} Obj;

void objModelDestroy(Obj *obj)
{
    if (obj->model != NULL) {
        asdMdlManagerMarkDestroy(obj->model);
        asdMdlManagerDestroy(obj->model);
        obj->model = NULL;
    }
}

} /* extern "C" */
