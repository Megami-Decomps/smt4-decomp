#include "common.h"
#include <stddef.h>

extern "C" {

void asdMemFree(void *ptr);
void *asdOperatorDelete(void *handle);
void *FUN_003f2f1c(void *handle);
void *FUN_00414a24(void *handle);

/* The destructor of the subobject at +0x2c (returns its argument): a weak function armlink removed. */
__weak u8 *FUN_003fab40_subobjectDtor(u8 *subobject);

}

class Releasable {
public:
    virtual void unk00();
    virtual void release();
};

struct Obj003fab40 {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ u8 subobject[4];
    /* 0x30 */ void *handleA;
    /* 0x34 */ Releasable *resourceA;
    /* 0x38 */ u8 unk38[4];
    /* 0x3c */ Releasable *resourceB;
    /* 0x40 */ Releasable *resourceC;
    /* 0x44 */ void *handleB;
    /* 0x48 */ void *buffer;
};

/* Releases everything the object owns and clears the fields; returns the object. */
extern "C" Obj003fab40 *obj003fab40Release(Obj003fab40 *obj)
{
    if (obj->handleA != NULL) {
        asdOperatorDelete(FUN_003f2f1c(obj->handleA));
        obj->handleA = NULL;
    }
    if (obj->resourceA != NULL) {
        obj->resourceA->release();
        obj->resourceA = NULL;
    }
    if (obj->resourceB != NULL) {
        obj->resourceB->release();
        obj->resourceB = NULL;
    }
    if (obj->resourceC != NULL) {
        obj->resourceC->release();
        obj->resourceC = NULL;
    }
    if (obj->handleB != NULL) {
        asdOperatorDelete(FUN_00414a24(obj->handleB));
        obj->handleB = NULL;
    }
    if (obj->buffer != NULL) {
        asdMemFree(obj->buffer);
        obj->buffer = NULL;
    }
    return (Obj003fab40 *)(FUN_003fab40_subobjectDtor(obj->subobject) - offsetof(Obj003fab40, subobject));
}
