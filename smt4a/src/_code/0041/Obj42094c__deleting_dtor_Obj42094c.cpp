#include "battle/Filter/Filter4Poly.h"
#include "classes/Obj42094c.h"

extern "C" {


extern const u8 _ZTV9Obj420794[];
extern const u8 _ZTV9Obj42094c[];

void _ZN9Obj42094cD0Ev(Filter4Poly *filter)
{
    filter->vtable = _ZTV9Obj42094c + 8;
    if (filter->dataB != NULL) {
        asdMemFree(filter->dataB);
        filter->dataB = NULL;
    }
    filter->vtable = _ZTV9Obj420794 + 8;
    if (filter->object != NULL) {
        obj420794ReleaseTexture(reinterpret_cast<u32>(filter->object));
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
