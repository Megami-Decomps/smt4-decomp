#include "common.h"

extern "C" {

int asdModelSlotRelease(int arg);
int asdMdlManagerDestroy(u32 handle);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 handles[3];
} Obj;

void mdlHandleArrayDestroy(Obj *obj)
{
    int i;

    if (obj->handles[0] != 0) {
        asdModelSlotRelease(0);
    }
    i = 0;
    do {
        if (obj->handles[i] != 0) {
            asdMdlManagerDestroy(obj->handles[i]);
            obj->handles[i] = 0;
        }
        i++;
    } while (i < 3);
}

} /* extern "C" */
