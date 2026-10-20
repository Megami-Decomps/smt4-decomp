#include "common.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int asdMdlManagerDestroy(u32 model);
int asdMemFreeNonNull(void *object);
extern u8 DAT_0042231c;

struct Object;
typedef struct ObjectVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*destroy)(struct Object *object);
} ObjectVtbl;

typedef struct Object {
    /* 0x0 */ ObjectVtbl *vtbl;
} Object;

typedef struct Obj {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[0x64];
    /* 0x68 */ Object *child;
    /* 0x6C */ u32 model;
} Obj;

/* Destructor: releases the child object and the model, then the object. */
void FUN_003962b8(Obj *obj)
{
    obj->vtbl = &DAT_0042231c;
    if (obj->child != NULL) {
        obj->child->vtbl->destroy(obj->child);
        obj->child = NULL;
    }
    if (obj->model != 0) {
        asdMdlManagerMarkDestroy();
        asdMdlManagerDestroy(obj->model);
        obj->model = 0;
    }
    asdMemFreeNonNull(obj);
}

} /* extern "C" */
