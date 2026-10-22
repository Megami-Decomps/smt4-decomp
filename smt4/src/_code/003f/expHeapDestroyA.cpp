#include "common.h"

extern "C" {

int _ZN9Obj420f70D1Ev(void *object);
extern u8 g_nnFndExpHeapBaseVtable;
extern void nn_fnd_ExpHeapBase_Finalize(void *heap);

typedef struct Obj {
    /* 0x0 */ const void *vtbl;
} Obj;

/* Destructor: restores the base vtable, finalizes the heap, frees the object. */
void expHeapDestroyA(Obj *obj)
{
    obj->vtbl = &g_nnFndExpHeapBaseVtable;
    nn_fnd_ExpHeapBase_Finalize(obj);
    _ZN9Obj420f70D1Ev(obj);
}

} /* extern "C" */
