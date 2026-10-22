#include "battle/Filter/Filter4Poly.h"

extern "C" {

void textureOwnerReset(void *object);
void asdOperatorDelete(Filter4Poly *filter);
void asdMemFree(void *block);

extern const u8 g_filter4PolyBaseVtable[];
extern const u8 g_filter4PolyVtable[];

/* Destructor of Filter4Poly. */
void _ZN9Obj42094cD0Ev(Filter4Poly *filter)
{
    filter->vtable = g_filter4PolyVtable;
    if (filter->dataB != NULL) {
        asdMemFree(filter->dataB);
        filter->dataB = NULL;
    }
    filter->vtable = g_filter4PolyBaseVtable;
    if (filter->object != NULL) {
        textureOwnerReset(filter->object);
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
    asdOperatorDelete(filter);
}

} /* extern "C" */
