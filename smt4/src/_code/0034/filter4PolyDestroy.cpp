#include "battle/Filter/Filter4Poly.h"

extern "C" {

void bufferHandleRelease(void *object);
void asdMemFreeNonNull(Filter4Poly *filter);
void asdMemFree(void *block);

extern const u8 g_filter4PolyBaseVtable[];
extern const u8 g_filter4PolyVtable[];

/* Destructor of Filter4Poly. */
void filter4PolyDestroy(Filter4Poly *filter)
{
    filter->vtable = g_filter4PolyVtable;
    if (filter->dataB != NULL) {
        asdMemFree(filter->dataB);
        filter->dataB = NULL;
    }
    filter->vtable = g_filter4PolyBaseVtable;
    if (filter->object != NULL) {
        bufferHandleRelease(filter->object);
        filter->object = NULL;
    }
    if (filter->dataA != NULL) {
        asdMemFree(filter->dataA);
        filter->dataA = NULL;
    }
    if (filter->child != NULL) {
        filter->child->vtable[1](filter->child);
        filter->child = NULL;
    }
    asdMemFreeNonNull(filter);
}

} /* extern "C" */
