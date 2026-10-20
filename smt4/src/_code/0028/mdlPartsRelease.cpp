#include "common.h"

extern "C" {

int asdMdlManagerDestroy(int handle);
int asdMemFree(int ptr);

typedef struct Part {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ int model;
    /* 0x0C */ int buffer;
    /* 0x10 */ u8 unk10[0x40];
} Part;

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ int model;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ Part parts[3];
} Obj;

/* Releases the model and buffer of each of the three parts, then the object's own model. */
void mdlPartsRelease(Obj *obj)
{
    int i = 0;
    Part *part;

    do {
        part = &obj->parts[i];
        if (part->model != 0) {
            asdMdlManagerDestroy(part->model);
            part->model = 0;
        }
        if (part->buffer != 0) {
            asdMemFree(part->buffer);
            part->buffer = 0;
        }
        i = i + 1;
    } while (i < 3);
    if (obj->model != 0) {
        asdMdlManagerDestroy(obj->model);
        obj->model = 0;
    }
}

} /* extern "C" */
