#include "common.h"

extern "C" {

int asdMdlManagerDestroy(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ int modelA;
    /* 0x9C */ int modelB;
} Obj;

void objDestroyModels(Obj *obj)
{
    if (obj->modelA != 0) {
        asdMdlManagerDestroy();
        obj->modelA = 0;
    }
    if (obj->modelB != 0) {
        asdMdlManagerDestroy();
        obj->modelB = 0;
    }
}

} /* extern "C" */
