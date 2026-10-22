#include "battle/Filter/Filter4Poly.h"
#include "classes/Obj42094c.h"

extern "C" {

void textureOwnerReset(void *object);
void asdOperatorDelete(Filter4Poly *filter);

extern const u8 _ZTV9Obj420794[];
extern const u8 _ZTV9Obj42094c[];

/* C ABI retained: this game's base resets a texture owner, unlike the shared handle-release base. */
void _ZN9Obj42094cD0Ev(Filter4Poly *filter)
{
    filter->vtable = _ZTV9Obj42094c + 8;
    if (filter->dataB != NULL) {
        asdMemFree(filter->dataB);
        filter->dataB = NULL;
    }
    filter->vtable = _ZTV9Obj420794 + 8;
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
