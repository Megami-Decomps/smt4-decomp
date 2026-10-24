#include "common.h"

extern "C" {

void geometryDestroy(void *geometry);
void asdMemFree(void *block);

struct Holder {
    void *geometry;
};

/* Destroys the object's geometry and frees the object. */
void FUN_00315610(Holder *object)
{
    geometryDestroy(object->geometry);
    asdMemFree(object);
}

} /* extern "C" */
