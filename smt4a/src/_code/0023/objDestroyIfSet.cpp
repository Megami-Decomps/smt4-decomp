#include "common.h"
#include "code/Code0023_Smt4a.h"

extern "C" {

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

/* Destroys the object, if there is one. */
void objDestroyIfSet(Object *object)
{
    if (object != NULL) {
        object->vtbl->destroy(object);
        return;
    }
}

} /* extern "C" */
