#include "common.h"

extern "C" {

int asdMemFree(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ int buffers[0x38];
} Obj;

Obj *bufferArrayFree(Obj *obj)
{
    int i = 0;

    do {
        if (obj->buffers[i] != 0) {
            asdMemFree();
        }
        i = i + 1;
    } while (i < 0x38);
    return obj;
}

} /* extern "C" */
